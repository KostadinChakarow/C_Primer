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
void find_ones(unsigned int *binP){
	unsigned int *binary;
	int i = 0;                  //varible to conrol the first for loop
	int j = 0;					//variable to control the second for loop
	int cnt = 0;

	
	binary = (int*)malloc(sizeof(int) * 1);
	for(i = 0; i < INT_SIZE; i++){
		if(*binP > 0 ){             //put the remainder in array if *binP > 0
			binary[i] = (*binP % 2);
			*binP = *binP / 2;
			
		}
		else                        //else put 0s
			binary[i] = 0;
		if(binary[i] == 1){
		    cnt++;
		}
	}
	for(j = i - 1; j >= 0; j--){
		printf("%d", binary[j]);	//print the array from last to first element
	}
	printf(" has %d ones in it", cnt);
	printf("\n");
	free(binary);

	return 0;
}


/********************************************************************/

/*********************************MAIN*******************************/
int main(){
	unsigned int *input;
	
	input = (int*)malloc(sizeof(int) * 1);
	if(input == NULL){
		printf("Error");
		return -1;
	}
	printf("Enter int number:\n");
	while(scanf("%d", input)){
		printf("Enter int number:\n");
	    find_ones(input);
		
	}
}
/********************************************************************/
