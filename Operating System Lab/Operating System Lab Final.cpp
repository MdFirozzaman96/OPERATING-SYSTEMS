#include<iostream>
using namespace std;

void Priority(int pr[],int At[],int bt[],int prt[],int n,int pr1,int At1,int bt1,int prt1)
{
    for(int i=0;i<n-1;i++)
    {
        int temp;
        for(int j=1;j<n-(i+1);j++)
        {
            if(prt[j]<prt[j-1])
            {
                temp=prt[j];
                prt[j]=prt[j-1];
                prt[j-1]=temp;

                temp=At[j];
                At[j]=At[j-1];
                At[j-1]=temp;

                temp=bt[j];
                bt[j]=bt[j-1];
                bt[j-1]=temp;

                temp=pr[j];
                pr[j]=pr[j-1];
                pr[j-1]=temp;
            }
        }
    }
    cout<<endl;
    int tat=bt1,Ave_Wt=0;
    double ave;
    cout<<"Tat : "<<tat<<endl;
    for(int i=0;i<n-1;i++)
    {
        ///cout<<pr[i]<<" "<<At[i]<<" "<<bt[i]<<" "<<prt[i]<<endl;
        Ave_Wt=Ave_Wt+(tat-At[i]);
        cout<<"Ave_Wt : "<<Ave_Wt<<endl;
        ///cout<<"Tat : "<<tat<<endl;
        tat+=bt[i];

    }
    cout<<endl;
    ave=Ave_Wt*1.0/n;
    cout<<"Average Waiting Time : "<<ave<<endl;
}

void Sort(int pr[],int At[],int bt[],int n)
{
    int tmp;
    for(int i=0;i<n-1;i++)
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
    int n,test,pr[10],At[10],bt[10],BT[10],prt[10],pr1,At1,bt1,prt1;
    int Min,m,btt;
    cout<<"Enter the number of process : "<<endl;
    cin>>n;
    cout<<"Enter the process arrival time & priority : "<<endl<<endl;
    cout<<"Pr:At:bt:prt"<<endl;
    cin>>pr1>>At1>>bt1>>prt1;
    for(int i=0;i<n-1;i++)
    {
        cin>>pr[i]>>At[i]>>bt[i]>>prt[i];
    }
    cout<<"Enter the test number : ";
    cin>>test;
    if(test==1)
    {
        Priority(pr,At,bt,prt,n,pr1,At1,bt1,prt1);
    }

    if(test==2)
    {
        btt=bt1;
        bt1=-1;
        Sort(pr,At,bt,n);
        cout<<endl;
        for(int i=0;i<n-1;i++)
        {
            cout<<pr[i]<<" "<<At[i]<<" "<<bt[i]<<endl;
            ///cout<<BT[i]<<endl;
        }
        /*int k=1,TAT=bt[0],Ave_Wt=0;
        while(k<n)
        {
            for(int i=1;i<n;i++)
            {
                if(At[i]<=TAT&&At[i]!=-1)
                {
                    Ave_Wt=Ave_Wt+(TAT-At[i]);
                    TAT+=BT[i];
                    cout<<pr[i]<<", Ave_WT : "<<Ave_Wt<<endl;
                    At[i]=-1;
                    k+=1;
                    i=n;
                }
            }
        }*/
        ///cout<<endl<<"TAT : "<<TAT<<endl<<"Ave_WT : "<<Ave_Wt<<endl;


    }


}

/*
0 1 5 3
1 2 2 1
2 3 2 4
3 4 1 2
4 5 1 1
*/
