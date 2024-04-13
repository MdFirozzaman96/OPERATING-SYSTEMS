#include<iostream>
using namespace std;
int  main()
{
    int Pn,Ave_WT=0;
    cout<<"Enter the number of process : ";
    cin>>Pn;
    int TT[Pn],BT[Pn],WT[Pn];
    cout<<"Enter burst time : "<<endl;
    for(int i=0;i<Pn;i++)
    {
        cin>>BT[i];
    }
    WT[0]=0;
    cout<<"Waiting Time | Turnaround Time "<<endl<<endl;
    for(int i=0;i<Pn;i++)
    {
        if(i==0)
        {
           cout<<WT[i]<<"   |  "<<BT[i]<<endl;
           Ave_WT+=WT[i];
        }
        else
        {
            WT[i]=WT[i-1]+BT[i-1];
            TT[i]=WT[i]+BT[i];
            Ave_WT+=WT[i];
            cout<<WT[i]<<"  |  "<<TT[i]<<endl;
        }
    }
    cout<<endl<<"Average waiting time : "<<Ave_WT/Pn<<endl;
    return 0;
}
