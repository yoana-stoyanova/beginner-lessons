#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    string a; cin>>a;
    int b;
    int s=a.size();
    int bru=0, brl=0;
    for(int i=0; i<s; i++)
    {
        if(a[i]>='A'&&a[i]<='Z')bru++;
        else brl++;
    }
    if(brl>=bru)
    {
        for(int i=0; i<s; i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                a[i]=a[i]+('a'-'A');
            }
        }
    }
    else
    {
        for(int i=0; i<s; i++)
        {
            if(a[i]>='a'&&a[i]<='z')
            {
                a[i]=a[i]-('a'-'A');
            }
        }
    }
    cout<<a;
    return 0;
}
