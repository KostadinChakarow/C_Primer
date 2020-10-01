/*Write a program that reads two binary strings as command-line arguments and
prints the results of applying the ~ operator to each number and the results of
applying the &, |, and ^ operators to the pair. Show the results as binary strings.*/

/******************************INCLUDES*******************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/********************************************************************/


/******************************DEFINES*******************************/
#define CHAR_SIZE    8
/********************************************************************/

/**********************************FUNCTIONS*************************/
char binary_to_decimal(char *binP){
	int j = 0;
	int i = 0;
	unsigned char output = 0;
	
	for(i = 0; i < CHAR_SIZE; i++){
		if(binP[i] == '1') //check bit value of the current position 
		{
			output = output + pow(2, 7 - i);
		}
	}
	return output;
}
void decimal_to_binary(unsigned char *binP){
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
unsigned char inverse(char *ptr_inverse){
	unsigned char num = 0;
	
	num = ~*ptr_inverse;
	
	return num;
	
}
unsigned char and_two_num(unsigned char *ptr_1, unsigned char *ptr_2){
	unsigned char sum = 0;
	
	sum = (*ptr_1) & (*ptr_2);
	
	return sum;
	
}
unsigned char or_two_num(unsigned char *ptr_1, unsigned char *ptr_2){
	unsigned char sum = 0;
	
	sum = (*ptr_1) | (*ptr_2);
	
	return sum;
	
}
unsigned char xor_two_num(unsigned char *ptr_1, unsigned char *ptr_2){
	unsigned char sum = 0;
	
	sum = *ptr_1 ^ *ptr_2;
	
	return sum;
	
}
/********************************************************************/

/*********************************MAIN*******************************/
int main(){
	unsigned char *pbin1;
	unsigned char *pbin2;
	unsigned char dec1 = 0;
	unsigned char dec2 = 0;
	unsigned char inverse_num1 = 0;
	unsigned char inverse_num2 = 0;
	unsigned char sum_and = 0;
	unsigned char sum_or = 0;
	unsigned char sum_xor = 0;
	
	
	pbin1 = (char*)malloc(sizeof(char) * 1);
	pbin2 = (char*)malloc(sizeof(char) * 1);
	if(pbin1 == NULL){
		printf("Error");
		return -1;
	}
	if(pbin2 == NULL){
		printf("Error");
		return -1;
	}
	printf("Enter 8 bit number 1 and number 2 and hit enter:\n");
	printf("01234567\t01234567\n");
	while(scanf("%s %s", pbin1, pbin2)){
		
		//convert string 1 to decimal
		dec1 = binary_to_decimal(pbin1);
		//convert string 2 to decimal
		dec2 = binary_to_decimal(pbin2);
		//Inverse decimal 1    
		inverse_num1 = inverse(&dec1);
		//Inverse decimal 2
		inverse_num2 = inverse(&dec2);
		//find num1 & num2
		sum_and = and_two_num(&dec1, &dec2);	
		//find num1 | num2		
		sum_or = or_two_num(&dec1, &dec2);
		//find num1 ^ num2;					
		sum_xor = xor_two_num(&dec1, &dec2);
		//print results
		printf("Inverse of %s is:", pbin1);  
		decimal_to_binary(&inverse_num1);						
		printf("Inverse of %s is:", pbin2);  
		decimal_to_binary(&inverse_num2);
		printf("\t%s\n &\n \t%s\n is:\t", pbin1, pbin2);				
		decimal_to_binary(&sum_and);
		printf("\t%s\n |\n \t%s\n is:\t", pbin1, pbin2);			
		decimal_to_binary(&sum_or);	
		printf("\t%s\n ^\n \t%s\n is:\t", pbin1, pbin2);		
		decimal_to_binary(&sum_xor);			
		printf("Enter 8 bit number 1 and number 2 and hit enter:\n");
		printf("01234567\t01234567\n");
	}
}
/********************************************************************/