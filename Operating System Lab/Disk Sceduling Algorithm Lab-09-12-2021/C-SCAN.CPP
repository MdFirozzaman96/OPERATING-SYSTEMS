#include<iostream>
using namespace std;
void Sort(int arr[],int n)
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
}
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
    /*for(int i=0;i<n;i++)
    {
        cout<<pending[i]<<" ";
    }*/
    /*for(int i=1;i<n;i++)
    {
        if(pending[i]>pending[i-1])
        {
            sum=sum+(pending[i]-pending[i-1]);
        }
        else
        {
            sum=sum+(pending[i-1]-pending[i]);
        }
    }*/
    //cout<<endl<<" Sum : "<<sum<<endl;
    for(int i=1;i<n;i++)
    {

        if(pending[0]<pending[i])
        {
            if(pending[i]>pending[i-1])
            {
                sum=sum+(pending[i]-pending[i-1]);
            }
            else
            {
                sum=sum+(pending[i-1]-pending[i]);
            }
            cout<<pending[i]<<" -> ";
        }
    }
    cout<<endl;
    Sort(pending,n);
    for(int i=n-1;i>=0;i--)
    {
        cout<<pending[i]<<" -> ";
        if(pending[i]>pending[i-1])
        {
            sum=sum+(pending[i]-pending[i-1]);
        }
        else
        {
            sum=sum+(pending[i-1]-pending[i]);
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(pending[i]>pending[i-1])
        {
            sum=sum+(pending[i]-pending[i-1]);
        }
        else
        {
            sum=sum+(pending[i-1]-pending[i]);
        }
        cout<<pending[i]<<" -> ";
    }
    cout<<endl<<endl<<" Total Seek Time : "<<sum<<endl;
}

///  53 98 183 37 122 14 124 65 67
