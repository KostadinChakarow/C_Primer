/*Program to reverse order of a binary number*/

/******************************INCLUDES*******************************/
#include <stdio.h>
#include <stdlib.h>
/********************************************************************/


/******************************DEFINES*******************************/
#define COMP_MASK_1 1
#define COMP_MASK_2  128
#define CHAR_SIZE    8
/********************************************************************/

/**********************************FUNCTIONS*************************/
char reverseBit(char *binP){
	char *output = binP;
	int i = 0;
	
	for(i = 0; i < CHAR_SIZE; i++){
		output = binP >> 1;
		if((binP & 1) == input ) //checks if the value of bit 0 is 1 
		{
			output |= COMP_MASK_2; //toggle bit 7 if we have 1 on bit 0 before shift
		} 
		
	}
	
	return output;
}
/********************************************************************/

/*********************************MAIN*******************************/
int main(){
	char num = 0;
	char reversed_num = 0;
	
	printf("Enter number to reverse: \n");
	while(scanf("%c", &num)){
		reversed_num = reverseBit(num);
		printf("the reverse of %d is %d\n", num, reversed_num);
		printf("Enter number to reverse: \n");
	}
}
/********************************************************************/
