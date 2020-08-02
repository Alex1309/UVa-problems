//============================================================================
// Name        : 10196-.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
string m[8][8];
bool dentro(int i,int j){
	return i>=0 and i<8 and j>=0 and j<8;
}
int pawnB(int a, int b){
	int r=0;
	if(dentro(a+1,b-1) and  m[a+1][b-1]!="." and m[a+1][b-1]=="K"){
		r=1;
	}
	else if(dentro(a+1,b+1) and  m[a+1][b+1]!="." and m[a+1][b+1]=="K"){
			r=1;
		}
	return r;
}
int pawnW(int a, int b){
	int r=0;
	if(dentro(a-1,b-1) and  m[a-1][b-1]!="." and m[a-1][b-1]=="k"){
		r=1;
	}
	else if(dentro(a-1,b+1) and  m[a-1][b+1]!="." and m[a-1][b+1]=="k"){
			r=1;
		}
	return r;
}
int rook(int a, int b,string c){
	int r=0;
	for(int i=b+1;i<8;i++){
		if(dentro(a,i) and m[a][i]!="." and m[a][i]==c ){
			r=1;
			break;
		}else if(m[a][i]!="."){
			break;
		}
	}
	for(int i=b-1;i>=0;i--){
		if(dentro(a,i) and m[a][i]!="." and m[a][i]==c ){
				r=1;
				break;
		}else if(m[a][i]!="."){
				break;
		}
	}
	for(int i=a+1;i<8;i++){
		if(dentro(i,b) and m[i][b]!="." and m[i][b]==c ){
			r=1;
		}
		else if(m[i][b]!="."){
			break;
		}
	}
	for(int i=a-1;i>=0;i--){
		if(dentro(i,b) and m[i][b]!="." and m[i][b]==c ){
			r=1;
		}else if(m[i][b]!="."){
			break;
		}
	}
	return r;

}

int bishop(int a, int b, string c){
	int r=0;
	int d=0;

		for(int i=a-1;i>=0;i--){
			d++;
			if(dentro(i,b+d) and m[i][b+d]!="." and m[i][b+d]==c ){
				r=1;
				break;
			}else if(m[i][b+d]!="."){
				break;
			}
		}
		d=0;

		for(int i=a+1;i<8;i++){
			d++;
			if(dentro(i,b+d) and m[i][b+d]!="." and m[i][b+d]==c ){
				r=1;
				break;
			}else if(m[i][b+d]!="."){
				break;
			}
		}
		d=0;

			for(int i=a+1;i<8;i++){
				d++;
				if(dentro(i,b-d) and m[i][b-d]!="." and m[i][b-d]==c ){
					r=1;
					break;
				}else if(m[i][b-d]!="."){
					break;
				}
			}
			d=0;
			for(int i=a-1;i>=0;i--){
						d++;
						if(dentro(i,b-d) and m[i][b-d]!="." and m[i][b-d]==c ){
							r=1;
							break;
						}else if(m[i][b-d]!="."){
							break;
						}
					}

			return r;
}
int queen(int a,int b, string c){
	return (rook(a,b,c) or bishop(a,b,c));
}
int king (int a, int b,string c){
	int r=0;
	if(dentro(a-1,b-1) and m[a-1][b-1]!="." and m[a-1][b-1]==c){
		r=1;
	}else if(dentro(a-1,b) and m[a-1][b]!="." and m[a-1][b]==c){
		r=1;
	}else if(dentro(a-1,b+1) and m[a-1][b+1]!="." and m[a-1][b+1]==c){
		r=1;
	}else if(dentro(a,b-1) and m[a][b-1]!="." and m[a][b-1]==c){
		r=1;
	}else if(dentro(a,b+1) and m[a][b+1]!="." and m[a][b+1]==c){
		r=1;
	}else if(dentro(a+1,b-1) and m[a+1][b-1]!="." and m[a+1][b-1]==c){
		r=1;
	}else if(dentro(a+1,b) and m[a+1][b]!="." and m[a+1][b]==c){
		r=1;
	}else if(dentro(a+1,b+1) and m[a+1][b+1]!="." and m[a+1][b+1]==c){
		r=1;
	}
	return r;
}
int knight(int a, int b, string c){
	int r=0;
		if(dentro(a-1,b-2) and m[a-1][b-2]!="." and m[a-1][b-2]==c){
			r=1;
		}else if(dentro(a-2,b-1) and m[a-2][b-1]!="." and m[a-2][b-1]==c){
			r=1;
		}else if(dentro(a-2,b+1) and m[a-2][b+1]!="." and m[a-2][b+1]==c){
			r=1;
		}else if(dentro(a-1,b+2) and m[a-1][b+2]!="." and m[a-1][b+2]==c){
			r=1;//4arriba
		}else if(dentro(a+1,b-2) and m[a+1][b-2]!="." and m[a+1][b-2]==c){
			r=1;
		}else if(dentro(a+1,b+2) and m[a+1][b+2]!="." and m[a+1][b+2]==c){
			r=1;
		}else if(dentro(a+2,b-1) and m[a+2][b-1]!="." and m[a+2][b-1]==c){
			r=1;
		}else if(dentro(a+2,b+1) and m[a+2][b+1]!="." and m[a+2][b+1]==c){
			r=1;
		}
		return r;
}
int main() {
	int t=0;
	while(true){
		t++;
			int d=1;
			for(int i=0;i<8;i++){
				string le;
				cin>>le;
				for(int j=0;j<le.length();j++){
					m[i][j]=le.at(j);
					if(m[i][j]!="."){
						d=0;
					}
				}
			}
			if(d==1){
				break;
			}

			int bla=0;
			for(int i=0;i<8;i++){
				for(int j=0;j<8;j++){
					if(m[i][j]=="p" and pawnB(i,j)==1){
						bla=1;
						break;
					}else if(m[i][j]=="r" and rook(i,j,"K")==1){
						bla=1;
						break;
					}else if(m[i][j]=="b" and bishop(i,j,"K")==1){
						bla=1;
						break;
					}else if(m[i][j]=="q" and queen(i,j,"K")==1){
						bla=1;
						break;
					}else if(m[i][j]=="k" and king(i,j,"K")==1){
						bla=1;
						break;
					}else if(m[i][j]=="n" and knight(i,j,"K")==1){
						bla=1;
						break;
					}
				}
			}
			int whi=0;
				for(int i=0;i<8;i++){
					for(int j=0;j<8;j++){
						if(m[i][j]=="P" and pawnW(i,j)==1){
							whi=1;
							break;
						}else if(m[i][j]=="R" and rook(i,j,"k")==1){
							whi=1;
							break;
						}else if(m[i][j]=="B" and bishop(i,j,"k")==1){
							whi=1;
							break;
						}else if(m[i][j]=="Q" and queen(i,j,"k")==1){
							whi=1;
							break;
						}else if(m[i][j]=="K" and king(i,j,"k")==1){
							whi=1;
							break;
						}else if(m[i][j]=="N" and knight(i,j,"k")==1){
							whi=1;
							break;
						}
					}
				}
				cout <<"Game #"<<t<<": ";
				if(whi==1){
					cout <<"black king is in check."<<endl;
				}else if(bla==1){
					cout<<"white king is in check."<<endl;
				}else{
					cout<<"no king is in check."<<endl;
				}
	}

}
