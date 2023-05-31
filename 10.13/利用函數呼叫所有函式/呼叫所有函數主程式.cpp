#include <iostream>
#include "fifth.h"
#include "forth.h"
#include "first.h"
#include "second.h"
#include "third.h"
using namespace std;
int main(){
	/*第一題*/
	cout<<"請輸入數字印出三角形";
	cin>> level;
 	printStar(level);
 	getStar(level);
 	cout<<endl;
 	/*第二題*/
 	cout<<"請輸入數字A B C D 輸出客戶需求:";
 	cin>> A >> B >> C >> D ;
	cout <<  setprecision(10) << I(A,B,C,D)+J(A,B,C,D)+K(A,B,C,D) <<endl;
	/*第三題*/
	cout<<"請輸入數字A2 B2 C2 D2 輸出客戶新需求:";
	cin>> A2 >> B2 >> C2 >> D2 ;
	cout << setprecision(16) <<I2(A2,B2,C2,D2)+J2(A2,B2,C2,D2)+K2(A2,B2,C2,D2)<<endl;
	/*第四題*/
	int n;
	cout << "請輸入要求質因數的數字:";
        prime_number(n);
	/*第五題*/
	int a,b;
	cout <<"輸入兩數字，可求出最大公因數:" ;
    while (true){
        math(a,b); 
     }	
}
