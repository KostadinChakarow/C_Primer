/* str_cat.c -- joins two strings */


//Prolem:
/*Design and test a function that fetches the next n characters from input (including
blanks, tabs, and newlines), storing the results in an array whose address is
passed as an argument.*/

#include <stdio.h>
#include <string.h> 
#include <ctype.h>


char get_s(void)
{
	char input[80];
	char c;
	char *p;
	int i = 0;

	p = input;

 	while((c = getchar()) != '\n'){
 		input[i] = c;
 		i++;
 			if(c == ' ' || c == '\t'){
 				printf("%s\n", p);
 				//return input; // Segmentation errror
 				break;
 			}
 			
 	}
}

int main(){
	get_s();
	//printf("%s", get_s());// segmentation error???
return 0;
 	
 }