#include <iostream>
using namespace std;

int a[1000];int n;int i;int j;int x;

void insertion_sort()
{
	cout << "請輸入要排列的" << n << "個數字: " ;
	
	for(i=0; i<n; i++)
	{
		cin >> x;
		for(j=i; j>=0; j--)
		{
			if(a[j]>x)
				a[j+1]=a[j];
			else
				break;
		}
		a[j+1]=x;
	}
}

int main ()
{
	cout << "要進行排列的數字有幾個? ";
	while(cin >> n)
	{
		insertion_sort();
		
		cout << "排序完成後的數列: ";
		
		for(i=0; i<n; i++)
		{
			cout << a[i+1] << " ";	
		}
		break;	
	}
}


