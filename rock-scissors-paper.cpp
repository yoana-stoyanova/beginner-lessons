#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int comp = rand()%3;
    int hod;
    cout<<"scissors (0), rock (1), paper (2): "; cin>>hod;
    while(hod<0 || hod>2)
    {
       cout<<"\nYour number should be 0, 1 or 2\n\n";
       cout<<"scissors (0), rock (1), paper (2): "; cin>>hod;
    }

    if(comp==0)
    {
        if(hod==0) cout<<"The computer is scissors. You are scissors too. It is a draw\n";
        if(hod==1) cout<<"The computer is scissors. You are rock. You win\n";
        if(hod==2) cout<<"The computer is scissors. You are paper. You lose\n";
    }

    if(comp==1)
    {
        if(hod==0) cout<<"The computer is rock. You are scissors. You lose\n";
        if(hod==1) cout<<"The computer is rock. You are rock too. It's a draw\n";
        if(hod==2) cout<<"The computer is rock. You are paper. You win\n";
    }

    if(comp==2)
    {
        if(hod==0) cout<<"The computer is paper. You are scissors. You win\n";
        if(hod==1) cout<<"The computer is paper. You are rock. You lose\n";
        if(hod==2) cout<<"The computer is paper. You are paper too. It's a draw\n";
    }


    return 0;

}
