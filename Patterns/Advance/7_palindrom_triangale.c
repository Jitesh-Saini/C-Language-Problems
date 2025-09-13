//         1         
//       2 1 2       
//     3 2 1 2 3     
//   4 3 2 1 2 3 4   
// 5 4 3 2 1 2 3 4 5 
#include<stdio.h>
int main(){
    
    int n=5;
    for(int i=1 ; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j<=i) {
                printf("%d ",j);
            }
            else printf("  ");
        }
        for(int j=2; j<=n; j++){
            if(j<=i) {
                printf("%d ",j);
            }
            else printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}
