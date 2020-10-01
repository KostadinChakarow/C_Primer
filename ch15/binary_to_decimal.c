/*Program to convert a binary number to decimal*/

/******************************INCLUDES*******************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/********************************************************************/


/******************************DEFINES*******************************/
#define CHAR_SIZE    8
/********************************************************************/

/**********************************FUNCTIONS*************************/
char decimal_to_binary(char *binP){
	int j = 0;
	int i = 0;
	unsigned char output = 0;
	
	for(i = 0; i < CHAR_SIZE; i++){
		if(binP[i] == '1') //check bit value of the current position 
		{
		    printf("1 found at arr[%d]\n", i);
			output = output + pow(2, 7 - i);
		}
	}
	return output;
}
/********************************************************************/

/*********************************MAIN*******************************/
int main(){
	unsigned char dec;
	unsigned char *pbin;
	
	pbin = (char*)malloc(sizeof(char) * 1);
	if(pbin == NULL){
		printf("Error");
		return -1;
	}
	printf("Enter number to convert:\n");
	printf("01234567\n");
	while(scanf("%s", pbin)){
		dec = decimal_to_binary(pbin);
		printf("the decimal of %s is %d\n", pbin, dec);
		printf("Enter number to reverse: \n");
		printf("01234567\n");
	}
}
/********************************************************************/