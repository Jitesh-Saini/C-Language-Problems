#include<stdio.h>
int main() {
    
    // Euclidean Algorithm
    
    
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	int m;
	printf("Enter m : ");
	scanf("%d",&m);
	
	int rem=0;
	for(;;){
	    if(n>m){
	        rem=n%m;
	        if(rem==0){
	            printf("%d",m);
	            break;
	        }
	        int temp=m;
	        m=rem;
	        n=temp;
	    }
	    else{
	        rem=m%n;
	        if(rem==0){
	            printf("%d",n);
	            break;
	        }
	        int temp=n;
	        n=rem;
	        m=temp;
	    }
	    
	}
	return 0;
}
