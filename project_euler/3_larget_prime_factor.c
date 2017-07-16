#include<stdio.h>
#define INPUT 600851475143
//#define INPUT 13195
#define TRUE 1
#define FALSE 0

int prime_array[10000000] = {2,3}, prime_count = 2;

void get_all_prime_numbers_before(long long int input);
int is_number_exist_in_prime_array(long long int input);
int is_prime(long long int input);
void print_array();

int main(){
	long long int i;
	get_all_prime_numbers_before(10000);
	for(i = prime_count-1; i > -1;i--){
		if(INPUT % prime_array[i] == 0){
			break;
		}
	}
	printf("\nthe largest prime factor is %lld \n",prime_array[i]);
	return 0;
}

void get_all_prime_numbers_before(long long int input){
	long long int i;
	for(i = 6;i+1 < input;i = i+6){
		if(is_prime(i-1)){
			prime_array[prime_count++] = i - 1;
		}
		if(is_prime(i+1)){
			prime_array[prime_count++] = i + 1;
		}
	}
}

int is_number_exist_in_prime_array(long long int input){
	int i;
	for(i = prime_count - 1; i > -1;i--){
		if(prime_array[i] == input)return TRUE;
	}
	return FALSE;
	
}

int is_prime(long long int input){
	long long int i;
	for(i = 0; input / prime_array[i] >= prime_array[i];i++){
		if(input % prime_array[i] == 0)return FALSE;
	}
	return TRUE;
}

void print_array(){
	int i;
	for(i = 0;i < prime_count;i++){
		printf("%d--",prime_array[i]);
	}
	printf("\n");
}
