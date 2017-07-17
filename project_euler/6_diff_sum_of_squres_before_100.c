#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define LIMIT 100
#define TRUE 1
#define FALSE 0


int main(){

	long long int sum_of_squres = 0, product_of_num = 0, i;
	for(i = 1;i <= LIMIT;i++){
		sum_of_squres = sum_of_squres + pow(i,2);
		product_of_num = product_of_num + i;
	}
	printf("product of num %d and sum of squres %d\n",product_of_num, sum_of_squres);
	printf("product of num %d and sum of squres %d\n",(int)pow(product_of_num,2), sum_of_squres);

	printf("the difference between sum of squres and squre of product is %d \n", (int)pow(product_of_num,2) - sum_of_squres);
	return 0;
}


