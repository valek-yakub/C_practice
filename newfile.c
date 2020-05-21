#include <stdio.h>


int main(){
	
	FILE *file_ptr;
	
	
	file_ptr = fopen("data.exe", "w");
	
	if(file_ptr != NULL){
		
		printf("File created!");
		fclose(file_ptr);
		return 0;
	}
	else {
		
		printf("Unable to create file\n"); return 1;
		
	}
}