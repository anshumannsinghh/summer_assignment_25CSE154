#include<stdio.h>
int main() {
    int n,a=0,b=1,c,i;
    printf("enter n");
    scanf("%d",&n);
    if (n==0) {
        printf("0th term ");
    } else if (n==1) {
        printf("1st term ");
    } else {
        for(i=2;i<=n;i++) {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%dth term ",n);
    }return 0;
    }