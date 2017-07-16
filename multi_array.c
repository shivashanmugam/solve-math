#include<stdio.h>

void multi_array_passing(int array[][9]);

main(){
	int multi_input_array[9][9], input_array[9], multi_input_array_1[][9], input_array[];
	multi_input_array[0][0] = 1;
	multi_input_array[0][0] = 1;

	multi_array_passing(input_array);
}

void multi_array_passing(int arg_array[][9]){
	printf("%d",arg_array[0][0]);
}

void array_passing(int arg_array){

}
