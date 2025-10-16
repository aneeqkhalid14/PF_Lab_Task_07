#include <stdio.h>

int main(){
	int array[5]= {};
	int i, num, val, temp, temp2;
	for(i = 0; i<5; i++){
		printf("enter a number: ");
		scanf("%d", &num);
		array[i] = num;
	}
	printf("Before Shifting \n");
	for(i = 0; i<5; i++){
		val = array[i];
		printf("%d\n", val);
	}
	temp = array[4];
	for(i = 0; i<5; i++){
		temp2 = array[i];
		array[i] = temp;
		temp = temp2;
	}
	printf("After Shifting \n");
	for(i = 0; i<5; i++){
		val = array[i];
		printf("%d\n", val);
	}
}
