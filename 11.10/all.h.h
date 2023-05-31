#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int D[4][2]={{1,1},{1,1},{1,1},{1,1}};
int DT[2][4];
int C[4][2]={{9,9},{9,9},{9,9},{9,9}};
int CT[2][4];
int arrayA[4][2];
int arrayB[4][2];
int arrayC[4][2];
int ans[2][2];
int ans2[2][2];
int com;

void add(int arrayA[][2],int arrayB[][2]){
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			arrayC[i][j]=arrayA[i][j]+arrayB[i][j];
			cout<<arrayC[i][j]<<" ";
		}
	cout<<endl;
	}
}
void Random(int arrayA[][2],int arrayB[][2]){
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			arrayA[i][j]=rand()%10;
			arrayB[i][j]=rand()%10;
		}
	}
}
void trans(int X[4][2],int XT[2][4]){
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
		XT[j][i]=X[i][j];
		}
	}
}
void mult1(int X[4][2],int XT[2][4]){
	for(int i=0;i<2;i++){
		for(int l=0;l<2;l++){
			int s=0;
				for(int j=0;j<4;j++){
					s+=X[j][i]*XT[l][j];
				}
			ans[i][l]=s;
		}
	}
}
void mult2(int X[4][2],int XT[2][4]){
	for(int i=0;i<2;i++){
		for(int l=0;l<2;l++){
			int s=0;
				for(int j=0;j<4;j++){
					s+=X[j][i]*XT[l][j];
				}
			ans2[i][l]=s;
		}
	}
}
void compare(int ans[2][2],int ans2[2][2]){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			com+=(ans[i][j] == ans2[i][j]);
		}
	}
	if (com == 4){
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
}
void print(int X[][2]){
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			cout<<X[i][j]<<" ";
		}
		cout<<endl;
	}
}
void print2(int XT[][4]){
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cout<<XT[i][j]<<" ";
		}
		cout<<endl;
	}
}
void print3(int ans[2][2]){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
