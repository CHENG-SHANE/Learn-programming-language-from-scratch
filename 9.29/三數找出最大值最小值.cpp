#include <iostream>

using namespace std;
main()
{
	int a;
	int b;
	int c;
	int max;
	int min;
	
cin>> a >> b >> c;
	
max=min=a;
if(b>max)
max=b;
if(c>max)
max=c;
if(b<min)
min=b;
if(c<min)
min=c;

cout<<"¤j­È:"<< max << endl 
	<<"¤p­È:"<< min; 

 } 
 
