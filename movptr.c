#include <stdio.h>


int main()
{
	
	int i, nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int* ptr = nums;
	
	printf("\nAt Address: %p is Value: %d\n", ptr, *ptr);
	ptr++;
	printf("\nAt Address: %p is Value: %d\n", ptr, *ptr);
	ptr++;
	printf("\nAt Address: %p is Value: %d\n", ptr, *ptr);
	ptr -= 2;
	printf("\nAt Address: %p is Value: %d\n\n", ptr, *ptr);
	
	for (i = 0; i < 10; i++)
	{
		printf("Element %d Contains Value: %d\n", i, *ptr);
		ptr++;
	}
	
	return 0;
	
}