#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
main()
{
	int k;
	int n=0;
	float sum=0; 
	
	sum=1.0+(-1.0/3.0);//0,1���l�Ʒ|�����D�A��X�ӳ�W�p�� 	
	cin>> k ;

	for(n=2;n<=k;n++)
	{
		if(n%2==0)
		{
			sum=sum+(1.0/(2.0*n+1.0));//�`�N!!! ���M�w�g�]�B�I�ơA���b�gcode���ɭ԰ȥ��n�[�p���I 
		}
		else
		{
			sum=sum+(-1.0/(2.0*n+1.0));
		}
	}
	cout << 4*sum ; 
}
