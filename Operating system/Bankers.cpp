#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k;
    cout<<"Number of processes: ";
    cin>>n;
    cout<<"Number of resources: ";
    cin>>m;
    int allocation[n][m],max[n][n],available[m],need[n][m],f[n],ans[n],ind=0;
    cout<<"Enter allocation matrix"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cin>>allocation[i][j];
    }
    cout<<"Enter max matrix"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>max[i][j];
    }
    cout<<"Enter available Resources: ";
    for(i=0; i<m; i++)
        cin>>available[i];
    for(k=0; k<n; k++)
    {
        f[k]=0;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            need[i][j]=max[i][j]-allocation[i][j];
    }
    int y=0;
    for(k=0; k<m; k++)
    {
        for(i=0; i<n; i++)
        {
            if(f[i]==0)
            {
                int flag=0;
                for(j=0; j<m; j++)
                {
                    if(need[i][j]>available[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    ans[ind++]=i;
                    for (y=0; y<m; y++)
                        available[y]+=allocation[i][y];
                    f[i]=1;
                }
            }
        }
    }
    cout<<"Following is the SAFE Sequence\n<";
    for(i=0; i<n-1; i++)
        cout<<"P"<<ans[i]<<", ";
    cout<<"P"<<ans[n-1]<<">";
    return (0);
}

