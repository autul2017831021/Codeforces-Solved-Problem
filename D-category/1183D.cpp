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
main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,j=0,ans=0;
        cin>>n;
        vector<pair<ll,ll> >v;
        map<ll,ll>m;
        map<ll,ll>::iterator it;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            m[x]++;
        }
        for(it=m.bg;it!=m.en;it++)
        {
            v.pb({(*it).S,(*it).F});
        }
        sort(v.rbg,v.ren);
        j=v[0].F;
        //cout<<"j->"<<j<<endl;
        ans=ans+j;
        for(int i=1;i<v.sz;i++)
        {
            //cout<<v[i].F<<" "<<v[i].S<<endl;
            if(v[i].F<j)
            {
                j=v[i].F;
                //cout<<"J->"<<j<<endl;
                ans+=j;
            }
            else if(v[i].F>=j && j>1){
                j--;
                //cout<<"je->"<<j<<endl;
                ans+=j;
            }
            else
                break;
        }
        cout<<ans<<endl;
    }
}


