#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter no of process: ";
    cin>>n;
    int AT[100];
    float PT;
    for(i=0;i<n;i++)
    {
        cin>>AT[i];
    }
    cout<<"Enter 1st predicted time: ";
    cin>>PT;
    for(i=0;i<n;i++)
    {
        PT=0.5*AT[i]+(1-0.5)*PT;
        cout<<PT<<" ";
    }
    return 0;
}
