#include<iostream>
using namespace std;
                                                            /* HCF and LCM using GCD  without recursion*/

int GCD(int a,int b)
{
    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a!=b)
    {
        if( a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
        
    }
    return a;
}

int main()
{
    int a=72;
    int b=24 ;
    // cout<<"Enter the two numbers"<<endl;
    // cin>>a>>b;

    int HCF = GCD(a,b);

    int LCM = (a*b)/HCF;

    cout<<"HCF of a and b is: "<<HCF<<endl;
    cout<<"LCM of a and b is: "<<LCM<<endl;
}