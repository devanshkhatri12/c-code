#include<iostream>
using namespace std;


bool Isprime(int n)
{
    if(n<=1)
    {
        return true;
    }
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    if(Isprime(n))
    {
        cout<<"NOT A PRIME NUMBER"<<endl;
    }
    else{
        cout<<"A PRIME NUMBER"<<endl;
    }
}