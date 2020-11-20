#include<stdio.h>
int main()
{
 int a,b,i=0,sum;
 scanf("%d",&a);
 scanf("%d",&b);
 m:
 if(b<=a)
 {
    scanf("%d",&b);
    goto m;
 }
    sum=a+i;
    while(sum<b)
    {
        i++;
        sum=sum+a+i;
    }
    i++;

  printf("%d\n",i);
  return 0;
  }
