#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n,c=1,m=1,b=5,l=0,r=0,mid=0;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll k=0,j;
    sort(v.rbegin(),v.rend());
    for(ll i=0;i<n;i++)
    {
        for(j=k;j<n;j++)
        {
            if(v[i]-v[j]<=5)
            {
                m=max(m,j-i+1);
            }
            else
            {
                break;
            }
        }
        k=j;
    }
    cout<<m<<endl;
}
/*
Using BINARY SEARCH

for(ll i=0;i<n;i++)
{
    ll l=i;
    ll r=n-1;
    ll mid;
    //cout<<i<<endl;
    while(r>=l){
        //cout<<"I->"<<i<<" R->"<<r<<" L->"<<l<<endl;
        mid=(l+r)/2;
        if(v[mid]-v[i]<=5)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        }

        //cout<<"bal->"<<(((r+l)/2))-i+1<<endl;
        m=max(m,(((r+l)/2))-i+1);
        //cout<<m<<endl;
}
cout<<m<<endl;
*/
