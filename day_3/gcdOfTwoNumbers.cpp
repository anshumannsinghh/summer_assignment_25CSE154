#include <stdio.h>
int main() {
    inta,b,i;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    while (b!=0) {
    i=b;
    b=a%b;
    a=i;
    }
    printf("gcd of two numbers=%d\n",a);
    return 0;
}