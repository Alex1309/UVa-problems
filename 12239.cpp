//============================================================================
// Name        : 12239.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,b;
	while(cin>>n>>b){
		if(n==0 and b==0)
			break;
		int bingo[b];
		for(int i=0;i<b;i++){
			cin>>bingo[i];
		}
		int todos[n+1];
		for(int i=0;i<n+1;i++){
			todos[i]=0;
		}
		sort(bingo, bingo+b);
		int t=0;
		if(bingo[0]!=0){
			t=1;
		}
		if(bingo[b-1]!=n){
			t=1;
		}
		if(t==0){
			for(int i=0;i<b;i++){
				todos[bingo[i]]=1;
			}
		}
		for(int i=1;i<b;i++){
			for(int j=i+1;j<b;j++){
				if(i!=j)
					todos[abs(bingo[i]-bingo[j])]=1;
			}
		}
		for(int i=0;i<n+1;i++){
			if(todos[i]!=1)
				t=1;
		}
		if(t==1){
			cout<<"N"<<endl;
		}else{
			cout<<"Y"<<endl;
		}
	}
}
