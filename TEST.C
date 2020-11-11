#include <stdio.h>

#define MAX  80


char* ReverseWords ( char *a );


//"THIS IS A TEST" -> TEST A IS THIS


int main(int argc, char* argv[])
{
            char strA[] = "THIS IS A TEST";
            char *strRes;

            strRes = ReverseWords ( (char *) strA );
            printf( "%s\n", strRes );

            return 0;
}

// Reverse the words in a zero-terminated string 
char* ReverseWords ( char *a ){
	int i = 0;
	int j = 0;
	int k = 0;
	int word_num = 0;
	char reverse[MAX];
	char *pt;

	pt = reverse;

	//count words
	while(a[i]){
		i++;
	}
	
	printf("%c\n", a[i]);
	
	//reverse string
	//for(j = 0; j < i; j++){
		//if space found copy word to the new array
		//while(*a != ' '){
			//a--;
			//printf("%c\n", a[k++]);
		//}
		/*if(a[i] == ' '){
			k++;
			while(a[k] != ' ' || a[k] != '\0'){
				//a points to the first letter of word
				reverse[j] = a[k];
				printf("%c\n", reverse[j]);
				k++;
			}
			k = 0;
		}*/
		//point to previous letter
		
		
	//}
	//reverse[j] = '\0';
	//printf("%s\n", pt);
	

	//return pt;


}