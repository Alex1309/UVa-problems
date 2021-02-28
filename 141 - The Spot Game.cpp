//============================================================================
// Name        : 141.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <map>

#include <stdio.h>

int main() {
	int n;
	cin >>n;
	int table[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			table[i][j]=0;
		}
	}

	map<string,int> ifrepeated;


	int endWhile=2*n;
	int move =1;
	int moveWinner=0;
	int end=0;
	while(endWhile!=0){

		int x,y;
		string s;
		cin>>x>>y>>s;
		if(s == "+"){
			table[x-1][y-1]= 1;
		}else{
			table[x-1][y-1]= 0;
		}

		string v;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				v += (table[i][j]+'0');
			}
		}
		if (ifrepeated[v]==1 and end==0){
			end=1;
			moveWinner=move;

		}

		int auxTable[n][n];
		int auxTemp[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				auxTemp[i][j]=table[i][j];
			}
		}
		for(int z=0;z<4;z++){
			int iAux=0;
			int jAux=n-1;
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					auxTable[iAux][jAux]=auxTemp[i][j];
					iAux++;
				}
				jAux--;
				iAux=0;
			}
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n; j++){
					auxTemp[i][j]=auxTable[i][j];
				}
			}

			string auxV="";
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n; j++){
					auxV += (auxTable[i][j]+'0');
				}
			}

			ifrepeated[auxV]=1;

		}

		endWhile--;
		move++;
	}

	if(end==1){
		cout<<moveWinner;
		cout<<"lost";

	}else{
		cout <<"draw";
	}

}
