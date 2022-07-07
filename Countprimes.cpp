#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n)                /* USING SIEVE OF ERATOSTHENES ALGORITHM  */
    {
        int count =0;
        vector<bool> isprime(n+1,true);
        isprime[0] =isprime[1] =false;
        
        for(int i=2; i<n; i++)
        {
        
            if(isprime[i])
            {
            count++;
            for(int j=2*i; j<n; j=j+i)
            {
                isprime[j] =false; 
            }  
            }       
        }
        return count;
    }
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;

    cout<<countPrimes(n)<<endl;

}