#ifndef CHESSMAN
#define CHESSMAN
#include <iostream>

class Figure
{
protected:
char pos[4];
public:
Figure(char*);
Figure(){};
virtual int attack(char*)=0;
virtual char isa()=0;
operator char*();
static int deskout(char*);
int danger();
Figure& operator=(char*);
int operator==(char*);
int operator!=(char*);
friend std::ostream& operator<<(std::ostream&,Figure&);
friend std::istream& operator>>(std::istream&,Figure&);
};
#endif
