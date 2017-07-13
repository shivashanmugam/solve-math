#include<stdio.h>
//prime array will not hold 2 and five, because multiples of two will not be sent for isPrime function as well as number ending with 5 will not proceeded for looped function inside isPrime 
int prime_array[200000] = {3,7}, prime_count = 2;
long long int total = 17; //already we found 2,3,5,7 and total is 17 and 2 and 5 is ommited from prime array as two is even number and 5 multiplication ending with either 0 or 5
main(){
	int checkPrime, i;
	for(i = 12;i < 2000000;i = i + 6){
		//prime numbers will be plus 1 or minus 1 of the multiplication of 6
		isPrime(i-1);
		isPrime(i+1);
	}
	printf("---%lld---",total);
}


int isPrime(input_num){
	
	int i=0;
	
	//by default a number ending with 5 is not a prime number
	if((input_num % 10)  == 5){
		return 0;
	}
	
	
	for(i = 0;i < prime_count;i++){
		
		if(input_num % prime_array[i] == 0){
			return 0;
		}
		//input_num / prime_array[i] < prime_array[i] if the condition becomes true which means that we no need not check further prime numbers in the array 
		//factors of twelve                1  2  3  4   6  12
		//divident of factors with twelve  12 6  4  3   2  1
		//after finding 3rd factor the further factors are just dividents of 3 and the dividents are becoming lesser than the factors after the break point(3rd index)
		if(input_num / prime_array[i] < prime_array[i]){
			prime_array[prime_count++] = input_num;
			total = total + input_num;
			return 1;
		}
	}
	prime_array[prime_count++] = input_num;
	total = total + input_num;

	return 1;
}


