// * * * * 
//  *   * 
//   * * 
//    * 
//    * 
//   * * 
//  *   * 
// * * * * 


#include<stdio.h>
int main(){
    
    int n=4;
    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(j<=i) {
                if(i==j || j==1 || i==n) printf("* ");
                else printf("  ");
            }
            else printf(" ");
        }
        printf("\n");
    }
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j<=i) {
                if(i==j || j==1 || i==n) printf("* ");
                else printf("  ");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
