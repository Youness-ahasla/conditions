#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int hour1, minute1, second1, hour2, minute2, second2;
	
	printf("Enter the first hour: ");
	scanf("%d-%d-%d", &hour1, &minute1, &second1);
	printf("Enter the second hour: ");
	scanf("%d-%d-%d", &hour2, &minute2, &second2");
	
	if (hour1 > hour2){
		printf("%d-%d-%d", hour1, minute1, second1);
	}else{
		printf("%d-%d-%d", hour2, minute2, second2);
	}

//	if (minute1 > minute2 && hour1 == hour2){
//		printf("%d-%d-%d", hour1, minute1, second1);
//	}else{
//		printf("%d-%d-%d", hour2, minute2, second2);
//	}
//	
//	if (second1 > second2 && hour1 == hour2 && minute1 == minute2){
//		printf("%d-%d-%d", hour1, minute1, second1);
//	}else{
//		printf("%d-%d-%d", hour2, minute2, second2);
//	}

	return 0;
}
