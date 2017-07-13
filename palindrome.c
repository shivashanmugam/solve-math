#include<stdio.h>
#include<string.h>
main(){
	int i, str_length;
	char input_str[30];
	scanf("%s",input_str);
	
	str_length = strlen(input_str);
	
	for(i = 0;i < str_length/2;i++){
		if(input_str[i] != input_str[str_length-i-1]){
			printf("not a palindrome");
			return;
		}
	} 
	printf("palindrome");
}
