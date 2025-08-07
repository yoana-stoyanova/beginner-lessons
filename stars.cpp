#include <iostream>
using namespace std;
int main ()
{
    int lines;
    cout<<"Enter the number of lines: "; cin>>lines;
    while(lines<5||lines>15){cout<<"Enter the number of lines: "; cin>>lines;}

    int spaces=0;
    int stars=lines;

    for(int i=1; i<=lines; i++)
    {
       for(int j=1; j<=spaces; j++){cout<<"  ";}
       for(int f=1; f<=stars; f++) {cout<<" *";}
       cout<<endl;
       spaces++;
       stars--;
    }

    return 0;
}
