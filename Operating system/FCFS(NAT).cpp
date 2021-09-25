#include<iostream>
using namespace std;
int main()
{
    int AT[100],BT[100],CT[100],TAT[100],WT[100],P[100],n,i;
    cout<<"Enter no of process: ";
    cin>>n;
    cout<<"P   "<<"AT  "<<"BT  "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>P[i]>>AT[i]>>BT[i];
    }
    CT[0]=AT[0]+BT[0];
    for(i=1;i<n;i++)
        CT[i]=CT[i-1]+BT[i];
    cout<<"\nFCFS table"<<endl;
    cout<<"P  "<<"AT  "<<"BT    "<<"CT   "<<"TAT   "<<"WT  "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<P[i]<<"   "<<AT[i]<<"   "<<BT[i]<<"    "<<CT[i]<<"     "<<CT[i]-AT[i]<<"    "<<(CT[i]-AT[i])-BT[i]<<endl;
    }
    return 0;
}

