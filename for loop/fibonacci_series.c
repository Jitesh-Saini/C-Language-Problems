#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c=0;
    printf("fibonacci series : %d %d",a,b);
    
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf(" %d",c);
    }
    
    
    return 0;
}
