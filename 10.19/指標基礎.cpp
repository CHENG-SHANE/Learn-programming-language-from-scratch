#include <iostream>
using namespace std;
add(int *a,int *b){
	*a=*a+*b;
}

main(){
	int a=10;
	int b=20;
	
	cout<<"�I�sadd���e�Aa="<< a << " b=" << b;
	add(&a,&b);
	cout<< endl <<"�I�sadd����Aa="<< a << " b=" << b;
}

 
