#include<stdio.h>
int main() {
    int original,n,reverse=0,dig;
    printf("enter number");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        dig=n%10;
        reverse=reverse*10+dig;
        n=n/10;
    }
    if (original==reverse) 
        printf("number is pallindrome\n");
    else {
        printf("number is not pallindrome\n");
    }
    return 0;
}