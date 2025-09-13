//     1 
//    2 2 
//   3 3 3 
//  4 4 4 4 
// 5 5 5 5 5 

#include<stdio.h>
int main(){
    
    int n=5;
    for(int i=1 ; i<=n ; i++){
        for(int j=n; j>=1; j--){
            if(j<=i) printf("%d ",i);  //2 value one is i and one is space
            else printf(" ");           // only one space of looking like a trianguler
        }
        printf("\n");
    }
    
    return 0;
}
