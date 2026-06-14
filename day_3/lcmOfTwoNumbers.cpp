#include <stdio.h>
int main() {
    int a,b,x,y,gcd,lcm,i;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while (y!=0) {
    i=y;
    y=x%y;
    x=i;
    }
    gcd=x;
    lcm=(a*b)/gcd;
    printf("lcm of two numbers=%d\n",lcm);
    return 0;
}