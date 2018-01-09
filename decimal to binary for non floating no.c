#include <stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int  num, decimal_val = 0, base = 1,a,rem,i,len,flag=0;
    char ch[10]="15";
    len=strlen(ch);
	for(i=0;i<len;i++)
     {
    if(ch[i]=='.')
    {
    	flag++;
    }
}
	if(flag==0)
{
    a = atoi(ch);
    while (a > 0)
    {
        rem = a % 2;
        decimal_val = decimal_val + rem * base;
        a = a / 2;
        base = base * 10;
    }

    printf(" %d \n", decimal_val);
}
else
{
printf("error");
}
   return 0;
}
