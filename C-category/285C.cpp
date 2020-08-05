#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll n,x,c=0;
    cin>>n;
    ll a[n+100];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        c=c+abs(a[i]-i);
    }
    cout<<c<<endl;
}
