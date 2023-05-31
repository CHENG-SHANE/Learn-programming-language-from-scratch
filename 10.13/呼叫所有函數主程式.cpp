#include <iostream>
#include <iomanip>

#include "fifth.h"
using namespace std;
main(){
	
	/*第一題*/ 
	cout<<"請輸入一個數字印出三角形"
	cin>> level;
 	printStar(level);
 	getStar(level);
 	
 	
 	/*第二題*/ 
 	cout<<"請輸入A B C三數，完成客戶要求的運算"
 	cin>> A >> B >> C >> D ;
	cout <<  setprecision(10) << I(A,B,C,D)+J(A,B,C,D)+K(A,B,C,D);//setprecision(number) 表示輸出幾位數，要記得引入<iomanip>函式庫
	
	
	/*第三題*/	
	cout<<"請輸入A B C三數，完成新的運算"
	cin>> A >> B >> C >> D ;
	cout << setprecision(16) <<I(A,B,C,D)+J(A,B,C,D)+K(A,B,C,D);
	
	
	/*第四題*/
	int n;
	cout<<"輸入要求質因數的數字"
    while (cin >> n)
    {
        prime_number(n); 
    }
   
   
    /*第五題*/
        while (true){
        math(a,b); 
     }
     
}
 
