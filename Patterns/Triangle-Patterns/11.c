//       4 
//     3 3 
//   2 2 2 
// 1 1 1 1


#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        
        for(int k=n-i;k>=1;k--){
            printf("  ");
        }

        // for(int j=i;j>=1;j--){
        //     printf("%d ",n-i+1);
        // }
        
        int temp=n-i+1;
        for(int j=1;j<=i;j++){
            printf("%d ",temp);
        }
        
        printf("\n");
    }
    
    return 0;
}
