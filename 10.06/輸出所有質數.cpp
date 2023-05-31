#include<iostream>
using namespace std;
main()
{
int n;			
int x=2;	
int i=1;		 
int counter=0;	
    
	cout << "請輸入想要計算質因數的數字:" ;
	cin >> n ;
	 
		for(i=1;i<=n;i++){
			
			if(n%i==0){
				counter++;	
			}
		}
		if(counter==2){
			cout<<" 是質數 ";
		}
		else
			cout << "不是質數";
		 		     
		counter = 0;
	
}
