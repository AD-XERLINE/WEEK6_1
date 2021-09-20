#include <stdio.h>

int main() {
	int n;
	int i=1;
	
	printf("Enter number : ");
	scanf("%d", &n);
	
	while(i<=n){
		printf("*");
	    i++;
	}
	printf("\n");
	
	return 0;
}
