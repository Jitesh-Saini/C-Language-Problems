#include<stdio.h>
int main() {
    //Factors of 60 {1,2,3,4,5,6,10,12,15,20,30,60}
    
    //Prime factors {2, 3, 5}

	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(int i=2; i<=n;) {
		if(n%i==0) {
			printf("%d ",i);
			n=n/i;
		}
		else i++;
	}




	return 0;
}
