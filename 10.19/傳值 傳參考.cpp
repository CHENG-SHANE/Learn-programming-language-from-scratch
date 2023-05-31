#include <iostream>
using namespace std;

void increaseByVal(int index){	
	index=index+1;
}
void increaseByRef(int &index){
	index=index+1;
}

int main(){
	int index=2;
	cout << "遞增前index值為: "<< index << endl ; 
		increaseByVal(index);
	cout << "傳直呼叫遞增後index值為: " << index << endl;
		increaseByRef(index);
	cout << endl << "傳參考呼叫遞增後index值為: " << index << endl;


}
