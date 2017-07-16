#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
void get_array_input(int row, int col);
int find_the_next_unfilled(int row, int col);
int brute_force_parser(int row, int col);
int checker(int row, int col);
int row_check(int row, int col);
int col_check(int row, int col);
int sub_array_check(int row, int col);
int sub_array_of_position(int row, int col);
int print_array();

int count = 0;

int array[9][9]; 

main(){
	int row, col, unfilled;
	get_array_input(9, 9);
	unfilled = find_the_next_unfilled(0,0);
	row = unfilled % 10;
	col = (unfilled / 10) % 10;
	print_array();
	if(brute_force_parser(row, col)){
		printf("\n\n\n\n-------------susscessful-----------\n\n");
		print_array();
	}else{
		printf("invalid input");
	}
}


void get_array_input(int row, int col){
	int i, j;
	for(i = 0;i < row;i++){
		for(j = 0;j < col;j++){
			printf("give input for position array[%d][%d]\n",i,j);
			scanf("%d",&array[i][j]);
		}
	}
}


int find_the_next_unfilled(int row, int col){
	int i,j;
	for(i = row;i < 9;i++){
		for(j = col;j < 9;j++){
			if(array[i][j] == 0){
				return (j * 10) + i;
 			}
		}
		col = 0;
	}
	return FALSE;
}

int brute_force_parser(row, col){
	int i, result, unfilled, next_row, next_col;
	
	for(i = 1;i < 10;i++){
		array[row][col] = i;
		if(checker(row, col)){
			unfilled = find_the_next_unfilled(row,col);
			if(unfilled){
				next_row = unfilled % 10;
				next_col = (unfilled / 10) % 10;
				if(brute_force_parser(next_row, next_col)){
					return TRUE;
				}	
			}else{
				return TRUE;
			}
		}
	}
	array[row][col] = 0;
	return FALSE;
}

int checker(int row, int col){
	if(row_check(row, col)){
		if(col_check(row, col)){
			if(sub_array_check(row, col)){
				return TRUE;
			}
		}
	}
	return FALSE;
}

int row_check(int row, int col){
	int j;
	for(j = 0;j < 9;j++){
		if(col == j)continue;
		if(array[row][j] == array[row][col]){
			return FALSE;
		}
	}	
	return TRUE;
}

int col_check(int row, int col){
	int i;
	for(i = 0;i < 9;i++){
		if(row == i)continue;
		if(array[i][col] == array[row][col]){
			return FALSE;
		}
	}	
	return TRUE;
}
int sub_array_check(int row, int col){
	int row_start, col_start, sub_start, i, j;
	sub_start = sub_array_of_position(row, col);
	row_start = sub_start % 10;
	col_start = (sub_start / 10) % 10;
	
	for(i = row_start;i < row_start+3;i++){
		for(j = col_start;j < col_start+3;j++){
			if(i == row && j == col)continue;
			if(array[i][j] == array[row][col]){
				return FALSE;
			}
		}	
	}
	return TRUE;
}

int sub_array_of_position(int row, int col){
	int row_start, col_start;
	if(row < 3){
		row_start = 0;
	}else if(row < 6){
		row_start = 3;
	}else{
		row_start = 6;
	}
	
	if(col < 3){
		col_start = 0;
	}else if(col < 6){
		col_start = 3;
	}else{
		col_start = 6;
	}
	return (col_start * 10 ) + row_start;
}

int print_array(){
	int i, j;
	for(i = 0;i < 9;i++){
		if(i % 3 == 0){
			printf("\n-----------------------------------\n");
		}else{
			printf("\n\n");
		}
		for(j = 0;j < 9;j++){
			if(j % 3 == 0){
				printf(" | ");
			}
			if(array[i][j]){
				printf(" %d ",array[i][j]);	
			}else{
				printf(" - ");	
			}
			
		}	
	}
	printf("\n\n");
}
