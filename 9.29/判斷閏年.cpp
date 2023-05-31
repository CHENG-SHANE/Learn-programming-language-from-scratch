#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "請輸入西元年:";
    while(cin >> n )
    {
        if( n%400==0 or ( n%4==0 and n%100!=0 ))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    } 
    return 0;
}
 
