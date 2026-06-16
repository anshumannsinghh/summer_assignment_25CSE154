#include<stdio.h>
int main() {
    int binary,decimal,base=1,rem;
    printf("enter binary number");
    scanf("%d",&binary);
    while(binary>0) {
        rem=binary%10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;
    }
    printf("decimal representation is:%d\n",decimal);
    return 0;
}