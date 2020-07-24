//============================================================================
// Name        : 11225.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include <sstream>
#include <fstream>

int main() {
	int p;
	cin>>p;
	for(int h=1;h<=p;h++){
		string aux;
		int i=0;
		int n;
		cin>>n;
		if(n==0){
			cout<<"Hand #"<<h<<endl;
			cout <<"Game lost by "<<56<<" point(s)."<<endl;
		}else{
			cin.ignore();
				string cards[n];

				for(int i=0;i<n;i++){
					cards[i]="";
				}
				while(getline(cin,aux)){
					int pos = aux.find(" ");
				   cards[i]= aux.substr(0, pos);
				   i++;
				   if(i==n)
					   break;
				}
				int kings=0;
				int queens=0;
				int knights =0;
				int jacks=0;
				int oudlers=0;
				int others=0;

				for(int i=0;i<n;i++){
					if(cards[i]=="king")
						kings++;
					else if(cards[i]=="queen")
						queens++;
					else if(cards[i]=="knight")
						knights++;
					else if(cards[i]=="jack")
						jacks++;
					else if(cards[i]=="one" or cards[i]=="fool" or cards[i]=="twenty-one")
						oudlers++;
				}
				others=n-(kings+queens+knights+jacks+oudlers);
				int total =(kings*4.5)+(oudlers*4.5)+(queens*3.5)+(knights*2.5)+(jacks*1.5)+(others*0.5);

				cout<<"Hand #"<<h<<endl;
				if(oudlers==0 and total>=56){
					cout <<"Game won by "<<total-56<<" point(s)."<<endl;
				}else if(oudlers==1 and total>=51){
					cout <<"Game won by "<<total-51<<" point(s)."<<endl;
				}else if(oudlers==2 and total>=41){
					cout <<"Game won by "<<total-41<<" point(s)."<<endl;
				}else if(oudlers==3 and total>=36){
					cout <<"Game won by "<<total-36<<" point(s)."<<endl;
				}else if(oudlers==0){
					cout <<"Game lost by "<<56-total<<" point(s)."<<endl;
				}else if(oudlers==1){
					cout <<"Game lost by "<<51-total<<" point(s)."<<endl;
				}else if(oudlers==2){
					cout <<"Game lost by "<<41-total<<" point(s)."<<endl;
				}else if(oudlers==3){
					cout <<"Game lost by "<<36-total<<" point(s)."<<endl;
				}
		}
		if(h!=p)
			cout<<endl;
	}
}
