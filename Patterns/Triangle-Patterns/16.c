// 1 2 3 4 
//   5 6 7 
//     8 9 
//       10 
#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int temp=1;
    for(int i=1;i<=n;i++){
        
        for(int k=1;k<i;k++){
            printf("  ");
        }
        for(int j=n;j>=i;j--){
            printf("%d ",temp);
            temp++;
        }
        printf("\n");
        
        
    }
    
    return 0;
}
