#include<iostream>
using namespace std;

void Sorting(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
            {
                if(arr[j] > arr[j+1])
                    {
                        swap(arr[j] , arr[j+1]);
                    }
            }
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
    int arr[6] = {5,2,9,1,0,7};

    Sorting(arr,6);
    cout<<"sorted array: ";
    display(arr,6);
}