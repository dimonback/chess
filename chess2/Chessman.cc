#include "Chessman.h"
using std::cout;

Figure::Figure(char* p)
{
pos[0]=p[0]; pos[1]=p[1]; pos[2]=pos[3]='\0';
}

Figure::operator char*()
{
return pos;
}

int Figure::deskout(char*p)
{
return((p[0]>'h')||(p[0]<'a')||(p[1]<'1')||(p[1]>'8'));
}

Figure& Figure::operator=(char* p)
{
pos[0]=p[0];pos[1]=p[1];
return(*this);
}

int Figure::operator==(char* p)
{
return((pos[0]==p[0])&&(pos[1]==p[1]));
}

int Figure::operator!=(char* p)
{
return((pos[0]!=p[0])||(pos[1]!=p[1]));
}

std::ostream& operator<<(std::ostream& out, Figure& f)
{
return out<<f.isa()<<f.pos[0]<<f.pos[1];
}
std::istream& operator>>(std::istream& in, Figure& f)
{
char с[2];
std::cin.unsetf(std::ios::skipws);
in>>с[0]>>с[1];
in.ignore(64, '\n');
if((f.attack(с)==0) ||(f==с))
in.clear(std::ios::failbit | in.rdstate());
f=с;
return in;
}

int Figure::danger()
{
int i,j;
char c[2];
char* mark=".x+";
char m;
cout<<"  a b c d e f g h\n";
for(i=8;i>0;i--)
{
cout<<i<<' ';
c[1]='0'+i;
for(j=0;j<8;j++)
{
c[0]='a'+j;
    m=(*this!=c)? mark[attack(c)]:isa();
cout<<m<<' ';
}
cout<<i<<"\n";
}
cout<<"  a b c d e f g h\n";
return(0);
}




