#include<stdio.h>

int main()
{
    int n, i1, i2, i3, i4;
    printf("Nhập 1 số có 4 chữ số: ");
    scanf("%d",&n);
    i1 = n/1000;
    i2 = (n%1000)/100;
    i3 = ((n%1000)%100)/10;
    i4 = (((n%1000)%100)%10);
    printf("%d%d%d%d",i4 ,i3 ,i2 ,i1);
}