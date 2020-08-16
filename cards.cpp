#include <iostream>
using namespace std;
#include <vector>

int main() {

	int a,b;
	while(cin>>a>>b)
		if(a==0 and b==0){
			break;
		}else{
			int al[a],be[b];
			for(int i=0;i<a;i++){
				cin>>al[i];
			}
			for(int i=0;i<b;i++){
				cin>>be[i];
			}
			vector<int> aux,bux;
			for(int i=0;i<a-1;i++){
				if(al[i]!=al[i+1]){
					aux.push_back(al[i]);
				}
			}
			aux.push_back(al[a-1]);
			for(int i=0;i<b-1;i++){
				if(be[i]!=be[i+1]){
					bux.push_back(be[i]);
				}
			}
			bux.push_back(be[b-1]);

			if(bux.size()>=aux.size()){
				for(int i=0;i<aux.size();i++){
					for(int j=0;j<bux.size();j++){
						if(aux[i]==bux[j]){
							aux[i]=0;
							bux[j]=0;
						}
					}
				}
			}else if(bux.size()<aux.size()){
				for(int i=0;i<bux.size();i++){
					for(int j=0;j<aux.size();j++){
						if(bux[i]==aux[j]){
							aux[j]=0;
							bux[i]=0;
						}
					}
				}
			}
			int conA=0,conB=0;
			for(int i=0;i<aux.size();i++){
				if(aux[i]!=0)
					conA++;
			}
			for(int i=0;i<bux.size();i++){
				if(bux[i]!=0)
					conB++;
			}
			if(conA>=conB){
				cout<<conB<<endl;
			}else if(conA<conB){
				cout<<conA<<endl;
			}
	}
	return 0;
}
