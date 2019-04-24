#include "Chesslib.h"

int Plus::attack(char* p)
{
if(deskout(p)>0)
    return(0);
int x=p[0]-pos[0];
int y=p[1]-pos[1];
if(x<0)x= -x;
if(y<0)y= -y;
if((x+y)<2)
    return(1);
return(0);
}

int Cros::attack(char* p)
{
if(deskout(p)>0)
return(0);
int x=p[0]-pos[0];
int y=p[1]-pos[1];
if(x<0) x= -x;
if(y<0) y= -y;
if(((x+y)>2)||(x !=y))
    return(0);
return(1);
}

int Star::attack(char* s)
{
if(Plus::attack(s)>0)
    return(1);
if(Cros::attack(s)>0)
    return(1);
return(0);
}

int Zebra::attack(char* z)
{
    if(deskout(z)>0)
        return(0);
    int x=z[0]-pos[0];
    int y=z[1]-pos[1];
    if(x<0) x=-x;
    if(y<0) y=-y;
    if(((x==2)&&(y==3))||((x==3)&&(y==2)))
        return(1);
    return(0);
}

int Consul::attack(char* c)
{
    if(Plus::attack(c)>0)
        return(1);
    if(Cros::attack(c)>0)
        return(1);
    if(Zebra::attack(c)>0)
        return(2);
    return(0);
}
