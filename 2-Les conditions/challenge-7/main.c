#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char letter;
	
	printf("Enter a character: ");
	scanf("%c", &letter);
	
	float deci = (float)letter;
		
	if (deci >= 65 && deci <= 90){
		printf("%.2f is in uppercase.", deci);
	}else {
		printf("%.2f is in lower case.", deci);
	}
	
	return 0;

}
