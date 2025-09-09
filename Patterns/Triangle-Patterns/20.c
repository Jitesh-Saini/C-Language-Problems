// 4 3 2 1 
//   3 2 1 
//     2 1 
//       1 
#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int temp=(n*(n+1))/2;
    for(int i=1;i<=n;i++){
        
        for(int k=1;k<i;k++){
            printf("   ");
        }
        for(int j=n;j>=i;j--){
            printf("%2d ",temp);
            temp--;
        }
        printf("\n");
        
        
    }
    
    return 0;
}
