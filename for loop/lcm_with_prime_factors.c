#include<stdio.h>
int main() {
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	int m;
	printf("Enter m : ");
	scanf("%d",&m);
	
	int lcm=1;
	int a=n,b=m;
	
	printf("Prime factors : ");
	
	for(int i=2; m>1||n>1;) {
		if(n%i==0||m%i==0) {
			printf("%d ",i);
			lcm*=i;
			if(n%i==0) n=n/i;
			if(m%i==0) m=m/i;
		}
		else i++;
	}
	
	printf("\nLCM is : %d",lcm);

	return 0;
}
