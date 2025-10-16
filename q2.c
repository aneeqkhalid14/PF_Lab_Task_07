#include <stdio.h>

int main(){
	int array[10] ={};
	int num, i, search, count = 0, found = 0;
	for(i=0; i<10; i++){
		printf("Enter a number: ");
		scanf("%d", &num);
		array[i] = num;
	}
	printf("\nEnter a number you want to search in the array: ");
	scanf("%d", &search);
	for(i = 0; i < 10; i++){
		if(array[i] == search){
			found = 1;
			count = count + 1;
		}
	}
	if(found == 1){
		printf("\nThe number appeared in the array %d times.", count);
	}
	else{
		printf("\nNumber not found");
	}
}
