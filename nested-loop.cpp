#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    int t; cin>>t;
    string s;
    for(int i=1; i<=t; i++)
    {
        cin>>s;
        int si=s.size();
        for(int j=0; j<si; j++)
        {
            if(s[j]>='a'&&s[j]<='z'){s[j]=s[j]-('a'-'A');}
        }
        if(s=="YES"){cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
    }


    return 0;
}
