#include<stdio.h>
#define LIMIT 4000000

int main(){
	long long int left, right, count, sum_of_even_fib = 0, temp;
	for(left = 1, right = 2, count = 3; right < LIMIT;count++){
		temp = right;
		right = left + right;
		left = temp;
		if(count % 3 == 0){
			sum_of_even_fib = sum_of_even_fib + temp;
		}
	}
	printf("sum of even fibanoci = %lld\n",sum_of_even_fib);
}

