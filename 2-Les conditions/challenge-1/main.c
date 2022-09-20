#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("%d is even!", num);
	}else{
		printf("%d is odd!", num);
	}
	
	return 0;
}
