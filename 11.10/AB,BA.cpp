#include <iostream> 
using namespace std;
int main(){
	int ans[4][4];
    int i, j;    int C[4][2] = {{1,1},{1,1},{1,1},{1,1}};
    int CT[4][4]= {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
        CT[j][i]=C[i][j];
		cout << C[i][j];
        }
        cout << endl;
    }

    for(i=0; i<2; i++){
        for(j=0; j<4; j++){
        	cout << CT[i][j]; 
        }
    cout << endl;
	}
cout << endl;	

    int D[4][2] = {{9,9},{9,9},{9,9},{9,9}};
    int DT[4][4]= {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
        DT[j][i]=D[i][j];
		cout << D[i][j]; 
        }
        cout << endl;
    }

    for(i=0; i<2; i++){
        for(j=0; j<4; j++){
        	cout << DT[i][j]; 
        }
    cout << endl;
	}
cout << endl;

for(i=0;i<2;i++){
	for(int l=0;l<2;l++){
	int s=0;
		for(int j=0;j<4;j++){
			s+=D[j][i]*CT[l][j];
		}
		ans[i][l]=s;
	}
}
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
        	cout << ans[i][j]<<" "; 
}
cout << endl;
}
cout << endl;
for(i=0;i<2;i++){
	for(int l=0;l<2;l++){
	int s=0;
		for(int j=0;j<4;j++){
			s+=C[j][i]*DT[l][j];
		}
		ans[i][l]=s;
	}
}
for(i=0; i<2; i++){
        for(j=0; j<2; j++){
        	cout << ans[i][j]<<" "; 
}
cout << endl;
}
return 0;
}


