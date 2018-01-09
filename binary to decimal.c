#include <stdio.h>
#include<string.h>
int main()
{
    int  num=15, decimal_val = 0, base = 1, rem;
    char ch=ch+num;
    while (ch > 0)
    {
        rem = ch % 2;
        decimal_val = decimal_val + rem * base;
        ch = ch / 2;
        base = base * 10;
    }
    printf(" %ld \n", decimal_val);
   return 0;
}
