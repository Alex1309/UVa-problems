//============================================================================
// Name        : stack.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <sstream>
#include <string>
#include <cstdio>
#include <vector>

int main() {
	int a[52];
	int b[52];

	int p;
	cin>>p;
	for(int cv=0;cv<p;cv++){

		for(int i=0;i<52;i++){
				a[i]=i+1;
				b[i]=i+1;
		}
		int n;
		cin>>n;

		int t[52*n];
			for(int i=0;i<(52*n);i++){
				cin>>t[i];
			}
			  vector<int> k;
			  int f;
			  string aux;

			  getline(cin,aux);

			          while(getline(cin,aux)){
			              if(aux.empty()) break;

			              istringstream is(aux);
			              is >> f;
			              k.push_back(f);
			          }

			  for(int i=0;i<k.size();i++){
				  int j=52*(k[i]-1);
				  for(int g=0;g<52;g++){

					  a[g]=b[t[j]-1];
					  j++;

				  }
				  for(int d=0;d<52;d++){
					  b[d]=a[d];
				  }
			  }

			 for(int i=0;i<52;i++){

					 if(a[i]==10 or a[i]==23 or a[i]==36 or a[i]==49  ){
						 cout <<"Jack ";
					 }else if(a[i]==11 or a[i]==24 or a[i]==37 or a[i]==50){
						 cout<<"Queen ";
					 }else if(a[i]==12 or a[i]==25 or a[i]==38 or a[i]==51){
						 cout<<"King ";
					 }else if(a[i]==13 or a[i]==26 or a[i]==39 or a[i]==52){
						 cout<<"Ace ";
					 }else if(a[i]<=13){
						 cout <<a[i]+1<<" ";
					 } else if(a[i]>13 and a[i]<=26){
						 cout<<a[i]-12<<" ";
					 }else if (a[i]>26 and a[i]<=39){
						 cout<<a[i]-25<<" ";
					 }else if(a[i]>39 and a[i]<=52){
						 cout<<a[i]-38<<" ";

					 }

					 if(a[i]<=13)
						 cout <<"of Clubs"<<endl;
					 else if(a[i]>13 and a[i]<=26)
						 cout <<"of Diamonds"<<endl;
					 else if(a[i]>26 and a[i]<=39)
						 cout <<"of Hearts"<<endl;
					 else if(a[i]>39 and a[i]<=52)
						 cout <<"of Spades"<<endl;
				 }
			 if(cv!=p-1)
				 cout<<endl;
	}

}
