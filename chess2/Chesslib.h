#ifndef CHESSLIB
#define CHESSLIB

#include "Chessman.h"

class Plus:virtual public Figure
{
public:
Plus(char* p):Figure(p){};
Plus() {};
char isa(){ return 'P';};
int attack(char*);
};

class Cros:virtual public Figure
{
public:
Cros(char* p):Figure(p){};
Cros() {};
char isa() {return 'K';};
int attack(char*);
};

class Zebra:virtual public Figure
{
public:
Zebra(char* p):Figure(p){};
Zebra() {};
char isa() {return 'Z';};
int attack(char*);
};

class Star:public Plus, public Cros
{
public:
Star(char* p):Figure(p) {};
Star() {};
char isa() {return'S';};
int attack(char*);
};

class Consul:public Zebra, public Star
{
public:
    Consul(char* p):Figure(p) {};
    Consul() {};
    char isa() {return'C';};
    int attack(char*);
};
#endif
