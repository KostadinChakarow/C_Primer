/* str_cat.c -- joins two strings */


//Problem:
/*
Modify and test the function in exercise 1 so that it stops after n characters or
after the first blank, tab, or newline, whichever comes first. (Don't just use
scanf().)
*/

#include <stdio.h>
#include <string.h> 
#include <ctype.h>


#define SIZE 80
#define LENGHT 5


static void get_s(char *arr, int n)
{
	//char input[SIZE];
	char c;
	int i = 0;

	//Read until n-th element or space, tab, new line ecounterred.
 	while(( (arr[i] == ' ') || (arr[i] == '\t') || (arr[i] == '\n') || i < n)){
 		arr[i] = getchar();
 		i++;		
 	}
}
	
int main(){
	//Initialize input array
	char input[SIZE];

	get_s(input, LENGHT);
	printf("%s", input);

	return 0;
 	
 }