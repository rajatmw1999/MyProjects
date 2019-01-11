#include <iostream>
#include <ctime>
#include <string.h>
#include <stdio.h>
using namespace std;

void typewriter(double c, char *a)
{
int len=strlen(a);
    double time = clock();
    for(int j=0; j<len; )
    {
        if(clock()>time+c)
            {
                cout<<a[j];
                ++j;
                time = clock();
            }
    }
}

int main()
{
    char a[100];
    gets(a);
    typewriter(100,a);
    return 0;
}
