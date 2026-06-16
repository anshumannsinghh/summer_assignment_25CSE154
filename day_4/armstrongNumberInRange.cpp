#include<stdio.h>
int main() {
int start,end,num,original,digit,sum;
printf("enter start and end range");
scanf("%d %d",&start,&end);
for(num=start;num<=end;num++) {
    original=num;
    sum=0;
    while (original!=0) {
        digit=original%10;
        sum=sum+(digit*digit*digit);
        original=original/10;
    }
    if (sum==num) {
        printf("%d is an armstrong number\n",num);
    }
