#include<iostream>
using namespace std;

int Hit(int arr[],int f,int x)
{
    for(int i=0;i<f;i++)
    {
        if(arr[i]==x)
        {
            return 130;
        }
    }
    return 112;
}

int Optimal(int arr[],int frame[],k,f,n)
{
    for(int i=0;i<f;i++)
    {

    }
}
int main()
{
    int pg,fr,n,hit=0;
    cout<<"Enter the number of page & frame : ";
    cin>>pg>>fr;
    int Frame[fr],Frame1[fr],f=0;
    cout<<"Enter the number of page referencing string : ";
    cin>>n;
    int page_str[n];
    cout<<"Enter the string : ";
    for(int i=0;i<n;i++)
    {
        cin>>page_str[i];
    }
    Frame[f]=page_str[0];
    for(int i=1;i<n;i++)
    {
        if(Hit(Frame,f,page_str[i])==130)
        {
            hit+=1;
        }
        else if(Hit(Frame,f,page_str[i])!=130&&f<fr)
        {
            Frame[f]=page_str[i];
            f+=1;
        }
        else
        {
            Optimal(page_str,Frame,i,f,n);
        }
    }
    cout<<"Hit : "<<hit<<endl;

}
