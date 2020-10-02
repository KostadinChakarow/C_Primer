/*Write a function that takes two int arguments: a value and a bit position. Have
the function return 1 if that particular bit position is 1, and have it return 0
otherwise. Test the function in a program.*/

/******************************INCLUDES*******************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/********************************************************************/


/******************************DEFINES*******************************/
#define INT_SIZE    32
/********************************************************************/

/**********************************FUNCTIONS*************************/
void find_ones_at(unsigned int *binP, unsigned int bit_pos){
	unsigned int *binary;
	int i = 0;                  //varible to conrol the first for loop
	int j = 0;				//variable to control the second for loop
	_Bool flag = 0;

	
	binary = (int*)malloc(sizeof(int) * 1);
	for(i = 0; i < INT_SIZE; i++){
		if(*binP > 0 ){             //put the remainder in array if *binP > 0
			binary[i] = (*binP % 2);
			*binP = *binP / 2;
			
		}
		else                        //else put 0s
			binary[i] = 0;
		if(binary[bit_pos] == 1){
		    flag = 1;
		}
	}
	for(j = i - 1; j >= 0; j--){
		printf("%d", binary[j]);	//print the array from last to first element
	}
	if(flag == 0){
		printf(" has 0 on pos %d", bit_pos);
		return 0;
	}
	
	printf(" has 1 on pos %d", bit_pos);
	printf("\n");
	free(binary);

	return 1;
}


/********************************************************************/

/*********************************MAIN*******************************/
int main(){
	unsigned int *input;
	int position = 0;
	input = (int*)malloc(sizeof(int) * 1);
	if(input == NULL){
		printf("Error");
		return -1;
	}
	printf("Enter int number:\nEnter position:\n");
	while(scanf("%d %d", input, &position)){
	    find_ones_at(input, position);
	    printf("Enter int number:\nEnter position:\n");
		
	}
}
/********************************************************************/
