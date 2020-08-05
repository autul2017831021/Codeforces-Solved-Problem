#include<bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
int main(){
    ll n,k,b=0;
    cin>>n>>k;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        v.push_back(x);
    }
    ll ager=0;
    for(ll i=0;i<n-1;i++)
    {
        ll x;
        ll r;
        if(v[i]>=k)
        {
            b+=v[i]/k;
            v[i+1]+=v[i]%k;
            ager=v[i]%k;
        }
        else
        {
           if(ager>0)
           {
               b++;
               ager=0;
           }
           else
           {
               v[i+1]+=v[i];
               ager=v[i];
           }
        }
        //cout<<"day->"<<i+1<<". needed bags->"<<b<<endl;
        //". v[i]->"<<v[i]<<". v[i+1]->"<<v[i+1]<<endl;
    }
    ll bal,sal;
    bal=v[n-1]/k;
    sal=v[n-1]%k;
    b+=bal;
    if(sal>0)
        b++;

    cout<<b<<endl;
}
/*
161 5
17 0 3 8 4 8 8 14 15 7 5 17 2 5 7 1 3 16 5 13 6 15 12 15 18 1 0 13 19 18 4 11 13 7 7 1 3 15 15
10 4 14 3 3 10 10 12 1 2 14 4 1 8 19 0 11 2 11 16 7 4 4 17 16 9 17 6 10 5 16 4 6 7 0 1 9 10 15
12 19 17 5 4 4 16 19 7 9 17 11 1 0 0 13 14 4 15 10 4 7 15 13 6 3 8 14 15 13 19 17 7 19 10 5 10
17 16 2 5 9 16 16 9 3 6 8 19 0 1 18 6 17 3 17 6 12 6 16 6 6 3 14 5 16 15 9 0 12 10 5 4 8 16 15
11 14 6 13 6 3 1

*/

