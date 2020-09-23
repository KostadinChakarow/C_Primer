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
	char *p;
	_Bool char_found = 0;
	int i = 0;

	p = input;
	//Read word until space ecounterred.
 	while((input[i] = getchar()) != 'a'){
 		i++;	
 	}

 	if(input[i] == 'a'){
 		//input = input + i;
 		printf("in if\n");
 		printf("%s\n", input);
 			return input[i];
 	}
 	else
 		return 0;	
}
	
int main(){
	//Initialize input array
	char ch[SIZE];

	printf("%s", get_s(ch, LETTER));

	return 0;
 	
 }