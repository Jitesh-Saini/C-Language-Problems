#include<stdio.h>
int main() {
	int n;
	printf("Enter starting : ");
	scanf("%d",&n);
	int sum=0;
	int digit=0;
	for(; n>0; n/=10) {
		int rem=n%10;
		sum+=rem;
		digit++;
	}
    printf("Average is : %d",sum/digit);
	return 0;
}
