#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
main()
{
	int k;
	int n=0;
	float sum=0; 
	
	sum=1.0+(-1.0/3.0);//0,1取餘數會有問題，抓出來單獨計算 	
	cin>> k ;

	for(n=2;n<=k;n++)
	{
		if(n%2==0)
		{
			sum=sum+(1.0/(2.0*n+1.0));//注意!!! 雖然已經設浮點數，但在寫code的時候務必要加小數點 
		}
		else
		{
			sum=sum+(-1.0/(2.0*n+1.0));
		}
	}
	cout << 4*sum ; 
}
