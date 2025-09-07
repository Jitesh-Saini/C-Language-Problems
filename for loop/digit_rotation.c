#include<stdio.h>
int main() {
    
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	int k;
	printf("Enter rotation : ");
	scanf("%d",&k);
    
    int digit=0;
    int temp=n;
    for(;temp>0;){
        digit++;
        temp=temp/10;
    }
    
    k%=digit;
    if(k<0) k+=digit;
    
    int power=1;
    for(;digit-1>0;){
        power*=10;
        digit--;
    }
    
    int rem;
    for(;k>0;k--){
        rem=n%10;
        n=(rem*power)+n/10;
    }

    printf("Answer is : %d",n);

	return 0;
}
