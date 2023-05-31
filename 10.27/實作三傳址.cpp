#include <iostream>
using namespace std;

int method(int *i,int *j){
	return *i+*j;
}
int method(int *i,int *j,int *k){
	return *i+*j+*k;
}
double method(double *x,double *y){
	return *x+*y;
}

void test(){
	
	int i=1, j=2, k=3;
	int a1= method(&i,&j);
	cout << "The return value(i+j):" << a1 << endl;
	
	i=5, j=6;
	int a2 =method(&i,&j,&k);
	cout << "The return value(i+j+k):" << a2 << endl;
	
	double x=0.8, y=0.3;
	double a3=method(&x,&y);
	cout << "The return value(x+y):" << a3 << endl;
	 
}

int main(){
	test();
}
