#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    int rem=0,count=0,temp=0;
    while(n>0){
        rem=n%10;
        n=n/10;
        count++;
        int digit=count;
        while(rem-1>0){
            digit*=10;
            rem--;
        }
        
        temp+=digit;
    }
    
    printf("Inverse is : %d",temp);
    
    return 0;
}
