#include<stdio.h>
int main() {
	int n;
	printf("Enter starting : ");
	scanf("%d",&n);
	
	int m;
	printf("Enter ending : ");
	scanf("%d",&m);
	
	printf("Even sum : ");
	int e_sum=0;
	for(int i=n; i<=m; i++) {
		if(i%2==0) e_sum+=i;
	}
    printf("%d",e_sum);

    printf("\nOdd sum :");
    int o_sum=0;
    for(int i=n; i<=m; i++) {
		if(i%2!=0) o_sum+=i;
	}
	printf("%d",o_sum);

	return 0;
}
