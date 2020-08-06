#include <iostream>
using namespace std;

int main() {

	int a,b;
	while(cin>>a>>b)
		if(a==0 and b==0)
			break;
		else{
			int num[b];
				for(int i=0;i<b;i++){
					cin>>num[i];
				}
				int cont=0;
				cont=a-num[0];
				for(int i=0;i<b-1;i++){
					if(num[i]>num[i+1]){
						cont+=(num[i]-num[i+1]);
					}
				}
				cout <<cont<<endl;
		}
}
