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
bool bal(pair<ll,ll>a,pair<ll,ll>b){
    return b.S > a.S;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d1=0,d2=0,A,B;
        cin>>n;
        vector<pair< pair<int,int>,int> >v;
        vector<pair<int,int> >w;
        for(int i=0;i<n;i++)
        {
            int l,r;
            cin>>l>>r;
            v.pb({{l,r},i});
        }
        sort(v.bg,v.en);
        A=v[0].F.F;
        B=v[0].F.S;
        //w.pb({v[0].S,1});
        d1++;
        for(int i=1;i<n;i++)
        {
            //cout<<v[i].F.F<<" "<<v[i].F.S<<" in->"<<v[i].S<<endl;
            if(v[i].F.F>B)
            {
                //w.pb({v[i].S,2});
                //d2++;
            }
            else
            {
                //w.pb({v[i].S,1});
                //A=v[i].F.F;
                B=max(v[i].F.S,B);
                //d1++;
            }
        }
        //cout<<A<<" "<<B<<endl;
        for(int i=0;i<n;i++)
        {
            if(v[i].F.F>B)
            {
                d2++;
                w.pb({v[i].S,2});
            }
            else
            {
                w.pb({v[i].S,1});
                d1++;
            }
        }
        if(d1==0 || d2==0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        sort(w.bg,w.en);
        for(int i=0;i<w.sz;i++)
        {
            cout<<w[i].S<<" ";
        }
        cout<<endl;
    }

}

