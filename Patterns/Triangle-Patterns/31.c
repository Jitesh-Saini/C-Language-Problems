
//           2 
//       4  6 
//     8 10 12 
// 14 16 18 20 

#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int temp=2;
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
