#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define LIMIT 10001

int is_prime(int input);
long long int prime_array[10001] = {2,3}, prime_count = 2;
int main(){
	long long int i;
	for(i = 6;prime_count < LIMIT;i = i+6){
		if(is_prime(i-1)){
			prime_array[prime_count++] = i-1;
		}
		if(is_prime(i+1)){
			prime_array[prime_count++] = i+1;
		}
	}

	printf("the 10001 th prime is %lld\n",prime_array[10000]);
}

int is_prime(int input){
	int i;
	for(i = 0;input / prime_array[i] >= prime_array[i];i++){
		if(input % prime_array[i] == 0)return FALSE;
	} 
	return TRUE;
}
