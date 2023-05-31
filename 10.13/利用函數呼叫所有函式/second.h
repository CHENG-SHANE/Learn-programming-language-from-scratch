#include<iostream>
#include<iomanip>
using namespace std;
double A,B,C,D;
double I(double A,double B,double C,double D){
return ((A+B+C+D)/10.0 + B/C + (A+B+C+D)/10.0 )*(A+B+C+D)/10.0;
}

double J(double A,double B,double C,double D){
return ((A+B+C+D)/10.0 + A/C + (A+B+C+D)/10.0 )*(A+B+C+D)/10.0;
}

double K(double A,double B,double C,double D){
return ((A+B+C+D)/10.0 + (A+B)/C + (A+B+C+D)/10.0 )*(A+B+C+D)/10.0;
}

