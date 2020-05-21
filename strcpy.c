#include <stdio.h>
#include <string.h>


int main()
{

	char s1[] = "Larger text string", s2[] = "Smaller string";

	printf("\n%s: %d elements", s1, sizeof(s1));
	printf(", %d characters\n", strlen(s1));
	
	strcpy(s1, s2);

	printf("\n%s: %d elements", s1, sizeof(s1));
	printf(", %d characters\n", strlen(s1));
	
	strncpy(s1, s2, 5); s1[5] = '\0';
	
	printf("\n%s: %d elements", s1, sizeof(s1));
	printf(", %d characters\n", strlen(s1));
	
	for (int i=0; i < sizeof(s1); i++)
	{
		printf("%c ", s1[i]);
	}
	printf("\n");
	
	return 0;
	
}