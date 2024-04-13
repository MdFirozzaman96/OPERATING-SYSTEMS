#include<iostream>
using namespace std;

void Priority(int prt[],int pr[],int n)
{
    int i,j,tmp;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(prt[j]<prt[j-1])
            {
                tmp=prt[j];
                prt[j]=prt[j-1];
                prt[j-1]=tmp;

                tmp=pr[j];
                pr[j]=pr[j-1];
                pr[j-1]=tmp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of process : ";
    cin>>n;
    int Pr[n],BT[n],Prt[n];
    cout<<endl<<"Enter process number(in ascending order),burst time & priority : "<<endl<<endl;
    cout<<"Process|Burst Time|Priority"<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Pr[i]>>BT[i]>>Prt[i];
    }
    Priority(Prt,Pr,n);

    cout<<endl<<"Process Number|Priority"<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"     "<<Pr[i]<<"     "<<Prt[i]<<endl;
    }
}
