//============================================================================
// Name        : 12366.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int t[13];
	for(int i=0;i<13;i++){
		t[i]=0;
	}
	t[a-1]+=1;
	t[b-1]+=1;
	t[c-1]+=1;
	int r=0,d=0;
	int dos=0;
	for(int i=0;i<13;i++){

		if(t[i]==2){
			r=i+1;
			dos=1;
		}
		if(t[i]==1 and dos==1){
			if(i<12 and t[i+1]!=2){
				d=i+1;
			}if(i<11 and t[i+1]==2){
				d=i+2;
			}else if(i==12 and t[i]!=2){
				r=r+1;
				d=1;
			}
		}
	}


}
