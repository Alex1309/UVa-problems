//============================================================================
// Name        : 10409.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {
	int p;
	while(cin>>p)
		if(p==0)
			break;
		else{
		string dir[p];
		for(int i=0;i<p;i++){
			cin>>dir[i];
		}
		int t=1,b=6,n=5,s=2,w=3,e=4;
		int c;
		for(int i=0;i<p;i++){
			c=t;
			if(dir[i]=="north"){
				t=n;
				n=b;
				b=s;
				s=c;
			}else if(dir[i]=="south"){
				t=s;
				s=b;
				b=n;
				n=c;
			}else if(dir[i]=="east"){
				t=w;
				w=b;
				b=e;
				e=c;
			}else if(dir[i]=="west"){
				t=e;
				e=b;
				b=w;
				w=c;
			}
		}
			cout <<t<<endl;
	}
}



