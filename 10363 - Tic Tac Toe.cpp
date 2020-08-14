//============================================================================
// Name        : 10363.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int gano(string a){
	int p=0;
	int r=0;
	if((a.at(0)=='X' and a.at(1)=='X' and a.at(2)=='X')){
		r=1;
	}else if((a.at(3)=='X' and a.at(4)=='X' and a.at(5)=='X') ){
		r=1;
	}else if((a.at(6)=='X' and a.at(7)=='X' and a.at(8)=='X')){
		r=1;
	}else if((a.at(0)=='X' and a.at(3)=='X' and a.at(6)=='X')){
		r=1;
	}else if((a.at(1)=='X' and a.at(4)=='X' and a.at(7)=='X')){
		r=1;
	}else if((a.at(2)=='X' and a.at(5)=='X' and a.at(8)=='X')){
		r=1;
	}else if((a.at(0)=='X' and a.at(4)=='X' and a.at(8)=='X')){
		r=1;
	}else if((a.at(2)=='X' and a.at(4)=='X' and a.at(6)=='X')){
		r=1;
	}
	if((a.at(0)=='O' and a.at(1)=='O' and a.at(2)=='O')){
			p=1;
		}else if((a.at(3)=='O' and a.at(4)=='O' and a.at(5)=='O')){
			p=1;
		}else if((a.at(6)=='O' and a.at(7)=='O' and a.at(8)=='O')){
			p=1;
		}else if((a.at(0)=='O' and a.at(3)=='O' and a.at(6)=='O')){
			p=1;
		}else if((a.at(1)=='O' and a.at(4)=='O' and a.at(7)=='O')){
			p=1;
		}else if((a.at(2)=='O' and a.at(5)=='O' and a.at(8)=='O')){
			p=1;
		}else if((a.at(0)=='O' and a.at(4)=='O' and a.at(8)=='O')){
			p=1;
		}else if((a.at(2)=='O' and a.at(4)=='O' and a.at(6)=='O')){
			p=1;
		}
	int z=0;
	if(p==1 and r==1){
		z=3;
	}else if(p==1){
		z=1;
	}else if(r==1){
		z=2;
	}
	return z;
}
int main() {
	int n;
	cin>>n;
	string a,b,c;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		string d=a+b+c;
		int x=0,o=0;
		for(int j=0;j<d.length();j++){
			if(d.at(j)=='X')
				x++;
			else if(d.at(j)=='O'){
				o++;
			}
		}
		if((o==x and gano(d)==0) or (o==x and gano(d)==1) or (x-o==1 and gano(d)==2)  or (x-o==1 and gano(d)==0) or (x-o==1 and gano(d)!=1 and gano(d)!=3)){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
}
