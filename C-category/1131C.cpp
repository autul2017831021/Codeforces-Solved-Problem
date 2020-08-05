#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a[101],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long ans[101],pns[101];
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(i==0 || i%2==0)
        {
           ans[j]=a[i];
           j++;
        }
        else
        {
            pns[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<j;i++)
        cout<<ans[i]<<" ";
    for(int i=k-1;i>=0;i--)
        cout<<pns[i]<<" ";

}
