#include<stdio.h>
unsigned long long reverseNumber(unsigned long long num)
{
    unsigned long long reversed=0;
    while(num>0)
    {
        reversed=reversed*10+num%10;
        num/=10;
    }
    return reversed;
}
int isPalindrome(unsigned long long num)
{
    return num==reverseNumber(num);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long num;
        scanf("%llu",&num);
        int steps=0;
        while(!isPalindrome(num))
        {
            num+=reverseNumber(num);
            steps++;
        }
        printf("%d %llu\n",steps,num);
    }
    return 0;
}
