//By Jaden Steffy and Bilal Hodzic
#include <stdio.h>
#include <string.h>

int main() {
	char str[50];
	
	printf("Enter password: ");
	scanf("%s", &str);
	
	for(int i = 0; i <= strlen(str);i++) {
		if (str[i] == 'i') {
			str[i] = '1';
		} else if (str[i] == 'a') {
			str[i] = '@';
		} else if (str[i] == 'm') {
			str[i] = 'M';
		} else if (str[i] == 'B') {
			str[i] = '8';
		} else if (str[i] == 's') {
			str[i] = '$';
		}
	}
	printf("%s!", str);
	
	return 0;
	
}