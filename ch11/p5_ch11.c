/* str_cat.c -- joins two strings */


//Problem:
/*
Write a function called is_within() that takes a character and a string pointer as
its two function parameters. Have the function return a nonzero value (true) if the
character is in the string and zero (false) otherwise. Test the function in a
complete program that uses a loop to provide input values for feeding to the
function.
*/

/***********************************INCLUDES***************************************************/
#include <stdio.h>
#include <string.h> 
#include <ctype.h>
/**********************************************************************************************/

/***********************************DEFINES****************************************************/
#define SIZE 80
#define LENGHT 5
/**********************************************************************************************/

static _Bool is_within(char a, char *input)
{
	int i = 0;

	//Read word something diffrent than char is typed.
 	while(scanf("%c", input)){
 		
 		if(*input == a){
 			return 1; // return True if a encounered
 		} 
 		if(*input != '\n'){
 			return 0;
 			break;
 		}

 		input++;	
 	}

 	return 0;	
}
	
int main(){
	//Initialize input array
	char ch[SIZE];
	char letter;

	printf("Enter character for searching:\n");
	scanf("%c", &letter);
	printf("Enter word in which to search\n");
	printf("%d\n", is_within(letter, ch));

	return 0;
 	
 }