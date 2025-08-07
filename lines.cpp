#include <iostream>
using namespace std;
int main ()
{
    int lines;
    cout<<"Enter the number of lines: "; cin>>lines;
    int decrease=lines, increase=lines, num=lines;

    for(int i=1; i<=lines; i++)
    {
        for(int decrease=num; decrease>=1; decrease--){cout<<decrease<<" ";}
        for(int increase=2; increase<=num; increase++){cout<<increase<<" ";}
        cout<<endl; num--;

    }
    return 0;
}
