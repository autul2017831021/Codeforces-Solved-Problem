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
#define F first
#define S second
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl endl
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,h,g=0,s=0,b=0;
        cin>>n;
        h=n/2;
        map<ll,ll>m;
        map<ll,ll>::iterator it;
        vector<pair<ll,ll> >v;
        bool f=1,ff=1;
        for(int i=0;i<n;i++)
        {
            ll xl;
            cin>>xl;
            m[xl]++;
        }
        for(it=m.bg;it!=m.en;it++)
        {
            v.pb({itf,its});
        }
        sort(v.rbg,v.ren);
        for(int i=0;i<v.sz;i++)
        {
            //cout<<v[i].F<<" "<<v[i].S<<nl;
            if(g==0)
            {
                if(h>=v[i].S)
                {
                    h=h-v[i].S;
                    g=g+v[i].S;
                }
                else
                    break;
            }
            else{
                if(f)
                {
                    if(h>=v[i].S)
                    {
                        h=h-v[i].S;
                        s=s+v[i].S;
                        if(s>g)
                            f=0;
                    }
                    else
                        break;
                }
                else
                {
                    if(h>=v[i].S)
                    {
                        h=h-v[i].S;
                        b=b+v[i].S;
                        if(b>g)
                            ff=0;
                    }
                    else
                        break;
                }
            }
        }
        if(ff==1)
        {
            cout<<"0 0 0"<<endl;
        }
        else if(g==0 || s==0 || b==0)
        {
            cout<<"0 0 0"<<endl;
        }
        else
            cout<<g<<" "<<s<<" "<<b<<endl;
    }
}
