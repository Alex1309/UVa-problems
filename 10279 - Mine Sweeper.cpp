//============================================================================
// Name        : 10279.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int p;
	cin>>p;
	for(int z=0;z<p;z++){
		int n;
			cin >>n;
			string arr[n];
			string arr1[n];

			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
			for(int i=0;i<n;i++){
					cin>>arr1[i];
				}
			int touched=0;
			for(int i=0;i<n;i++){
				for(int j=0;j<arr[i].length();j++){
					if(arr[i].at(j)=='.' and arr1[i].at(j)=='x'){
						arr[i].at(j)='x';
					}else if(arr[i].at(j)=='*' and arr1[i].at(j)=='x'){
						arr[i].at(j)='*';
						touched=1;
					}
				}
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(arr[i].at(j)=='*' and touched==1){
						cout <<'*';
					}else if(arr[i].at(j)=='*' and touched==0){
						cout <<'.';
					}else if(arr[i].at(j)=='.'){
						cout <<'.';
					}else{
						int c=0;
							for(int k=i-1;k<=i+1;k++){
									for(int m=j-1;m<=j+1;m++){
										if(k>=0 and k<n and m>=0 and m<n){
											if(arr[k].at(m)=='*'){
												c++;
											}
										}
								}
							}
						cout<<c;
					}
				}
				cout<<endl;
			}
			if(z!=p-1)
				cout <<endl;
	}
}
