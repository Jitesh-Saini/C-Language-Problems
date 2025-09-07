#include<stdio.h>
int main(){
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int count=0;
    int p=0;
    for(int i=2;i*i<=n;i++){
        p++;
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count!=0) printf("Not prime");
    else printf("Prime");
    printf("\n%d",p);
    
    
    return 0;
}
