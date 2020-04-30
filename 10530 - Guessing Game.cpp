//============================================================================
// Name        : 10530.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {

	  vector<int> numbers;
	  vector<string> letters;
	  int i=-1;
	  string a,b;
	  while(cin>>i)
		  if(i==0)
			  break;
		  else{
			  numbers.push_back(i);
		  cin>>a>>b;
		  letters.push_back(b);
		  if(b=="on"){
			  string r="Stan may be honest";
			  int right = numbers[numbers.size()-1];
			  for(int i=0;i<numbers.size()-1;i++){
				  if(!((letters[i]=="low" and numbers[i]<right) or (letters[i]=="high" and numbers[i]>right ))){
					  r="Stan is dishonest";
				  }
			  }
			cout <<r<<endl;
			numbers.clear();
			letters.clear();
		  }
	  }
}
