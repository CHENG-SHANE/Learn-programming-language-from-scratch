#include <iostream>
#include "fifth.h"
#include "forth.h"
#include "first.h"
#include "second.h"
#include "third.h"
using namespace std;
int main(){
	/*�Ĥ@�D*/
	cout<<"�п�J�Ʀr�L�X�T����";
	cin>> level;
 	printStar(level);
 	getStar(level);
 	cout<<endl;
 	/*�ĤG�D*/
 	cout<<"�п�J�ƦrA B C D ��X�Ȥ�ݨD:";
 	cin>> A >> B >> C >> D ;
	cout <<  setprecision(10) << I(A,B,C,D)+J(A,B,C,D)+K(A,B,C,D) <<endl;
	/*�ĤT�D*/
	cout<<"�п�J�ƦrA2 B2 C2 D2 ��X�Ȥ�s�ݨD:";
	cin>> A2 >> B2 >> C2 >> D2 ;
	cout << setprecision(16) <<I2(A2,B2,C2,D2)+J2(A2,B2,C2,D2)+K2(A2,B2,C2,D2)<<endl;
	/*�ĥ|�D*/
	int n;
	cout << "�п�J�n�D��]�ƪ��Ʀr:";
        prime_number(n);
	/*�Ĥ��D*/
	int a,b;
	cout <<"��J��Ʀr�A�i�D�X�̤j���]��:" ;
    while (true){
        math(a,b); 
     }	
}
