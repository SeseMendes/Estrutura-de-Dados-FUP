#include <stdio.h>
#include <stdlib.h>

int somarVetor(int t, int v[]){
	int s=0;
	if(t==1){
		printf("\nResultado para t=%d: %d\n", t,v[0]);
		return v[0];
	}
	else{
		int s= v[t-1]+somarVetor(t-1,v);
		printf("\nResultado para t=%d=%d\n",t,s);
	    return s;	
	}
}

int main(){
	int v[2]={1,2};

	printf("\nResultado da soma: %d", somarVetor(2,v));
	return 0;
}