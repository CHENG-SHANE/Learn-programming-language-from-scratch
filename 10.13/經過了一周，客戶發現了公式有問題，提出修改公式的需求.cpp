#include<iostream>
#include<iomanip>
using namespace std;
double A,B,C,D;

double computeABCD(double A,double B,double C,double D){
	return (A*B)/(C+D);
}

double I(double A,double B,double C,double D){
	return (computeABCD(A,B,C,D)/10.0 + B/C + computeABCD(A,B,C,D)/10.0 )*(A+B+C+D)/10.0;
}

double J(double A,double B,double C,double D){
	return (computeABCD(A,B,C,D)/10.0 + A/C + computeABCD(A,B,C,D)/10.0 )*(A+B+C+D)/10.0;
}

double K(double A,double B,double C,double D){
	return (computeABCD(A,B,C,D)/10.0 + (A+B)/C + computeABCD(A,B,C,D)/10.0 )*(A+B+C+D)/10.0;
}

main(){
	cin>> A >> B >> C >> D ;
	cout << setprecision(16) <<I(A,B,C,D)+J(A,B,C,D)+K(A,B,C,D);
} 
