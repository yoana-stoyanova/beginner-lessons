#include <iostream>
using namespace std;
int main ()
{
    double n=10000;
    int sum=0;
    for(int i=1; i<=10; i++)
    {
     n=n+(n*0.06);
     if(i==1) cout<<"Fees for the 1st year after this one: "<<n<<endl;
     if(i==2) cout<<"Fees for the 2nd year after this one: "<<n<<endl;
     if(i==3) cout<<"Fees for the 3rd year after this one: "<<n<<endl;
     if(i>3) cout<<"Fees for the "<<i<<"th year after this one: "<<n<<endl;
    }

    for(int j=1; j<=4; j++)
    {
      n=n+(n*0.06);
      sum=sum+n;
    }
    cout<<"Fees for 4 years after the 10th year after this one: "<<sum;
    return 0;
}

