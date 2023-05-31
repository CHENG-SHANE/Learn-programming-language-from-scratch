#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
srand(time(NULL));
int const a1=4;
int const a2=2;
int i,j;
int arrayA[a1][a2]={{1,2},{3,4},{5,6},{7,8}};
int arrayB[a1][a2]={{8,7},{6,5},{4,3},{2,1}};
	for(i=0;i<a1;i++){
		for(j=0;j<a2;j++)
		{
		arrayA[i][j]=rand()%10;
		arrayB[i][j]=rand()%10;
		}
	}
	for(i=0;i<a1;i++){
		for(j=0;j<a2;j++)
		{
		cout<<arrayA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout << endl;
		
	for(i=0;i<a1;i++){
		for(j=0;j<a2;j++)
		{
		cout<<arrayB[i][j]<<" ";
		}
		cout<<endl;
	}
	cout << endl;	
		
	for(i=0;i<a1;i++){
		for(j=0;j<a2;j++)
		{
		cout<<arrayA[i][j]+arrayB[i][j]<<" ";
		}
		cout<<endl;
	}
}
