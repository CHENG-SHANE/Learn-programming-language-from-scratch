#include <iostream>
#include <math.h> 
using namespace std;
main()
{ 
float cm;
float m;
float kg;

cout << "�п�J�����P�魫:"; 
cin >> cm >> kg; 
m=cm/100;
	
if(kg/(pow(m,2))<18.5 )
	{cout << "�L��";}

if(kg/(pow(m,2))<24 && kg/(pow(m,2))>=18.5 )
	{cout << "�з��魫";}

if(kg/(pow(m,2))<27 && kg/(pow(m,2))>=24)
	{cout << "�L��";}

if(kg/(pow(m,2))>27 )
	{cout << "�έD";}

}
