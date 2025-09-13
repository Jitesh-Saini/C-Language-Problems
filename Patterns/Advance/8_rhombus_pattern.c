// * * * * * 
//  * * * * * 
//   * * * * * 
//    * * * * * 
//     * * * * * 

#include<stdio.h>
int main(){
    
    int n=5;
    for(int i=1 ; i<=n; i++){
        for(int j=2; j<=n; j++){
            if(j<=i) {
                printf(" ");
            }
            // else printf("  ");
        }
        
        for(int j=1; j<=n-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
