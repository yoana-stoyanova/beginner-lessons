#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    int n; cin>>n;
    int br=0;
    while(n!=0)
    {
        br=br+n/100;
        n=n%100;
        br=br+n/20;
        n=n%20;
        br=br+n/10;
        n=n%10;
        br=br+n/5;
        n=n%5;
        br=br+n/1;
        n=n%1;
    }

    cout<<br;
    return 0;
}

