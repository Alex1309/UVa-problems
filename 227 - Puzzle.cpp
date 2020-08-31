//============================================================================
// Name        : 227.cpp
// Author      : ALEposiposiposix
// Version     :
// Copposiposiposiyright   : posiposiposiyour copposiposiposiyright notice
// Description : Hello World in C++, Ansi-stposiposiposiyle
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include <stdio.h>


int main() {
	string puzzle;
	string puzzlem[5][5];
	string a,b,c,d,e;
	int posix=0,posiy=0;
	char letter;
	int number=1;
	int t=0;
	while(getline(cin,a)){
		if(a=="Z")
			break;
		if (t > 0) cout << endl;
		t++;
		for(int j=0;j<5;j++){
			puzzlem[0][j]=a.at(j);

		}
		getline(cin,b);
		for(int j=0;j<5;j++){
			puzzlem[1][j]=b.at(j);

		}
		getline(cin,c);
		for(int j=0;j<5;j++){
			puzzlem[2][j]=c.at(j);

		}
		getline(cin,d);
		for(int j=0;j<5;j++){
			puzzlem[3][j]=d.at(j);

		}
		getline(cin,e);
		for(int j=0;j<5;j++){
			puzzlem[4][j]=e.at(j);

		}
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				if(puzzlem[i][j]==" "){
					posix=i;
					posiy=j;
				}
			}
		}
		bool valid = true;
		while (cin >> letter) {
			if (letter == '0')
				break;

			if (!valid) continue;


			switch (letter) {
			case 'A':
				if (posix > 0) {
					puzzlem[posix][posiy] = puzzlem[posix-1][posiy];
					puzzlem[posix-1][posiy] = ' ';
					posix--;
				} else {
					valid = false;
				}
				break;
			case 'B':
				if (posix + 1 < 5) {
					puzzlem[posix][posiy] = puzzlem[posix+1][posiy];
					puzzlem[posix+1][posiy] = ' ';
					posix++;
				} else {
					valid = false;
				}
				break;
			case 'L':
				if (posiy > 0) {
					puzzlem[posix][posiy] = puzzlem[posix][posiy-1];
					puzzlem[posix][posiy-1] = ' ';
					posiy--;
				} else {
					valid = false;
				}
				break;
			case 'R':
				if (posiy + 1 < 5) {
					puzzlem[posix][posiy] = puzzlem[posix][posiy+1];
					puzzlem[posix][posiy+1] = ' ';
					posiy++;
				} else {
					valid = false;
				}
				break;
			}
		}
		cin.ignore();

		cout << "Puzzle #" << number << ":" << endl;
		number++;

		if (!valid) {
			cout << "This puzzle has no final configuration." << endl;
		}else{
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					if (j ==4)
						cout << puzzlem[i][j];
					else{
						cout << puzzlem[i][j]<<" ";
					}
				}
				cout << endl;
			}
		}
	}
}
