#include<iostream>
using namespace std;

void EnterArray(int arr[] , int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }cout<<endl;
}

void Sorting(int arr[] , int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(; j>=0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int arr[5];

    cout<<"Enyter an ARRAY"<<endl;
    EnterArray(arr,5);

    Sorting(arr,5);

    cout<<"Display an  SORTED ARRAY"<<endl;
    display(arr,5);

}