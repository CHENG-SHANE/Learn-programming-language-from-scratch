#include <iostream>
using namespace std;

int a[1000];int n;int i;int j;int x;

void insertion_sort()
{
	cout << "�п�J�n�ƦC��" << n << "�ӼƦr: " ;
	
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
	cout << "�n�i��ƦC���Ʀr���X��? ";
	while(cin >> n)
	{
		insertion_sort();
		
		cout << "�Ƨǧ����᪺�ƦC: ";
		
		for(i=0; i<n; i++)
		{
			cout << a[i+1] << " ";	
		}
		break;	
	}
}


