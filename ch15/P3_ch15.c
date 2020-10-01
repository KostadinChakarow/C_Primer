/*Write a function that takes an int argument and returns the number of "on" bits
in the argument. Test the function in a program*/

/******************************INCLUDES*******************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/********************************************************************/


/******************************DEFINES*******************************/
#define INT_SIZE    32
/********************************************************************/

/**********************************FUNCTIONS*************************/
unsigned int *decimal_to_binary(unsigned char *binP){
	unsigned int *binary;
	int i = 0;                  //varible to conrol the first for loop
	int j = 0;					//variable to control the second for loop

	free(binary);
	binary = (int*)malloc(sizeof(int) * 1);
	for(i = 0; i < INT_SIZE; i++){
		if(*binP > 0 ){             //put the remainder in array if *binP > 0
			binary[i] = (*binP % 2);
			*binP = *binP / 2;
			
		}
		else                        //else put 0s
			binary[i] = 0;
		
	}
	for(j = i - 1; j >= 0; j--){
		printf("%d", binary[j]);	//print the array from last to first element
	}
	printf("\n");

	return binary;
}
unsigned int find_ones(unsigned int n){
	unsigned int *ptr;
	int i = 0;
	int cnt = 0;

	free(ptr1);
	ptr1 = (int*)malloc(sizeof(int) * 1);
	ptr1 = decimal_to_binary(ptr1);
	for(i = 0; i < INT_SIZE; i++){
		if(ptr1[i] == 0 ){             //put the remainder in array if *binP > 0
			cnt++;
		}
	}

	return cnt;

}

/********************************************************************/

/*********************************MAIN*******************************/
int main(){
	unsigned int *input;
	
	input = (char*)malloc(sizeof(int) * 1);
	if(pbin1 == NULL){
		printf("Error");
		return -1;
	}
	printf("Enter int number:\n");
	while(scanf("%d", input)){
		printf("Enter int number:\n");
		find_ones(ptr1);
		
	}
}
/********************************************************************/