#include <iostream>
using namespace std;

int gcd(int n,int m){
	if(n%m == 0){
		return m;
	}
	return gcd(m,n%m);
}

int main(){
	int n,m;
	cout<< "叫块ㄢ计:" ;
	cin >> n >> m ;
	cout<< "计1: " << n <<endl << "计2: " << m << endl;
	cout<< "程そ计:" <<gcd(n,m);
	 
}
