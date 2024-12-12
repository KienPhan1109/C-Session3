#include <stdio.h>

int main()
{
    int n;
    printf("Nhập 1 số có 4 chữ số: ");
    scanf("%d",&n);
    int sum = n / 1000 + ( n % 1000 ) / 100 + (( n % 1000 ) % 100 ) / 10 + ((( n % 1000 ) % 100 ) % 10);
    printf("%d ",sum);
}