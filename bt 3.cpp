#include<stdio.h>

void tinhtong(int *a, int *b, int *result){
	*result = *a + *b;
}
int main(){
	int x = 5;
	int y = 9;
	int result;
	
	tinhtong(&x, &y, &result);
	printf("Tong %d và %d la: %d", x, y, result);
	
	return 0;
}
	
	
	
