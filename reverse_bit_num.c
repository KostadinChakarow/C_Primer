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
unsigned char decimal_to_binary(unsigned char input){
	unsigned char binary[9];
	int i = 0;                  //varible to conrol the first for loop
	int j = 0;					//variable to control the second for loop

	for(i = 0; i < 8; i++){
		if(input > 0 ){             //put the remainder in array if *binP > 0
			binary[i] = (input % 2);
			input = input / 2;
			
		}
		else                        //else put 0s
			binary[i] = 0;
		
	}
	for(j = i - 1; j >= 0; j--){
		printf("%d", binary[j]);	//print the array from last to first element
	}
	printf("\n");
	return 0;
}
char reverseBit(unsigned char num_to_rev){
	unsigned char input = num_to_rev;
	_Bool flag_bit0 = 0;
	int i = 0;
	unsigned char comp_num = 128;
	
	for(i = 0; i < 8; i++){
		if(input & comp_num){
			if(input & 1) //checks if the value of bit 0 is 1 
				flag_bit0 = 1; //toggle bit 7 if we have 1 on bit 0 before shift
			else 
				flag_bit0 = 0;
			input = input >> 1;
			if(flag_bit0 == 1)
				input = input | 128;
			comp_num = comp_num >> 1;
		}
		comp_num = comp_num >> 1;
		
	}
	
	return input;
}
/********************************************************************/

/*********************************MAIN*******************************/
int main(){
	unsigned char num = 0;
	unsigned char reversed_num = 0;
	unsigned char num_test = 0;
	
	while(1){

		printf("Enter number to reverse: \n");
		scanf("%hhu", &num);
		printf("number before reversing\n");
		decimal_to_binary(num);
		printf("number after reverce \n");
		reversed_num = reverseBit(num);
		decimal_to_binary(reversed_num);		
	}

	return 0;
}
/********************************************************************/
