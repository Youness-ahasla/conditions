#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int numOne, numTwo, sum, triple;
	
	printf("Enter the first number: ");
	scanf("%d", &numOne);
	
	printf("Enter the second number: ");
	scanf("%d", &numTwo);
	
	sum = numOne + numTwo;
	triple =sum*3;
	
	if (numOne == numTwo){
		printf("%d", triple);
	}else {
		printf("%d", sum);
	}
	
	return 0;
}
