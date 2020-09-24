/* str_cat.c -- joins two strings */


//Problem:
/*
Write a function that replaces the contents of a string with the string reversed.
Test the function in a complete program that uses a loop to provide input values
for feeding to the function.
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
static char *reverse(char *s1)
{
	char *reverse_str;
	int n = 0;

	n = strlen(s1);
	reverse_str = (char*)malloc(sizeof(char) * n);
	s1 = s1 + (n - 1);
	printf("%s\n", s1);
	for(int i = 0; i < n; i++){
		reverse_str[i] = *s1;
		s1--;
		printf("%s\n", s1);
	}


return reverse_str;	
}
/**********************************************************************************************/

/**********************************MAIN*******************************************************/
	
int main(){
	//Initialize input array
	char *pstr1 = NULL;
	char *ptrresult;


	ptrresult = (char*)malloc(sizeof(char) * SIZE);
	while(pstr1 != EXIT){
		pstr1 = get_input(pstr1, SIZE);
		if(pstr1 == EXIT)
			break;
		if(pstr1 == NULL)
			fprintf(stderr, "Empty string");
		ptrresult = reverse(pstr1);
		printf("strin reversed -  %s\n", ptrresult);
	}

	return 0;
}

/******************************************************************************************************/