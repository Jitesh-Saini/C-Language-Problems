
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int temp=1;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%3d ",temp);
            temp+=2;
        }
        printf("\n");
    }
    
    return 0;
}
