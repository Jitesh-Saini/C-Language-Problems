// * * * * * * * 
//   *       *   
//     *   *     
//       *  

#include<stdio.h>
int main(){
    
    int n=4;
    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(j<=i) {
                if(i==j || i==4) printf("* ");
                else printf("  ");
            }
            else printf("  ");
        }
        for(int j=2; j<=n; j++){
            if(j<=i) {
                if(i==j || i==4) printf("* ");
                else printf("  ");
            }
            else printf("  ");
        }
        
        printf("\n");
    }
    return 0;
}
