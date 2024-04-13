#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,sum=0;
    cout<<"Enter the total number of cylinder are pending : ";
    cin>>n;
    cout<<"Enter the cylinder number : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            sum=sum+(arr[i]-arr[i-1]);
        }
        else
        {
            sum=sum+(arr[i-1]-arr[i]);
        }
    }
    cout<<sum<<endl;
}
