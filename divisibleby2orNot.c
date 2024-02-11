#include<stdio.h>
int main(){
    int x;
    //even -> 1
    //odd -> 0
    printf("enter a number :");
    scanf("%d",&x);
    printf("%d",x % 2==0);
    return 0;
}