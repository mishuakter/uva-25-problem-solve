#include<stdio.h>
int main()
{
    unsigned long long a,b;
    while(scanf("%llu %llu",&a,&b)==2)
    {  if(a==0&&b==0)
       break;
       int carry=0,count=0;
        while(a>0||b>0)
        {
           carry=((a%10)+(b%10)+carry)/10;
           a/=10;
           b/=10;
           count=count+carry;
        }
        if(count==0)
                printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations\n",count);

    }
 return 0;
}
