#include <iostream>
#include <iomanip>

#include "fifth.h"
using namespace std;
main(){
	
	/*�Ĥ@�D*/ 
	cout<<"�п�J�@�ӼƦr�L�X�T����"
	cin>> level;
 	printStar(level);
 	getStar(level);
 	
 	
 	/*�ĤG�D*/ 
 	cout<<"�п�JA B C�T�ơA�����Ȥ�n�D���B��"
 	cin>> A >> B >> C >> D ;
	cout <<  setprecision(10) << I(A,B,C,D)+J(A,B,C,D)+K(A,B,C,D);//setprecision(number) ��ܿ�X�X��ơA�n�O�o�ޤJ<iomanip>�禡�w
	
	
	/*�ĤT�D*/	
	cout<<"�п�JA B C�T�ơA�����s���B��"
	cin>> A >> B >> C >> D ;
	cout << setprecision(16) <<I(A,B,C,D)+J(A,B,C,D)+K(A,B,C,D);
	
	
	/*�ĥ|�D*/
	int n;
	cout<<"��J�n�D��]�ƪ��Ʀr"
    while (cin >> n)
    {
        prime_number(n); 
    }
   
   
    /*�Ĥ��D*/
        while (true){
        math(a,b); 
     }
     
}
 
