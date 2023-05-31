#include <iostream>
using namespace std;
main()
{
	int maxX=20,maxY=20;
	
	for(int x,y;x<maxX && y<maxY;x++,y=y+2){
		cout << "x<20:" << x << "  y<20:" << y << endl; 
	}
 } 
