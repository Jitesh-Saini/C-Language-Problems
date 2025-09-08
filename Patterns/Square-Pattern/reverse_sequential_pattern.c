#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int temp=n*n;
    for(int i=1;i<=n;i++){
        for(int j=2;j<=n*2;j+=2){
            printf("%d ",temp);
            temp--;
        }
        printf("\n");
    }
    
    return 0;
}
