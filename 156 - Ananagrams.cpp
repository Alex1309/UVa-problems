
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <map>

using namespace std;

string  organize(string a){
	for(int j=0;j<a.length();j++){
		a.at(j)=tolower(a.at(j));
	}
	sort(a.begin(),a.end());
	return a;
}
int main() {

	string word;
	vector<string> todos;
	map<string,int> tup;

	while(cin>>word){
		if(word=="#"){
			break;
		}

		todos.push_back(word);
		tup[organize(word)]+=1;
	}

sort(todos.begin(),todos.end());

	for(int i=0;i<todos.size();i++){
		if(tup[organize(todos[i])]==1){
			cout <<todos[i]<<endl;
		}
	}
}
