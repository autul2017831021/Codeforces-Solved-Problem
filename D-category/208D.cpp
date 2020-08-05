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
    ll n,s=0,r=0;
    cin>>n;
    ll a,b,c,d,e;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    cin>>a>>b>>c>>d>>e;
    ll aa=0,bb=0,cc=0,dd=0,ee=0;
    for(int i=0;i<n;i++)
    {
        ll xx=v[i];
        s=s+xx;
        if(s>=e)
        {
            ee=ee+(s/e);
            s=s-((s/e)*e);
            if(s>=d)
            {
                dd+=(s/d);
                s-=((s/d)*d);
            }
            if(s>=c)
            {
                cc+=(s/c);
                s-=((s/c)*c);
            }
            if(s>=b)
            {
                bb+=(s/b);
                s-=((s/b)*b);
            }
            if(s>=a)
            {
                aa+=(s/a);
                s-=((s/a)*a);
            }
        }
        else if(s>=d)
        {
            dd+=(s/d);
            s=s-((s/d)*d);
            if(s>=c)
            {
                cc+=(s/c);
                s-=((s/c)*c);
            }
            if(s>=b)
            {
                bb+=(s/b);
                s-=((s/b)*b);
            }
            if(s>=a)
            {
                aa+=(s/a);
                s-=((s/a)*a);
            }
        }
        else if(s>=c)
        {
            cc+=(s/c);
            s=s-((s/c)*c);
            if(s>=b)
            {
                bb+=(s/b);
                s-=((s/b)*b);
            }
            if(s>=a)
            {
                aa+=(s/a);
                s-=((s/a)*a);
            }
        }
        else if(s>=b)
        {
            bb=bb+(s/b);
            s=s-((s/b)*b);
            if(s>=a)
            {
                aa+=(s/a);
                s-=((s/a)*a);
            }
        }
        else if(s>=a)
        {
            aa=aa+(s/a);
            s=s-((s/a)*a);
        }
    }
    cout<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<" "<<ee<<endl<<s<<endl;
}

