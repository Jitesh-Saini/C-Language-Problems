// 19 
// 17 15 
// 13 11  9 
//  7  5  3  1 

#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int temp=n*(n+1)-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%2d ",temp);
            temp-=2;
        }
        printf("\n");
    }
    
    return 0;
}
