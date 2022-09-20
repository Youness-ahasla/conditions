#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char letter;
	
	printf("Enter a letter: ");
	scanf("%c", &letter);
	
	switch(letter){
		case 'a':
			printf("%c is a vowel!", letter);
			break;
		case 'e':
			printf("%c is a vowel!", letter);
			break;
		case 'i':
			printf("%c is a vowel!", letter);
			break;
		case 'o':
			printf("%c is a vowel!", letter);
			break;
		case 'u':
			printf("%c is a vowel!", letter);
			break;
		default:
			printf("%c is a consonant!", letter);
	}

	return 0;
}
