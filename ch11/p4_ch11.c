/* str_cat.c -- joins two strings */


//Problem:
/*
Design and test a function that searches the string specified by the first function
parameter for the first occurrence of a character specified by the second function parameter. 
Have the function return a pointer to the character if successful, and a
null if the character is not found in the string. (This duplicates the way that the
library strchr() function works.) Test the function in a complete program that
uses a loop to provide input values for feeding to the function.
*/

#include <stdio.h>
#include <string.h> 
#include <ctype.h>


#define SIZE 80
#define LENGHT 5
#define LETTER 'a'

static char get_s(char *input, char a)
{
	//char input[SIZE];
	
	int i = 0;

	//Read word until space ecounterred.
 	while((input[i] = getchar()) != '\n'){
 		if(input[i] == a){
 			printf("Char found in at input[%d]\n", i);
 			return (input + i);
 		}


 		i++;		
 	}

 	
 	return 0;
}
	
int main(){
	//Initialize input array
	char ch[SIZE];

	printf("%s", get_s(ch, LETTER));

	return 0;
 	
 }