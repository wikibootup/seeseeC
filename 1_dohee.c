#include<stdio.h>

int main(){
	int i,j;

	for(i=0;i<10;i++){
	for(i=10;i<20;i++){
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
