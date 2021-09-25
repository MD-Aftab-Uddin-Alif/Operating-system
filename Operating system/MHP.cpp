#include<iostream>
using namespace std;
int main()
{
    int n,P[100],B[100],L[100],i,RA,RP;
    cout<<"Enter no of process: ";
    cin>>n;
    cout<<"P  "<<"B    "<<"L  "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>P[i]>>B[i]>>L[i];
    }
    while(-1)
    {
        cout<<"Enter request process: ";
        cin>>RP;
        cout<<"Enter request address: ";
        cin>>RA;
        if(RA>=B[RP] && RA<(B[RP]+L[RP]))
            cout<<"Accepted"<<endl;
        else
            cout<<"Not accepted"<<endl;
    }
    return 0;
}



