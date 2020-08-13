//============================================================================
// Name        : 10849.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int whiteorblack(int i, int j){

	if(i%2==0){
		if(j%2==0){
			return 1;
		}else{
			return 0;
		}
	}else{
		if(j%2==0){
			return 0;
		}else{
			return 1;
		}
	}
}

int main() {
	int f;
	cin>>f;
	for(int s=0;s<f;s++){
		int p;
		cin>>p;
		int n;
		cin >>n;
		for(int i=0;i<p;i++){
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			if(whiteorblack(a,b)==whiteorblack(c,d)){
				if(a==c and b==d){
					cout<<0<<endl;
				}else if(abs(a-c)==abs(b-d)){
					cout<<1<<endl;
				}else{
					cout<<2<<endl;
				}
			}else{
				cout <<"no move"<<endl;
		}

	}
}

}
