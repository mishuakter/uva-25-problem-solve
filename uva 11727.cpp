#include<stdio.h>
int main()
{
    int T,i,a,b,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a>b)&&(a<c)||(a<b)&&(a>c))
        printf("Case %d: %d\n",i,a);
        else if((b>a)&&(b<c)||(b<a)&&(b>c))
            printf("Case %d: %d\n",i,b);
        else if((c>a)&&(c<b)||(c>b)&&(c<a))
            printf("Case %d: %d\n",i,c);
    }
    return 0;

}
