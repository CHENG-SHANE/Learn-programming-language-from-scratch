#include<iostream>
#include<iomanip>
using namespace std;




double third(double A,double B,double C,double D){ 

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
} 

	
	
	
	
	
int prime_number(int n)
  {
    for (int x = 2; x < n; x++) 
    {
        int counter = 0; 
        for (int i = 1; i <= x; i++)
        {

            if (x % i == 0)
            {
                counter++;
            }
        }
        if (counter==2)
        {
         cout << x << endl;
        }
    }
  }	
  
  
 int math(int a, int b){    

    while( cin >> a >> b )
    {
        while( a!=0 and b!=0 )
        {
            if( a >= b )
            {
                a = a%b;
            }
            else if( b > a )
            {
                b = b%a;
            }
        }

        if( a >= b )
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
} 

	main(){
	cin>> A >> B >> C >> D ;
	cout << setprecision(16) <<I(A,B,C,D)+J(A,B,C,D)+K(A,B,C,D);
	} 

  


