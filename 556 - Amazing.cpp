//============================================================================
// Name        : 556.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

bool dentro(int a ,int b,int i,int j){
	return i>=0 and i<a and j>=0 and j<b;
}

int main() {

	int a,b;
	while(cin>>a>>b)
		if(a==0 and b==0)
			break;
		else{
			int m[a][b];

				for(int i=0;i<a;i++){
					string s;
					cin>>s;
					for(int j=0;j<b;j++){
						int se;
						se= (s.at(j)-'0');
						m[i][j]=se;
					}
				}

				for(int i=0;i<a;i++){
						for(int j=0;j<b;j++){
							if(m[i][j]==1){
								m[i][j]=-1;
							}
						}
					}
				int i=a-1;
				int j=0;

				char direction='e';
				int t=0;

				while(true){

					if(direction=='e'){
						  if(m[i+1][j]!=-1 and i+1<a and t==1){
							i++;
							m[i][j]+=1;
							direction='n';
						}else if(m[i][j+1]!=-1 and j+1<b ){
							t=1;
							 j++;
							m[i][j]+=1;

						 }else{
							direction='s';
						}

					}
					else if(direction=='s'){

						if(m[i][j+1]!=-1 and j+1<b){
							j++;
							m[i][j]+=1;
							direction='e';
						}else if(m[i-1][j]!=-1 and i-1>=0 ){
							i--;
							m[i][j]+=1;

						} else{
							direction='w';
						}

					}else if(direction=='w'){

						 if(m[i-1][j]!=-1 and i-1>=0){

							i--;
							m[i][j]+=1;
							direction='s';
						}else if(m[i][j-1]!=-1 and j-1>=0 ){
							j--;
							m[i][j]+=1;

						}else{
							direction='n';
						}

					}else if(direction=='n'){

						 if(m[i][j-1]!=-1 and j-1>=0){
							j--;
							m[i][j]+=1;
							direction='w';
						}else if(m[i+1][j]!=-1 and i+1<a ){
							i++;
							m[i][j]+=1;

						}else{
							direction='e';
						}

					}

					if(i==a-1 and j==0 and t==1){
						break;
					}
				}


				int c0=0,c1=0,c2=0,c3=0,c4=0;

				for(int i=0;i<a;i++){
							for(int j=0;j<b;j++){
								if(m[i][j]==0){
									c0++;
								}else if(m[i][j]==1){
									c1++;

								}else if(m[i][j]==2){
									c2++;

								}else if(m[i][j]==3){
									c3++;

								}else if(m[i][j]==4){
									c4++;

								}
							}
						}

			cout << setw(3)<<c0<<setw(3)<<c1<< setw(3)<<c2<< setw(3)<<c3<< setw(3)<<c4<<endl;

		}

}
