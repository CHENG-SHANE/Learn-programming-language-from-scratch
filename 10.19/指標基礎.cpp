#include <iostream>
using namespace std;
add(int *a,int *b){
	*a=*a+*b;
}

main(){
	int a=10;
	int b=20;
	
	cout<<"呼叫add之前，a="<< a << " b=" << b;
	add(&a,&b);
	cout<< endl <<"呼叫add之後，a="<< a << " b=" << b;
}

 
