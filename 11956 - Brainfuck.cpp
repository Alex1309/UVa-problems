
#include <iostream>
using namespace std;
#include <stdio.h>

int main() {
	int m;
    char comm [100005];
	cin>>m;
	for(int j=0;j<m;j++){
		scanf("%s", &comm);
        unsigned char memory[100] = {};
	    int point=0;

	    for(int i=0;comm[i];i++){

	    	if(comm[i]=='>'){
	    		point++;

	    	}else if(comm[i]=='<'){
	    		point--;

	    	}else if(comm[i]=='+'){
	    		memory[point]++;

	    	}else if(comm[i]=='-'){
	    		memory[point]--;

	    	}
	    	 if(point >= 100)  point = 0;
	    	if(point < 0) point = 99;
		}
		 printf("Case %d:",j+1);
		 for (int i = 0; i < 100; i++){
	            printf(" %02X", memory[i]);
		 }
		 printf("\n");
	}
}




