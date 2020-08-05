#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
typedef long long ll;
int main() {
	ll n,k,j=0;
	cin>>n>>k;
	ll sum=0,ct=0;
	pair<ll,ll>p[n+10];
	vector<ll>v;
	for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(x==100){
            sum=sum+10;
        }
        else
        {
           p[j].first =x%10;
           p[j].second=x-(x%10);
           j++;
        }
    }
    sort(p,p+j);
    for(int i=j-1;i>=0;i--)
    {
        //cout<<p[i].second<<" "<<p[i].first<<endl;
        ll bal=10-p[i].first;
        if(k>=bal)
        {
            p[i].first=p[i].first+bal;
            k=k-bal;
        }
        else
        {
            break;
        }
    }
    for(int i=0;i<j;i++)
    {
        ll sal;
        sal=(p[i].first+p[i].second);
        if(sal<100)
        {
            ll xx=100-sal;
            v.pb(xx);
            ct=ct+xx;
        }
        sal=sal/10;
        sum+=sal;
    }
    //cout<<ct<<endl;
    if(ct<=k)
    {
        ct=ct/10;
    }
    else
    {
        ct=k/10;
    }
    cout<<sum+ct<<endl;
}


