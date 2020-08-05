#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
main()
{
    ll n,posi=0,nigi=0;
    vector<ll>v;
    bool f[200000]={0};
    bool fk[200000]={0};
    cin>>n;
    dl x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        //cout<<floor(x)<<" "<<" "<<ceil(x)<<endl;
        if(x<0)
        {
            x=x*-1;
            ll bal=floor(x);
            if(ceil(x)-floor(x)==0)
                f[i]=1;
            fk[i]=0;
            bal*=-1;
            v.pb(bal);
            nigi=nigi+bal;
        }
        else
        {
            ll bal=floor(x);
            v.pb(bal);
            if(ceil(x)-floor(x)==0)
                f[i]=1;
            fk[i]=1;
            posi=posi+bal;
        }
    }
    nigi*=-1;
    //cout<<endl<<posi<<" "<<nigi<<endl;
    if(posi==nigi)
    {
        for(int i=0;i<v.sz;i++)
            cout<<v[i]<<endl;
        r0;
    }
    else if(posi>nigi)
    {
        ll dif=posi-nigi;
        ll j=0;
        //cout<<"d1="<<dif<<endl;
        for(int i=0;i<n;i++)
        {
            if(j<dif && v[i]<0)
            {
                if(f[i]==0){
                   v[i]=v[i]-1;
                   j++;
                }
            }
        }
    }
    else
    {
        ll dif=nigi-posi;
        //cout<<"d2="<<dif<<endl;
        ll j=0;
        for(int i=0;i<n;i++)
        {
            if(j<dif && v[i]>=0 && fk[i]==1)
            {
                if(f[i]==0){
                    v[i]=v[i]+1;
                    j++;
                }
            }
        }
    }
    for(int i=0;i<v.sz;i++)
        cout<<v[i]<<endl;

}

