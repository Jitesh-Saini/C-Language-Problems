//       1 
//     2 1 
//   3 2 1 
// 4 3 2 1


#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int temp=1;
    for(int i=1;i<=n;i++){
        
        for(int k=n-i;k>=1;k--){
            printf("  ");
        }

        for(int j=1;j<=i;j++){
            printf("%d ",temp);
            temp++;
        }
        
        printf("\n");
    }
    
    return 0;
}
