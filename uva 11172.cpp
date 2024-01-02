#include<stdio.h>
int main()
{
    int t,a,b;
    char o;
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d %d",&a,&b);
        if(a>b) o = '>';
        else if(a<b) o = '<';
        else if(a==b) o = '=';
        printf("%c\n",o);
        t--;

    }
    return 0;
}
