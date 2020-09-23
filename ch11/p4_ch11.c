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

static char *get_s(char *input, char a)
{
	int i = 0;

	//Read word until new line.
 	while((*input = getchar()) != '\n'){
 		if(*input == 'a'){
 			return input; // return pointer if a encounered
 		}
 		input++;	
 	}
 	return 0;	
}
	
int main(){
	//Initialize input array
	char ch[SIZE];

	printf("%s", get_s(ch, LETTER));

	return 0;
 	
 }