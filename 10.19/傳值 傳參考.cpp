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
	cout << "���W�eindex�Ȭ�: "<< index << endl ; 
		increaseByVal(index);
	cout << "�Ǫ��I�s���W��index�Ȭ�: " << index << endl;
		increaseByRef(index);
	cout << endl << "�ǰѦҩI�s���W��index�Ȭ�: " << index << endl;


}
