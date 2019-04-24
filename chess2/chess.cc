#include <iostream>
#include "Chesslib.h"

int main(int argc, char* argv[])
{
if(argc<2)
argv[1]="nil";
if(Figure::deskout(argv[1]))
{
std::cout<<"Correct "<<argv[1];
std::cout<<" to "<<(argv[1]="a1")<<" Default\n";
std::cout<<"Usage example: chess+ e5\n";
}
Consul f(argv[1]);
do
{
f.danger();
std::cout<<f<<'-'<<f.isa();
}while(std::cin>>f);
return(0);
}

