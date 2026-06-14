#include<stdio.h>
int main() {
    int num,rev=0,dig;
    printf("enter number");
    scanf("%d",&num);
    int original = num;
    if (num<0) {
        num=-num;
    }
    while (num!=0) {
        dig=num%10;
        rev=rev*10+dig;
        num=num/10;
    }
    if (original<0) {
        rev=-rev;
    }
    printf("reverse of number=%d\n",rev);
    return 0;
}