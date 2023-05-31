#include <iostream>
#include <math.h> 
using namespace std;
main()
{ 
float cm;
float m;
float kg;

cout << "請輸入身高與體重:"; 
cin >> cm >> kg; 
m=cm/100;
	
if(kg/(pow(m,2))<18.5 )
	{cout << "過輕";}

if(kg/(pow(m,2))<24 && kg/(pow(m,2))>=18.5 )
	{cout << "標準體重";}

if(kg/(pow(m,2))<27 && kg/(pow(m,2))>=24)
	{cout << "過重";}

if(kg/(pow(m,2))>27 )
	{cout << "肥胖";}

}
