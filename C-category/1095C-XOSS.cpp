#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
main()
{
    ll n,k;
    cin>>n>>k;
    if(k>n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    ll x=n;
    priority_queue<ll>pq;
    vector<ll>v;
    long long r;
    while(x!=0)
    {
        r=x%2;
        v.push_back(r);
        x=x/2;
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)
        {
            pq.push(i);
        }
    }
    if(pq.sz>k)
    {
        cout<<"NO";return 0;
    }
    while(pq.sz<k)
    {
        ll bal=pq.top();
        pq.pop();
        pq.push(bal-1);
        pq.push(bal-1);
    }
    cout<<"YES"<<endl;
    while(!pq.empty())
    {
        ll sal=pq.top();
        ll pw=pow(2,sal);
        cout<<pw<<" ";
        pq.pop();
    }
}
