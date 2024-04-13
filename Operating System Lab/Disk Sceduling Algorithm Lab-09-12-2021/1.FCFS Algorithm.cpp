#include<iostream>
using namespace std;
/*void Sort(int arr[],int n,int m,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            int temp;
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m&&arr[i]<n)
        {
            cout<<arr[i]<<" -> ";
        }
    }
}*/
int main()
{
    int pending[100],seq[100],sum=0,n;
    cout<<"Enter the number of request : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>pending[i];
        //seq[i]=pending[i];
    }
    //Sort(pending,n);
    for(int i=0;i<n;i++)
    {
        cout<<pending[i]<<" ";
    }
    for(int i=1;i<n;i++)
    {
        if(pending[i]>pending[i-1])
        {
            sum=sum+(pending[i]-pending[i-1]);
        }
        else
        {
            sum=sum+(pending[i-1]-pending[i]);
        }
    }
    cout<<endl<<" Sum : "<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(pending[j]>pending[i]&&pending[j]<pending[i+1]||pending[j]<pending[i]&&pending[j]>pending[i+1])
            {
                cout<<pending[j]<<" -> ";
            }
        }
        cout<<endl;
    }
}
