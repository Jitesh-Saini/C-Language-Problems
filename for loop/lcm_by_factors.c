#include<stdio.h>
int main() {

	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	int m;
	printf("Enter m : ");
	scanf("%d",&m);
	int lcm=1;
	for(int i=2; n>1||m>1;) {
		if(n%i==0 || m%i==0) {
			printf("%d ",i);
			if(n%i==0) n=n/i;
			if(m%i==0) m=m/i;
			lcm*=i;
		}
		else i++;
	}

    printf("\nlcm is : %d",lcm);


	return 0;
}
