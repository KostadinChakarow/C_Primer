/* str_cat.c -- joins two strings */


//Problem:
/*
Write a function called string_in() that takes two string pointers as arguments.
If the second string is contained in the first string, have the function return the
address at which the contained string begins. For instance, string_in("hats",
"at") would return the address of the a in hats. Otherwise, have the function
return the null pointer. Test the function in a complete program that uses a loop
to provide input values for feeding to the function.
*/

/***********************************INCLUDES***************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <ctype.h>
/**********************************************************************************************/

/***********************************DEFINES****************************************************/
#define SIZE 80
#define EXIT "quit"
/**********************************************************************************************/


/**********************************FUNCTIONS**************************************************/
static char *get_input(char *buffer, char defaut_size){
	unsigned int i = 0;
	unsigned int new_size = 0;
	char c = '\0';

	free(buffer);
	buffer = (char*)malloc(sizeof(char) * defaut_size );
	if(buffer == NULL){
		fprintf(stderr, "[%s] Memory allocation failed", __func__);
	}
	printf("Enter string:\n");
	while ((c = getchar()) != '\n'){
		buffer[i] = c;
		i++;
		if(i == defaut_size){
			new_size = i + defaut_size;
			buffer = realloc(buffer, new_size);
		}
	}
	buffer[i] = '\0';

	return buffer;
	
}
//compare s2 and s1 and return s2 if s1 in s2
static char *string_in(char *s1, char *s2)
{
	while(*s1 != *s2){
		s1++;
	}
	s2++;
	while(*s1 != *s2){
		s1++;
	}
	if(*s1 == *s2){
		s1--;
		return s1;
	}
return NULL;	
}
/**********************************************************************************************/

/**********************************MAIN*******************************************************/
	
int main(){
	//Initialize input array
	char *pstr1 = NULL;
	char *pstr2 = NULL;
	char *ptrresult;

	ptrresult = (char*)malloc(sizeof(char) * SIZE);
	while((pstr1 != EXIT) || (pstr2 != EXIT)){
		pstr1 = get_input(pstr1, SIZE);
		if(pstr1 == NULL)
			fprintf(stderr, "Empty string");
		pstr2 = get_input(pstr2, SIZE);
		if(pstr2 == NULL)
			fprintf(stderr, "Empty string");
		ptrresult = string_in(pstr1, pstr2);
		printf("address of string 1 in string 2  %s\n", ptrresult);
	}

	return 0;
}

/******************************************************************************************************/