#include<iostream>
using namespace std;

void Sort(int pr[],int At[],int bt[],int n)
{
    int tmp;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(bt[j]<bt[j-1])
            {
                tmp=bt[j];
                bt[j]=bt[j-1];
                bt[j-1]=tmp;

                tmp=At[j];
                At[j]=At[j-1];
                At[j-1]=tmp;

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
    cout<<"Enter the number of process  : ";
    cin>>n;
    int Pr[n],AT[n],BT[n],Min,bt,m;
    cout<<endl<<"Enter the  Processes, Arrival Time & Burst Time : "<<endl<<endl<<"Pr:AT:BT"<<endl;;
    for(int i=0;i<n;i++)
    {
        cin>>Pr[i]>>AT[i]>>BT[i];
        if(i==0)
        {
            Min=AT[i];
            m=i;
        }
        else
        {
            if(AT[i]<Min)
            {
                Min=AT[i];
                m=i;
            }
        }
    }
    Pr[m]=-1;
    bt=BT[m];
    BT[m]=-1;
    Sort(Pr,AT,BT,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<Pr[i]<<" "<<AT[i]<<" "<<BT[i]<<endl;
        ///cout<<BT[i]<<endl;
    }
    int k=1,TAT=bt,Ave_Wt=0;
    while(k<n)
    {
        for(int i=1;i<n;i++)
        {
            if(AT[i]<=TAT&&AT[i]!=-1)
            {
                Ave_Wt=Ave_Wt+(TAT-AT[i]);
                TAT+=BT[i];
                cout<<Pr[i]<<", Ave_WT : "<<Ave_Wt<<endl;
                AT[i]=-1;
                k+=1;
                i=n;
            }
        }
    }
    cout<<endl<<"TAT : "<<TAT<<endl<<"Ave_WT : "<<Ave_Wt<<endl;


}

/*
1 2 4
2 1 5
3 0 2
4 5 1
5 6 7
6 9 0
*/
