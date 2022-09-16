#include <stdio.h>
#include <stdlib.h>

void bin(int n){
	if(n>=0 && n<2)
	   printf("%d", n);
	else{
	   	bin(n/2);
	   	printf("%d", n%2);
	}   
}

int main(){
	
	int num;
	printf("Type a decimal number: \n");
	scanf("%d", &num);
	printf("Binary: ");
	bin(num);

	return 0;
}