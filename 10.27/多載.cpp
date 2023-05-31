#include <iostream>
using namespace std;

int square(int i=10){
	return i*i;
}

double square(double j=10.5){
	return j*j;
}

main(){

	cout<< "i*i=" << square(10) << endl;
	cout<< "j*j=" << square(10.5);
}
