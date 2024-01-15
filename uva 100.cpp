#include<stdio.h>
int main()
{
    int a,b,i,j,temp,length,maxLength;
    while(scanf("%d %d",&a,&b)==2 && a>0 && b>0)
    {
        maxLength=0;
        printf("%d %d",a,b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(i=a;i<=b;i++)
        {
            length=1;
            for(j=i;j!=1;)
            {
                if(j%2==0)
                j=j/2;
                else
                    j=3*j+1;
                length++;
            }
            if(length>=maxLength)
                maxLength=length;
        }
        printf("%d\n",maxLength);
    }
    return 0;
}
