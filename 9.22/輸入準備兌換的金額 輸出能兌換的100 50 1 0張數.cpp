#include <iostream>
using namespace std;

int main()
{
	int sum;//目前總額
	
	cout<< "輸入總額="; 
	cin>> sum;
	cout<<"100元:";
	cout<< sum/100;
	cout<<"張"<<endl;
	cout<<"50元:";
	cout<< (sum%100)/50;
	cout<<"張"<<endl;
	cout<<"10元:"; 
	cout<< (sum%100)%50/10; 
	cout<<"張";
 } 
