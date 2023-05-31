#include <iostream>
using namespace std;
int prime_number(int n)
{
    for (int x = 2; x < n; x++) 
    {
        int counter = 0; 
        for (int i = 1; i <= x; i++)
        {

            if (x % i == 0)
            {
                counter++;
            }
        }
        if (counter==2)
        {
         cout << x << endl;
        }
    }
}	


