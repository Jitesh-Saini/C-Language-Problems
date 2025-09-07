#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int pow;
    printf("Enter power : ");
        scanf("%d",&pow);
        int result=1;
    for(int i=1;i<=pow;i++){
        result*=n;
    }
    printf("\nResult is %d",result);
    return 0;
}
