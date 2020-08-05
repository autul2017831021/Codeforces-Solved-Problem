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
    int n,c=1;
    cin>>n;
    vector<pair<int,bool> >v,w;
    vector<pair<int,int> >x;
    v.pb({0,1});w.pb({0,1});
    for(int i=0;i<n;i++)
    {
        int xx;
        cin>>xx;
        v.pb({xx,1});
    }
    for(int i=0;i<n;i++)
    {
        int xx;
        cin>>xx;
        w.pb({xx,1});
    }
    //sort(v.bg,v.en);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(v[i].F==w[j].F && i!=j)
            {
                for(int k=j;k>i;k--)
                {
                    swap(w[k-1].F,w[k].F);
                    x.pb({k-1,k});
                }
                break;
            }
        }
    }
    cout<<x.sz<<endl;
    for(int i=0;i<x.sz;i++)
    {
        cout<<min(x[i].F,x[i].S)<<" "<<max(x[i].F,x[i].S)<<endl;
    }
}

