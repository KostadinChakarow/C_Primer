/* str_cat.c -- joins two strings */


//Prolem:
/*Design and test a function that fetches the next n characters from input (including
blanks, tabs, and newlines), storing the results in an array whose address is
passed as an argument.*/

#include <stdio.h>
#include <string.h> 
#include <ctype.h>
#define MAX 80


char get_s(char *arr)
{
	char c;
	int i = 0;

 	while((c = getchar()) != '\n'){
 		arr[i] = c;
 		printf("%c\n", arr[i]);
 		i++;
 	}
 	printf("array = %s\n", arr);
 	return arr;
}

int main(){
	char array1[MAX];
	char *parray1;

	parray1 = array1;
	get_s(array1);
	printf("%s\n", array1);
	
return 0;
 	
 }