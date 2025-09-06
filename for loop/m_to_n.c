#include<stdio.h>
int main() {
	int n;
	printf("Enter starting : ");
	scanf("%d",&n);
	int m;
	printf("Enter ending : ");
	scanf("%d",&m);
	for(int i=n; i<=m; i++) {
		printf("%d ",i);
	}

	return 0;
}
