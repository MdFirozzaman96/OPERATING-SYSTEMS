#include<iostream>
using namespace std;

void Bub_Sort(int arr[],int PR[],int AR[],int n)
{
    int tmp;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(arr[j]<arr[j-1])
            {
                tmp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;

                tmp=PR[j];
                PR[j]=PR[j-1];
                PR[j-1]=tmp;

                tmp=AR[j];
                AR[j]=AR[j-1];
                AR[j-1]=tmp;
            }
        }
    }
}
int  main()
{
    int Pn,Ave_WT=0;
    cout<<"Enter the number of process : ";
    cin>>Pn;
    int TT[Pn],BT[Pn],WT[Pn],PR[Pn],AR[Pn];
    cout<<"Enter burst time : "<<endl;
    for(int i=0;i<Pn;i++)
    {
        cin>>BT[i];
        PR[i]=i+1;
    }
    cout<<"Enter the arrival time : "<<endl;
    for(int i=0;i<Pn;i++)
    {
        cin>>AR[i];
    }
    Bub_Sort(BT,PR,AR,Pn);
    /*for(int i=0;i<Pn;i++)
    {
        cout<<BT[i]<<" ";
    }*/
    /*cout<<"After performing SJF the processes are - "<<endl;
    for(int i=0;i<Pn;i++)
    {
        cout<<PR[i]<<" ";
    }*/
    cout<<endl;
    WT[0]=0;
    cout<<"Process : "<<endl<<endl;
    for(int i=0;i<Pn;i++)
    {
        if(i==0)
        {
           cout<<"P"<<PR[i]<<" : "<<endl;
           cout<<"Waiting Time : "<<WT[i]<<",  Turnaround Time : "<<BT[i]<<endl;
           Ave_WT+=WT[i];
        }
        else
        {
            cout<<"P"<<PR[i]<<" : "<<endl;
            WT[i]=WT[i-1]+BT[i-1];
            TT[i]=WT[i]+BT[i];
            Ave_WT+=WT[i];
            cout<<"Waiting Time : "<<WT[i]<<", Turnaround Time : "<<TT[i]<<endl;
        }
    }
    cout<<endl<<"Average waiting time : "<<Ave_WT/Pn<<endl;
    return 0;
}
