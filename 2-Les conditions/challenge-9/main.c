#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int day, month, year;
	
	printf("Give a date in dd/mm/yy format: ");
	scanf("%d/%d/%d", &day, &month, &year);
	
	
	switch(month){
		case 1:
			printf("%d-January-%d", day, year);
			break;
		case 2:
			printf("%d-Feburary-%d", day, year);
			break;
		case 3:
			printf("%d-March-%d", day, year);
			break;
		case 4:
			printf("%d-April-%d", day, year);
			break;
		case 5:
			printf("%d-May-%d", day, year);
			break;
		case 6:
			printf("%d-Jun-%d", day, year);
			break;
		case 7:
			printf("%d-July-%d", day, year);
			break;
		case 8:
			printf("%d-August-%d", day, year);
			break;
		case 9:
			printf("%d-September-%d", day, year);
			break;
		case 10:
			printf("%d-October-%d", day, year);
			break;
		case 11:
			printf("%d-November-%d", day, year);
			break;
		case 12:
			printf("%d-December-%d", day, year);
			break;
		default:{
			printf("Date is wrong!");
			break;
		}
	}
		
	
	
	return 0;
}
