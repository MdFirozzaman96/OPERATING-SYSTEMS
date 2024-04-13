#include<iostream>
using namespace std;

int scheduling(int pr[],int bt[],int n,int pos)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            int tmp;
            if(i!=pos)
            {
                if(bt[j]<bt[j-1])
                {
                    tmp=bt[j];
                    bt[j]=bt[j-1];
                    bt[j-1]=tmp;

                    tmp=pr[j];
                    pr[j]=pr[j-1];
                    pr[j-1]=tmp;
                }
            }
        }
    }

}
int main()
{
    int pr[10],ar[10],bt[10],n,Min=100000000,pos;
    cout<<"Enter the number of process : ";
    cin>>n;
    cout<<endl<<"Pr|AT|BT"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>pr[i]>>ar[i]>>bt[i];
        if(ar[i]<Min)
        {
            Min=ar[i];
            pos=i;
        }
    }
    cout<<"Min="<<Min<<", Pos : "<<pos<<", Process = "<<pr[pos]<<endl;
    cout<<endl<<"P"<<pr[pos]<<endl;
    scheduling(pr,bt,n,pos);
    ///cout<<endl<<"P"<<pr[pos]<<endl;
    for(int i=0;i<n;i++)
    {
        if(i!=pos)
        {
            cout<<"P"<<pr[i]<<endl;
        }
    }
    cout<<endl;
}

/*
1 4 5
2 5 3
3 0 2
4 5 1
*/
