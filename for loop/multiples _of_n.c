#include<stdio.h>
int main() {
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	
	if(n<=0){
	    printf("invalid number....");
	    return 1;
	}
	
	printf("Multipliers of n are : ");
	
	for(int i=n; i<=500; i+=n) {
		printf("%d ",i);
	}

	return 0;
}
