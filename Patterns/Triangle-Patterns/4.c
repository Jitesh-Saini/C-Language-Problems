// 4 3 2 1 
//   3 2 1 
//     2 1 
//       1 
#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        
        for(int k=1;k<i;k++){
            printf("  ");
        }
        
        // for(int j=n+1-i;j>=1;j--){
        //     printf("%d ",j);
        // }
        
        int temp=n+1-i;
        for(int j=n;j>=i;j--){
            printf("%d ",temp);
            temp--;
        }
        printf("\n");
        
        
    }
    
    return 0;
}
