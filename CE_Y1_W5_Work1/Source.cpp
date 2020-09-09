#include <stdio.h>

int main() {
	char str[100];
	char* p;
	p = str;
	scanf_s("%[^\n]", str, 99);
	while (*p != '\0')
	{
		if ( (*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z') )
		{
			printf("%c", *p);
		}
		p = p + 1;
	}
}