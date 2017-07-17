#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define TRUE 1
#define FALSE 0
#define LIMIT 12

int is_abc_pythagorean_triplet(int a, int b, int c);
int main(){
	int a, b, c;
	for(a = 0;a < 334;a++){
		for(b = a,c = 1000 - a - b;c > b;c--,b++){
			if(is_abc_pythagorean_triplet(a,b,c)){
				printf("pythagorean triplet is a=%d b=%d c=%d\n",a,b,c);
				printf("value is %lld\n",a*b*c);
				return TRUE;
			}
		}
	}
}

int is_abc_pythagorean_triplet(int a, int b, int c){
	if(pow(a,2) + pow(b,2) == pow(c,2))return TRUE;
	return FALSE;
}


