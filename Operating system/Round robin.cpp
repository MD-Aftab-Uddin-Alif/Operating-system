#include<iostream>
using namespace std;
int main()
{
    int st[10],bt[10],wt[10],tat[10],n,tq;
    int i,count=0,swt=0,stat=0,temp,sq=0;
    float awt=0.0,atat=0.0;
    cout<<"Enter number of processes: ";
    cin>>n;
    cout<<"Enter burst time for sequences: ";
    for(i=0; i<n; i++)
    {
        cin>>bt[i];
        st[i]=bt[i];
    }
    cout<<"Enter time quantum: ";
    cin>>tq;
    while(1)
    {
        for(i=0,count=0; i<n; i++)
        {
            temp=tq;
            if(st[i]==0)
            {
                count++;
                continue;
            }
            if(st[i]>tq)
                st[i]=st[i]-tq;
            else if(st[i]>=0)
            {
                temp=st[i];
                st[i]=0;
            }
            sq=sq+temp;
            tat[i]=sq;
        }
        if(n==count)
            break;
    }
    for(i=0; i<n; i++)
    {
        wt[i]=tat[i]-bt[i];
        swt=swt+wt[i];
        stat=stat+tat[i];
    }
    cout<<"P\tBT\tTAT\tWT\t"<<endl;
    for(i=0; i<n; i++)
        cout<<i+1<<"\t"<<bt[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<endl;
    return 0;
}


