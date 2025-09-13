// 1     
// 0 1    
// 1 0 1   
// 0 1 0 1  
// 1 0 1 0 1 

#include<stdio.h>
int main(){
    
    int n=5;
    for(int i=1 ; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i) {
                if((i+j)%2==0) printf("1 ");
                else printf("0 ");
            }
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
