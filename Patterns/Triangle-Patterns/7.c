//       1 
//     2 2 
//   3 3 3 
// 4 4 4 4 


#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
    int temp=i;
        
        for(int k=n-i;k>=1;k--){
            printf("  ");
        }

        // for(int j=i;j>=1;j--){
        //     printf("%d ",i);
        // }
        
        
        for(int j=1;j<=i;j++){
            printf("%d ",temp);
        }
           
        
        printf("\n");
    }
    
    return 0;
}
