#include<iostream>
using namespace std;
main()
{
int n;			
int x=2;	
int i=1;		 
int counter=0;	
    
	cout << "�п�J�Q�n�p���]�ƪ��Ʀr:" ;
	cin >> n ;
	 
		for(i=1;i<=n;i++){
			
			if(n%i==0){
				counter++;	
			}
		}
		if(counter==2){
			cout<<" �O��� ";
		}
		else
			cout << "���O���";
		 		     
		counter = 0;
	
}
