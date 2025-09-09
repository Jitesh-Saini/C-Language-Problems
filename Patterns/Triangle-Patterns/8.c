// 1 1 1 1 
//   2 2 2 
//     3 3 
//       4 
#include<stdio.h>
int main() {

	int n;
	printf("Enter a number : ");
	scanf("%d",&n);

	for(int i=1; i<=n; i++) {

		for(int k=1; k<i; k++) {
			printf("  ");
		}

		// for(int j=n+1-i;j>=1;j--){
		//     printf("%d ",i);
		// }

		int temp=i;
		for(int j=n+1-i; j>=1; j--) {
			printf("%d ",temp);
		}
		printf("\n");


	}

	return 0;
}
