//============================================================================
// Name        : 232.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a,b;
	int puzzle =1;
	int c=0;
	while(cin >>a)
		if(a==0)
			break;
		else{
			cin>>b;
			if(c>0){
				cout<<endl;
			}
			c++;
			int numbers[a][b];
			for(int i=0;i<a;i++){
				for(int j=0;j<b;j++){
					numbers[i][j]=0;
				}
			}
			char letters[a][b];

			for(int i=0;i<a;i++){
				for(int j=0;j<b;j++){
					cin>>letters[i][j];
				}
			}
			for(int i=0;i<a;i++){
				for(int j=0;j<b;j++){
					if(letters[i][j]=='*'){
						numbers[i][j]=-1;
					}
				}
			}

			int cont =1;
			for(int i=0;i<a;i++){
				for(int j=0;j<b;j++){
					if(i==0 and numbers[i][j]!=-1){
						numbers[i][j]= cont;
						cont++;
					}
					if(i>0 and ((numbers[i][j-1]==-1 and numbers[i][j]==0 ) or (j==0 and numbers[i][j]!=-1) or (numbers[i-1][j]==-1 and numbers[i][j]==0 ))){
						numbers[i][j]= cont;
						cont++;
					}
				}
			}

			int p=0;
			int s=1;
			cout <<"puzzle #"<<puzzle<<":"<<endl;
			puzzle++;
			cout <<"Across"<<endl;

			for(int i=0;i<a;i++){
				for(int j=0;j<b;j++){
					if(numbers[i][j]!=-1){
						s=0;
						if(p==0)
							printf("%3d.", numbers[i][j]);
						p=1;
						cout<<letters[i][j];

						if(j+1==b){
							cout<<endl;
							p=0;
							s=1;
						}
					}
					else{
						p=0;
						if(s==0){
							cout<<endl;
							s=1;
						}
					}
				}
			}
			cout <<"Down"<<endl;

			for(int i=0;i<a;i++){
				for(int j=0;j<b;j++){
					int aux =i;

					if(numbers[aux][j] != -1){
						if(p==0)
							printf("%3d.", numbers[i][j]);
						p=1;

						while(aux < a && numbers[aux][j] != -1){

							cout<<letters[aux][j];
							numbers[aux][j]=-1;
							aux++;
						}
						cout<<endl;
						p=0;
					}
				}

			}
		}
}
