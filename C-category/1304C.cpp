#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll n,t;
        cin>>n>>t;
        bool f=0,ase=1;
        ll c=0;
        for(int i=0;i<n;i++)
        {
            ll ti,l,h;
            cin>>ti>>l>>h;
            if(t>=l && t<=h)
            {
            }
            else
            {
                ll dt=abs(0-t);
                ll dl=abs(0-l);
                ll dh=abs(0-h);
                if(abs(l-t)<=abs(h-t))
                {
                   ll baltime=abs(dl-dt);
                   if((t+baltime)>=l)
c=0;
                }
                else
                {
                    ll baltime=abs(dh-dt);
                    if((t-baltime)<=h)
                        c++;
                }
            }
        }
        if(c==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
