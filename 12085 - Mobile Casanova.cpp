//============================================================================
// Name        : 12085.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
string num(long long int a,long long int c){

	  string ci = "";
	  string cf="";

	  ci = std::to_string(c);
	  cf=std::to_string(a);
	  string fi;
	  int x=0;
	  for(int i=0;i<ci.length();i++){
		  if(ci.at(i)!=cf.at(i)){
			  x=i;
			  break;
		  }
	  }
	  for(int i=x;i<cf.length();i++){
		  fi+=cf.at(i);
	  }
	return fi;
}
int main() {
	long long int n=0;
	int j=0;
	while(cin >>n)
		if(n==0)
			break;
		else{
			j++;
			long long int l[n];
			long long int f[n];

			for(int i=0;i<n;i++){
				cin>>l[i];
			}
			for(int i=0;i<n;i++){
				f[i]=0;
			}

			int ip=2;
			for(int i=0;i<n;i++){

				if(l[i]+1==l[i+1] and i<=n-1){
					f[i]=ip;
					f[i+1]=ip;
				}
				else{
					if(f[i]!=ip){
						f[i]=1;

					}
					if(f[i]==ip)
						ip++;
				}
			}

			long long int c=0;
			int x=0;
			int y=0;
			cout <<"Case "<<j<<":"<<endl;

			while(y<n){
				if(f[y]==1){
						cout <<"0"<<l[y]<<endl;
				}else{
					x=1;
					c=y;
						while(f[y]==f[c+1]){
							c++;
						}
					cout <<"0"<<l[y]<<"-";
					cout<<num(l[c],l[y])<<endl;
					}
				if(x==1){
					y=c+1;
					x=0;
				}
				else{
					y++;
				}
			}
			cout<<endl;

		}

}
