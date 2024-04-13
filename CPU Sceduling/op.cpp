#include<iostream>
using namespace std;
int main()
{
    int n,j,i;
    cin>>n;
    int b[n],w[n],t[n];
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    w[0]=0;
    cout<<"1-->"<<w[0]<<endl;
    for(i=1;i<n;i++)
    {
        w[i]=w[i-1]+b[i-1];
        cout<<i<<"-->" <<w[i]<<endl;
    }
    t[0]=b[0];
    for(i=1;i<n;i++)
    {
        t[i]=b[i]+w[i]-b[i];
        cout<<"Turnaround Time for process : " <<i+1<<" : "<<t[i]<<endl;
    }

}
