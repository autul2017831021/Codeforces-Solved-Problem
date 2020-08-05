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
main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        ll bal=inf,r;
        set<ll>s;
        set<ll>::iterator it;
        vector<ll>v;
        v.pb(0);
        for(int i=1;i<=sqrt(n);i++)
        {
            r=n/i;
            if(r!=bal)
            {
                bal=r;
                s.insert(i);
                s.insert(r);
            }
        }
        for(it=s.bg;it!=s.en;it++)
        {
            v.pb((*it));
        }
        sort(v.bg,v.en);
        cout<<v.sz<<endl;
        for(int i=0;i<v.sz;i++)
            cout<<v[i]<<" ";
        cout<<endl;

    }
}
