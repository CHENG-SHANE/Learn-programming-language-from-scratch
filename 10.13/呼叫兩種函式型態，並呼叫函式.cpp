#include <iostream>
using namespace std;
int level;
void printStar(int level);
string getStar(int level); 

void printStar(int level){
      for (int i = 1; i <= level; i++){
         for (int j = 1; j <= i; j++ )
         {
            cout << "*";
          }
         cout << endl;
      }
 } 
 
string getStar(int level){
      string star;
      for (int i = 1; i <= level; i++) {
         for (int j = 1; j <= i; j++ )
         {
            star += "*";
          }
            star +=  "\n";
      }
      return star;
 }
 
 int main(){
 	cin>> level;
 	printStar(level);
 	getStar(level);
 	
 }
