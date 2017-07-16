#include<stdio.h>
#define TRUE 1
#define FALSE 0

int is_divisible_by_1_to_20(long long int value);

int main(){
	long long int i;
	for(i = 20;!(is_divisible_by_1_to_20(i));i = i+20);
	printf("number divisible by 1 to 20 is %lld\n", i);	
}

int is_divisible_by_1_to_20(long long int value){
	if(value % 19 == 0 && value % 18 == 0 && value % 17 == 0 && value % 16 == 0 && value % 15 == 0 && value % 14 == 0 && value % 13 == 0 && value % 12 == 0 && value % 11 == 0){
		return TRUE;
	}
	return FALSE;
}


