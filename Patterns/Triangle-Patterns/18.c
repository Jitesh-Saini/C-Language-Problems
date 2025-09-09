

// 15 14 13 12 11 
// 10 9 8 7 
// 6 5 4 
// 3 2 
// 1 

#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int temp=(n*(n+1))/2;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",temp);
            temp--;
        }
        printf("\n");
    }
    
    return 0;
}
