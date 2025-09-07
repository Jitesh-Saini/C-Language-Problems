#include<stdio.h>
int main() {
    
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
    
    int root;
    
    for(int i=1;i*i<=n;i++){
        root=i;
    }
    
    printf("Square root is : %d",root);


	return 0;
}
