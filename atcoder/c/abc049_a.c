// UOIAUAI


#include <stdio.h>

int main() {
	char c;
	c = getchar();
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
		printf("vowel\n");
	} else {
		printf("consonant\n");
	}
	return 0;
}