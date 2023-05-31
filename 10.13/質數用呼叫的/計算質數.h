#include<iostream>
using namespace std;
prime_number(int n,int x=2,int i=1,int counter=0)
{
	 
    for(x=2;x<=n;x++){ 
   
		for(i=1;i<=x;i++){
			
			if(x%i==0){
				counter++;	
			}
		}
		if(counter==2){
			return x; 
		}		     
		counter = 0;
	}
}

