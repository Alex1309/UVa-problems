//============================================================================
// Name        : 141.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	cin >>a;
	int m[a][a];
	for(int i=0;i<a*2;i++){
		int x,y;
		string s;
		cin>>x>>y>>s;
		if(s == "+"){
			m[x-1][y-1]= 1;
		}else{
			m[x-1][y-1]= 0;

		}

	}
}
