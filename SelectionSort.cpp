#include<iostream>
using namespace std;


void Sorting(int arr[] , int n)
{
    int minIndex =0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
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
int arr[5] = {4,7,12,8,0};
Sorting(arr,5);
cout<<"after Sorting :";
display(arr,5);

}
