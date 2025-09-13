// 1 2 3 4 
//  2 3 4 
//   3 4 
//    4 


#include<stdio.h>
int main(){
    
    int n=4;
    for(int i=n ; i>=1; i--){
        int temp=n+1-i;
        for(int j=n; j>=1; j--){
            if(j<=i) {
                printf("%d ",temp);
                temp++;
            }
            else printf(" ");
        }
        
        printf("\n");
    }
    return 0;
}
