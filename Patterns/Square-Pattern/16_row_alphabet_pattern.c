// A A A A 
// B B B B 
// C C C C 
// D D D D
#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",64+i);
        }
        printf("\n");
    }
    
    return 0;
}

