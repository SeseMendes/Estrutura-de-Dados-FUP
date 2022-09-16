#include <stdio.h>
#include <math.h>

int pot(int x, int y){
	
    if(y==0)
       return 1;
    else{
    	int r;
		r=x* pot(x,y-1);
    	printf("\n %d^%d=%d", x, y, r);
    	return r;
	}   
}

int main(){
	
	int n1,n2;
	printf("Write a number: \n");
	scanf("%d",&n1);
	printf("Type the number to raise n1: \n");
	scanf("%d",&n2);
	printf("\nResult: %d", pot(n1,n2));
	return 0;
	
}