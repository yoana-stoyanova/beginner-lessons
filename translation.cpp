#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    string s, t;
    cin>>s>>t;
    int si=s.size();
    bool da=1;
    for(int i=0; i<si; i++)
    {
        if(s[i]!=t[si-i-1])
        {
            da=0;
            break;
        }
    }
    if(da==0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    return 0;
}


