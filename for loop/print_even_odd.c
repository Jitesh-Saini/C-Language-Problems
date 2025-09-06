#include<stdio.h>
int main() {
	int n;
	printf("Enter starting : ");
	scanf("%d",&n);
	
	int m;
	printf("Enter ending : ");
	scanf("%d",&m);
	
	printf("Even : ");
	
	for(int i=n; i<=m; i++) {
		if(i%2==0) printf("%d ",i);
	}

    printf("\nOdd");
    for(int i=n; i<=m; i++) {
		if(i%2!=0) printf("%d ",i);
	}

	return 0;
}
