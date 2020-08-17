//============================================================================
// Name        : 227.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>

int main() {
	string puzzle;
	string puzzlem[5][5];
	int i=0;
	int posix=0,posiy=0;
	int no=0;

	while(getline(cin,puzzle)){
		if(puzzle=="Z")
			break;
		if(i<=4){
			for(int j=0;j<5;j++){
				if(puzzle.at(j)==' '){
					posiy=j;
					posix=i;
				}
				puzzlem[i][j]=puzzle.at(j);
			}
			i++;
		}else{
			for(int x=0;x<puzzle.length();x++){
				if(puzzle.at(x)=='A' and posix-1>=0 and posix-1<5){
					puzzlem[posix][posiy]=puzzlem[posix-1][posiy];
					puzzlem[posix-1][posiy]=' ';
					posix=posix-1;
				}else if(puzzle.at(x)=='B' and posix+1>=0 and posix+1<5){
					puzzlem[posix][posiy]=puzzlem[posix+1][posiy];
					puzzlem[posix+1][posiy]=' ';
					posix=posix+1;
				}else if(puzzle.at(x)=='R' and posiy+1>=0 and posiy+1<5){
					puzzlem[posix][posiy]=puzzlem[posix][posiy+1];
					puzzlem[posix][posiy+1]=' ';
					posiy=posiy+1;
				}else if(puzzle.at(x)=='L' and posiy-1>=0 and posiy-1<5){
					puzzlem[posix][posiy]=puzzlem[posix][posiy-1];
					puzzlem[posix][posiy-1]=' ';
					posiy=posiy-1;
				}else if(puzzle.at(x)=='0'){
					i=0;
					break;
				}else{
					no=1;
				}
			}
		}
		if(i==0){
			if(no==1){
				cout <<"This puzzle has no final configuration."<<endl;
			}else{
				for(int i=0;i<5;i++){
					for(int j=0;j<5;j++){
						cout <<puzzlem[i][j]<<" ";
					}
					cout <<endl;
				}
			}
			cout<<endl;

		}

	}


}
