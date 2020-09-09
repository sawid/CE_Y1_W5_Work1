#include <stdio.h>

int main() {
	char str[100];
	int i = 0;
	scanf_s("%[^\n]", str, 99);
	while (str[i] != '\0')
	{
		if ( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') )
		{
			printf("%c", str[i]);
		}
		i = i + 1;
	}
}