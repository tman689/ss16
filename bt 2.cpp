#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int x = 5;
	int y = 9;
	printf("Truoc khi hoán doi:\n");
	printf("x = %d, y = %d\n", x, y);
	
	swap(&x, &y);
	printf("\nSau khi hoan doi:\n");
	printf("x = %d, y = %d\n", x, y);
	
	return 0;
}

