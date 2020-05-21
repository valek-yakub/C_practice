#include <stdio.h>


int main()
{

	char str[51];
	
	printf("\nEnter up to 50 characters with sppaces: \n");
	gets(str);
	
	printf("fgets() read: ");
	puts(str);
	
	printf("\nEnter up to 50 characters with sppaces: \n");
	scanf("%s", str);
	printf("scanf() read: %s\n", str);
	
	return 0;
	
}