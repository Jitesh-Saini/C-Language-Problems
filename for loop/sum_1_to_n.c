#include<stdio.h>
int main() {
	int n;
	printf("Enter starting : ");
	scanf("%d",&n);
	int sum=0;
	for(int i=1; i<=n; i++) {
		sum+=i;
	}
    
    printf("Sum of 1 to your number is : %d",sum);
	return 0;
}
