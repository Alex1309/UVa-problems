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
	while(cin>>a>>b>>c)
		if(a==0 and b==0 and c==0)
			break;
		else{
			int t[13];
			for(int i=0;i<13;i++){
				t[i]=0;
			}
			t[a-1]+=1;
			t[b-1]+=1;
			t[c-1]+=1;
			int r=0,d=0;
			int dos=0;
			int tres =0;

			for(int i=0;i<13;i++){
				if(t[i]==2){
					r=i+1;
					dos=1;
					break;
				}else if(t[i]==3){
					tres=1;
					if(i<=11){
						r=(i+1)+1;
						d=(i+1)+1;
						break;
					}else
						r=d=-1;
					break;
				}else{
					r=1;
					d=2;
				}
			}
			if(dos==1){
				for(int i=0;i<13;i++){
					if(t[i]==1 and dos==1){
						if(i<12 and t[i+1]!=2){
							d=(i+1)+1;
						}if(i<11 and t[i+1]==2){
							d=(i+1)+2;
						}else if(i==12 and t[i]!=2){
							r=r+1;
							d=1;
						}else if(i==11 and t[i+1]==2){
							r=1;
							d=1;
						}
					}
				}
			}
			if(r==-1)
				cout<<"*"<<endl;
			else if(r>d)
				cout << d<<" "<<r<<" "<<r<<endl;
			else{
				cout << r<<" "<<r<<" "<<d<<endl;

			}
		}
}
