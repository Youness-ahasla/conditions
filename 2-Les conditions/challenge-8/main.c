#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float mark;
	
	printf("Enter your mark: ");
	scanf("%f", &mark);
	
	if (mark < 10){
		printf("recale");
	}else if (mark >= 10 && mark < 12){
		printf("passable");
	}else if (mark >= 12 && mark < 14){
		printf("mention");
	}else if ( mark >= 14  && mark < 16){
		printf("mention bien");
	}else if (mark > 16 && mark <= 20) {
		printf("tres bien");
	}else {
		printf("This beyond 20.");
	}
	return 0;
}
