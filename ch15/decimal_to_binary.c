/*Program to convert char type number to binary*/

/******************************INCLUDES*******************************/
#include <stdio.h>
#include <stdlib.h>
/********************************************************************/


/******************************DEFINES*******************************/

/********************************************************************/

/**********************************FUNCTIONS*************************/
void *decimal_to_binary(unsigned char *binP){
	unsigned char binary[9];
	int i = 0;                  //varible to conrol the first for loop
	int j = 0;					//variable to control the second for loop

	for(i = 0; i < CHAR_SIZE; i++){
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
}
/********************************************************************/

/*********************************MAIN*******************************/
int main(){
	unsigned char num = 0;
	
	printf("Enter number to convert: \n");
	while(scanf("%d", &num)){
		decimal_to_binary(&num);
		printf("Enter number to reverse: \n");
	}
}
/********************************************************************/