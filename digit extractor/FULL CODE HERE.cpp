#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int n=a;
    int cnt=0;
    while(n!=0)
    {
        n=n/10;
        ++cnt;
    }
    n=a;
    int digit[cnt];
    int i=0;
    while(i<cnt)
    {
        digit[i]=n%10;
        n=n-digit[i];
        n=n/10;
        ++i;
    }
    double cal=0;
    for(int lp=0; lp<cnt; ++lp)
    {
        printf("%d\n",digit[lp]);
        cal=cal+pow(digit[lp],cnt);
    }
    /*
    if(cal==a)
        printf("Armstrong number is there \n\n");
    else
        printf("Not an armstrong number is there.\n\n");
*/
}
