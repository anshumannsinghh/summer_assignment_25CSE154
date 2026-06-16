#include<stdio.h>
int main() {
    int n,original,digit,sum=o;
    printf("enter number");
    scanf("%d",&n);
    original=n;
    while(n>0) {
        digit=n%10;
        int fact=1;
        for(int i=1;i<=digit;i++) {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    sum+=fact;
    n/=10;
}
    if(sum==original) {
        printf("number is strong\n");
    } else {
        printf("number is not strong\n");
    }
    return 0;
}