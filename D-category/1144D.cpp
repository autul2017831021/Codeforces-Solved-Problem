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
    ll n,x,T=-1,o=0;
    cin>>n;
    vector<ll>v,w(200099,0);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        w[x]++;
        v.pb(x);
    }
    ll beshi=*max_element(w.bg,w.en);
    for(int i=0;i<n;i++)
    {
        if(w[v[i]]==beshi)
        {T=v[i];break;}
    }
    ll pos=find(v.bg,v.en,T)-v.bg;
    cout<<n-beshi<<endl;
    //cout<<T<<" "<<beshi<<" "<<pos<<endl;
    if(pos==0)
    {
        for(int i=1;i<n;i++)
        {
            ll dif=abs(v[i]-v[i-1]);
            if(v[i]+dif==v[i-1] && dif>0)
            {
                cout<<"1 "<<i+1<<" "<<i<<endl;
                v[i]=v[i-1];
            }
            else if(v[i]-dif==v[i-1] && dif>0)
            {
                cout<<"2 "<<i+1<<" "<<i<<endl;
                v[i]=v[i-1];
            }
        }
    }
    else
    {
        ///loop 1
        for(int i=pos-1;i>=0;i--)
        {
            ll dif=abs(v[i]-v[i+1]);
            if(dif>0 && v[i+1]>v[i])
            {
                v[i]=v[i+1];
                cout<<"1 "<<i+1<<" "<<i+2<<endl;
            }
            else if(dif>0 && v[i]>v[i+1])
            {
                cout<<"2 "<<i+1<<" "<<i+2<<endl;
                v[i]=v[i+1];
            }
        }
        ///loop 2
        for(int i=pos+1;i<n;i++)
        {
            ll dif=abs(v[i]-v[i-1]);
            if(v[i]<v[i-1] && dif>0)
            {
                cout<<"1 "<<i+1<<" "<<i<<endl;
                v[i]=v[i-1];
            }
            else if(v[i]>v[i-1] && dif>0)
            {
                cout<<"2 "<<i+1<<" "<<i<<endl;
                v[i]=v[i-1];
            }
        }
    }
}

