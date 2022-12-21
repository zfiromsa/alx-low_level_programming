#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int main(void)
{	
	srand((time(NULL) * getpid()));
 
    char *numbers = "0123456789";
    int numbers_length = strlen(numbers);
	char *letter = "abcdefghijklmnoqprstuvwyzx";
    int letter_length = strlen(letter);
	char *LETTER = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    int Letter_length = strlen(LETTER);
	char *symbols = "!@#$^&*?";
    char symbols_length = strlen(symbols);
	char password[5];  

	
	for (int i = 0; i < 5; i++) {

        int char_type = rand() % 4;
		if (char_type == 1) {
			password[i] = numbers[rand() % numbers_length];
		}
		else if (char_type== 2) {
			password[i] = symbols[rand() % letter_length];
		}
		else if (char_type == 3) {
			password[i] = LETTER[rand() % Letter_length];
		}
		else {
			password[i] = letter[rand() % symbols_length];
		}
	}
    password[5] = '\0';
    printf("%s",password);
    return (0);
}