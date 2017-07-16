#include<stdio.h>
#define TRUE 1;
#define FALSE 0;

int check_palindrome(int input);

int main(){
	int i, j, max_i, max_j;
	for(i = 999;i > 100;i--){
		for(j = 999;j > 100;j--){
			if(check_palindrome(i*j)){
				if(max_i == 0){
					max_i = i;
					max_j = j;
				}else if(i+j > max_i + max_j){
					max_i = i;
					max_j = j;
				}
			}
		}
	}
	printf("\n%d\n",max_i * max_j);
}

int check_palindrome(input){
	int array[6], i, length;
	for(i = 0;input > 0;i++){
		array[i] = input % 10;
		input = input / 10;
	}
	length = i;
	for(i = 0;i < length / 2;i++){	
		if(array[i] != array[length - i - 1]){
			return FALSE;
		}
	}
	return TRUE;
}



