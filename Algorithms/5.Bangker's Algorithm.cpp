#include<iostream>
using namespace std;

int Valid(int arr[],int n,int x)
{
    int i;
    for(i=0;i<=n;i++)
    {
        if(arr[i]==x)
        {
            return 130;
        }
    }
    return 131;
}
int main()
{
    int pr,re,i,j,k=0,x;
    cout<<"Enter the number of process & resourses : ";
    cin>>pr>>re;
    int Allocation[pr][re],Max[pr][re],Need[pr][re],Ave[re],Work[re],stable[pr];
    cout<<endl<<"Available : "<<endl<<endl;
    for(i=0;i<re;i++)
    {
        cin>>Ave[i];
        Work[i]=Ave[i];
    }
    cout<<endl<<"Allocation : "<<endl<<endl;
    for(i=0;i<pr;i++)
    {
        stable[i]=-1;
        for(j=0;j<re;j++)
        {
            cin>>Allocation[i][j];
        }
    }
    cout<<endl<<"Max : "<<endl<<endl;
    for(i=0;i<pr;i++)
    {
        for(j=0;j<re;j++)
        {
            cin>>Max[i][j];
        }
    }
    cout<<endl<<"Need : "<<endl<<endl;
    for(i=0;i<pr;i++)
    {
        for(j=0;j<re;j++)
        {
            Need[i][j]=Max[i][j]-Allocation[i][j];
            cout<<Need[i][j]<<" ";
        }
        cout<<endl;
    }
    i=0;
    while(i!=pr)
    {
        if(Valid(stable,k,i)==131)
        {
            int test=1;
            for(j=0;j<re;j++)
            {
                if(Need[i][j]>Work[j])
                {
                    test=0;
                    break;
                }
            }
            if(test==1)
            {
                for(j=0;j<re;j++)
                {
                    Work[j]=Work[j]+Allocation[i][j];
                }
                stable[k]=i;
                k+=1;
            }
        }
        i+=1;
        if(i==pr&&k<pr-1)
        {
            i=0;
        }
    }

    cout<<endl<<"Stable sequence of the processes are : "<<endl;
    cout<<"k : "<<k<<endl;
    for(i=0;i<k+1;i++)
    {
        cout<<"P"<<stable[i]<<" ";
    }
    cout<<endl;

}
