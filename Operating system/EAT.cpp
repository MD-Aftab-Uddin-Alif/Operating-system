#include<iostream>
using namespace std;
int main()
{
    int t,p,i,j,TLB_st,MEM_at,hitcount=0;
    double MISS_time,HIT_ratio,MISS_ratio,EAT,HIT_time;
    cout<<"TLB search time: ";
    cin>>TLB_st;
    cout<<"Memory access time: ";
    cin>>MEM_at;
    cout<<"Enter number of TLB data: ";
    cin>>t;
    cout<<"Enter number of page request: ";
    cin>>p;
    int TLB_data[t],page_req[p];
    cout<<"TLB data: ";
    for(i=0;i<t;i++)
        cin>>TLB_data[i];
    cout<<"Page request: ";
    for(i=0;i<p;i++)
        cin>>page_req[i];
    for(i=0;i<p;i++)
    {
        for(j=0;j<t;j++)
        {
            if(page_req[i]==TLB_data[j])
                hitcount++;
        }
    }
    double q=double(p);
    HIT_ratio=hitcount/q;
    MISS_ratio=1-HIT_ratio;
    HIT_time=TLB_st+MEM_at;
    MISS_time=TLB_st+2*(MEM_at);
    EAT=MISS_time*MISS_ratio+HIT_time*HIT_ratio;
    cout<<"EAT: "<<EAT<<endl;
    return 0;
}
