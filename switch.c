#include <stdio.h>


int main(){
	
	int num = 2; char letter = 'e';
	
	switch(num)
	{
		case 1: printf("Number is one\n"); break;
		case 2: printf("Number is two\n"); break;
		case 3: printf("Number is three\n"); break;
		default: printf("Number is unrecognuzed\n");
	}
	
	switch(letter)
	{
		case 'a': case 'b': case 'c':
		printf("Letter is %c\n", letter); break;
		default: printf("Letter is unrecognized\n");
	}
			
	return 0;
	
}
	
