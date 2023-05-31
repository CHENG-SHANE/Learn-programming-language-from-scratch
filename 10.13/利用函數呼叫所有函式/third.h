#include<iostream>
#include<iomanip>
using namespace std;
double A2,B2,C2,D2;

double computeABCD(double A2,double B2,double C2,double D2){
	return (A2*B2)/(C2+D2);
}

double I2(double A2,double B2,double C2,double D2){
	return (computeABCD(A2,B2,C2,D2)/10.0 + B2/C2 + computeABCD(A2,B2,C2,D2)/10.0 )*(A2+B2+C2+D2)/10.0;
}

double J2(double A2,double B2,double C2,double D2){
	return (computeABCD(A2,B2,C2,D2)/10.0 + A2/C2 + computeABCD(A2,B2,C2,D2)/10.0 )*(A2+B2+C2+D2)/10.0;
}

double K2(double A,double B,double C,double D){
	return (computeABCD(A2,B2,C2,D2)/10.0 + (A2+B2)/C2 + computeABCD(A2,B2,C2,D2)/10.0 )*(A2+B2+C2+D2)/10.0;
}

