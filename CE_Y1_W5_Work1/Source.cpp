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
			if ((*p >= 'A' && *p <= 'Z')) {
				printf("%c", *p + 32);
			}
			else if ((*p >= 'a' && *p <= 'z')) {
				printf("%c", *p - 32);
			}
			
		}
		p = p + 1;
	}
}