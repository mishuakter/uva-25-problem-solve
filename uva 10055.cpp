#include<stdio.h>
int main()
{
    long long unsigned A,B,C;
    while(scanf("%llu %llu",&A,&B)==2)
    {
        if(B>A) C=B-A;
        else C=A-B;
        printf("%llu\n",C);
    }

}
