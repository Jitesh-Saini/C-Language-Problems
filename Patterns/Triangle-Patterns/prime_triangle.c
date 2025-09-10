#include<stdio.h>
int main() {
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);

	int temp=2;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i;) {
			int count=0;
			for(int k=2; k*k<=temp; k++) {
				if(temp%k==0) {
					count++;
					break;
				}
			}
			
			if(count==0) {
				printf(" %-2d",temp);
				j++;
			}
			temp++;
		}
		printf("\n");
	}
	return 0;
}
