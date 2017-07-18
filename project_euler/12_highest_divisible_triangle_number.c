#include<stdio.h>
#define LIMIT 500
int total_factors_of_a_num(long long int input);

int main(){
	int i, factors = 0;
	long long int total = 0;
	for(i = 1;factors < LIMIT;i++){
		total = total + i;
		factors = total_factors_of_a_num(total);
	}
	printf("the triangle number which exceed more than 500 factors is that %lld\n",total);
	return 0;
}

int total_factors_of_a_num(long long int input){
	int i, factors = 0;
	for(i=1; input / i >= i;i++){
		if(input % i == 0)factors++;
	} 
	if(factors % 2 == 0){
		return factors * 2;
	}
	return (factors * 2) + 1;
}
