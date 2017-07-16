#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define LIMIT 1000
int multiple_of_15(int value);


int main(){
	long int total = 0, i, j;
	for(i = 3,j = 5;i < LIMIT;i = i+3, j = j+5){
		if(multiple_of_15(i)){
			if(j < LIMIT){
				printf("%ld\n",j);
				total = total + j;
			}
		}else{
			total = total + i;
			printf("%ld\n",i);
			if(j < LIMIT){
				total = total + j;
				printf("%ld\n",j);

			}
		}		
	}
	printf("\ntotal - %ld\n", total);
}

int multiple_of_15(int value){
	if(value % 15 == 0){
		return TRUE;
	}
	return FALSE;
}


