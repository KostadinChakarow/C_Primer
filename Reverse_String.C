#include <stdio.h>

#define MAX  80


char* ReverseWords ( char *a );


//"THIS IS A TEST" -> TEST A IS THIS


int main(int argc, char* argv[])
{
            char strA[] = "THIS IS A TEST";
            char *strRes;
            int i = 0;
            
            strRes = ReverseWords ( (char *) strA );
            
            //printf( "%s\n", strRes );

            return 0;
}

// Reverse the words in a zero-terminated string 
char* ReverseWords ( char *a ){

	//start at first word
	int i = 0;
	int k = 0;
	int length = 0;
	int current_position = 0;
	char reversed[MAX];
	char input[MAX];
	char *pt;

	pt = reversed;
	
	//find array lenght
	while(1){
	    if(a[i] == '\0')
	        break;
		i++;
	}
    while(i-- != 0){
        printf("%d\n", i);
        if(a[i] == ' '){
            
            // space found
            current_position = i;
            //point to last word
            current_position++;
            while(1){
                
                if(a[current_position] == ' ' || a[current_position] == '\0'){
                    reversed[k++] = ' ';
   
                    break;
                }
                reversed[k] = a[current_position];
                printf("%c", reversed[k]);
                //go to next leter
                current_position++;
                k++;
            }
        }
        if(i == 0){
            printf("In second if\n");
            current_position = i;
            while(1){
                
                if(a[current_position] == ' '){
                    reversed[k] = '\0';
                    break;
                }
                printf("IN  second while \n");
                reversed[k] = a[current_position];
                //go to next leter
                current_position++;
                k++;
            }
        }
    }
    for(i = 0; i < 15; i++){
        printf("%c", reversed[i]);
    }
    printf("\n");
    printf("%s", pt);

	

} 
