#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int day;
	
	srand(time(0));
	
	day = rand()%6;
	
	switch(day){
		case 0 : printf("Monday");
			break;
		case 1 : printf("Tuesday");
			break;
 		case 2 : printf("Wedensday");
 			break;
		case 3 : printf("Thursday");
			break;
		case 4 : printf("Friday");
			break;
		case 5 : printf("Saturday");
			break;
		case 6 : printf("Sunday");

	}	
	
	return 0;
}
