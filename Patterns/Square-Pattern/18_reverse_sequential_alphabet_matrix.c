// P O N M 
// L K J I 
// H G F E 
// D C B A 
#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int temp=n*n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",64+temp);
            temp--;
        }
        printf("\n");
    }
    
    return 0;
}

