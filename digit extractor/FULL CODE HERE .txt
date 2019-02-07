
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
int main() {
    long n;
    vector<int> digitsvec;
    int done=0;
    int goout=0;
    scanf("%ld", &n);
    while(done!=1){
            goout=0;
        for(int i=0; ((i<9)&&(goout!=1)); ++i)
        {
            long newno = n-i;
            if(n%10==0)
            {
                digitsvec.push_back(i);
                n =(n)/10;
                goout=1;
                break;
            }
            else{
            if(newno%10==0)
                {digitsvec.push_back(i);
                n =(n-i)/10;
                goout=1;
                break;
                }}
        }
        if(n==0)
            done=1;
    }
    for(int i=0; i<digitsvec.size(); ++i)
        cout<<digitsvec[i]<<endl;
    return 0;
}

