/*Devise a structure template that will hold the name of a month, a three-letter
abbreviation for the month, the number of days in the month, and the month
number.*/

/***************************INCLUDES************************************/
#include <stdio.h>

/***************************DEFINES*************************************/
#define MONTH_NAME 20
#define MONTH_ABR  4
/***************************STRUCTS*************************************/
struct month{
	char month_name[MONTH_NAME];
	char month_abr[MONTH_ABR];
	int  month_days;
	int  month_num;
};

struct month months[12] = {
	{"January", "JAN", 31, 1},
	{"FEBRUARY", "FEB", 28, 2},
	{"MARCH", "MAR", 30, 3},
	{"APRIL", "APR", 30, 4},
	{"MAI", "MAI", 30, 5},
	{"JUNE", "JUN", 30, 6},
	{"JULY", "JUL", 30, 7},
	{"AUGUST", "AUG", 30, 8},
	{"SEPTEMBER", "SEP", 30, 9},
	{"OCTOMBER", "OCT", 30, 10},
	{"NOVEMBER", "NOV", 30, 11},
	{"DECEMBER", "DEC", 30, 12}
};


/***************************MAIN****************************************/
int main()
{
	int input = 0;
	
	printf("Enter number: \n");
	while(scanf("%d", &input)){
		switch(input){
			case 1:
				printf("%s %s %d %d\n",//
				months[0].month_name, months[0].month_abr, months[0].month_days, months[0].month_num);
				break;
			case 2:
				printf("%s %s %d %d\n",//
				months[1].month_name, months[1].month_abr, months[1].month_days, months[1].month_num);
				break;
			case 3:
				printf("%s %s %d %d\n",//
				months[2].month_name, months[2].month_abr, months[2].month_days, months[2].month_num);
				break;
			case 4:
				printf("%s %s %d %d\n",//
				months[3].month_name, months[3].month_abr, months[3].month_days, months[3].month_num);
				break;
			case 5:
				printf("%s %s %d %d\n",//
				months[4].month_name, months[4].month_abr, months[4].month_days, months[4].month_num);
				break;
			case 6:
				printf("%s %s %d %d\n",//
				months[5].month_name, months[5].month_abr, months[5].month_days, months[5].month_num);
				break;
			case 7:
				printf("%s %s %d %d\n",//
				months[6].month_name, months[6].month_abr, months[6].month_days, months[6].month_num);
				break;
			case 8:
				printf("%s %s %d %d\n",//
				months[7].month_name, months[7].month_abr, months[7].month_days, months[7].month_num);
				break;
			case 9:
				printf("%s %s %d %d\n",//
				months[8].month_name, months[8].month_abr, months[8].month_days, months[8].month_num);
				break;
			case 10:
				printf("%s %s %d %d\n",//
				months[9].month_name, months[9].month_abr, months[9].month_days, months[9].month_num);
				break;
			case 11:
				printf("%s %s %d %d\n",//
				months[10].month_name, months[10].month_abr, months[10].month_days, months[10].month_num);
				break;
			case 12:
				printf("%s %s %d %d\n",//
				months[11].month_name, months[11].month_abr, months[11].month_days, months[11].month_num);
				break;
		}
		printf("Enter number: \n");
	}
	
	return 0;
}
