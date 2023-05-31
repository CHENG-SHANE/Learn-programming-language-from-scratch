#include <iostream>
#include <cstdlib>
#include <ctime> 
using  namespace std;
main()
{
	srand(time(NULL));
	
	int x = rand() % 11;
	
	while(x = rand() % 11>0)
	{
		cout << rand()%11 << " " ;
	}

}
