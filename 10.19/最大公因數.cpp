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
	cout<< "�п�J��Ӽƭ�:" ;
	cin >> n >> m ;
	cout<< "�ƭ�1: " << n <<endl << "�ƭ�2: " << m << endl;
	cout<< "�̤j���]�Ƭ�:" <<gcd(n,m);
	 
}
