
//           1 
//       3  5 
//     7  9 11 
// 13 15 17 19 


#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int temp=1;
    for(int i=1;i<=n;i++){
        
        for(int k=n-i;k>=1;k--){
            printf("   ");
        }

        for(int j=1;j<=i;j++){
            printf("%2d ",temp);
            temp+=2;
        }
        
        printf("\n");
    }
    
    return 0;
}
