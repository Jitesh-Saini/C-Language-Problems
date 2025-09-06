#include<stdio.h>
int main() {
	int n;
	printf("Enter starting : ");
	scanf("%d",&n);
	int sum=0;
	for(; n>0; n/=10) {
		int rem=n%10;
		sum+=rem;
		
	}
    printf("%d",sum);
	return 0;
}
