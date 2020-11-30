/*Suppose you have this structure:
struct gas {
 float distance;
 float gals;
 float mpg;
};
a. Devise a function that takes a struct gas argument. Assume that the
passed structure contains the distance and gals information. Have the
function calculate the correct value for the mpg member and return the
now completed structure.
b. Devise a function that takes the address of a struct gas argument.
Assume that the passed structure contains the distance and gals
information. Have the function calculate the correct value for the mpg
member and assign it to the appropriate member.
*/

/***************************INCLUDES************************************/
#include <stdio.h>

/***************************DEFINES*************************************/
#define MONTH_NAME 20
#define MONTH_ABR  4

/***************************STRUCTS*************************************/
struct gas {
 float distance;
 float gals;
 float mpg;
};

/***************************FUNCTIONS PROTOTYPE***********************************/
float calc_mpg(struct gas *);


/***************************MAIN****************************************/
int main()
{	
	struct gas gas1;
	
	printf("Enter distance and gals: \n");
	while(scanf("%f %f", &gas1.distance, &gas1.gals)){
		calc_mpg(&gas1);
		printf("distance + gals =  mpg\n");
		printf("%f + %f =  %f\n", gas1.distance, gas1.gals, gas1.mpg);
	}
	
	return 0;
}
/***************************FUNCTIONS***********************************/
float calc_mpg(struct gas *param){
	return(param -> mpg = param -> distance + param -> gals);
	
}
