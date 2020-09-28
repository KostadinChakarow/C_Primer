/*Program to reverse order of a binary number*/

/******************************INCLUDES*******************************/
#include <stdio.h>
#include <stdlib.h>
/********************************************************************/


/******************************DEFINES*******************************/
#define FIRST_ELEMENT 0
#define LAST_ELEMENT  7
#define CHAR_SIZE    8
/********************************************************************/

/**********************************FUNCTIONS*************************/
char reverseBit(char *binP){
	char input = binP;
	char output;
	int i = 0;
	
	for(i = 0; i < CHAR_SIZE; i++){
		output = binP >> 1;
		if(input[LAST_ELEMENT] != output[FIRST_ELEMENT]){
			output[FIRST_ELEMENT] = output[FIRST_ELEMENT] | 1;
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
	while(scanf("%d", &num)){
		reversed_num = reverseBit(num);
		printf("the reverse of %d is %d\n", num, reversed_num)
		printf("Enter number to reverse: \n");
	}
}
/********************************************************************/