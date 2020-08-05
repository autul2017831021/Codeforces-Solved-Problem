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
#define inf -9999999999
main()
{
    int n,m;
    cin>>n>>m;
    bool f[n+1]={0};
    bool s[m+1]={0};
    vector<pair<int,int> >v;
    int k=min(n,m);
    for(int i=0;i<=k;i++)
    {
        v.pb({i,abs(i-k)});
    }
    cout<<v.sz<<endl;
    for(int i=0;i<v.sz;i++)
        cout<<v[i].F<<" "<<v[i].S<<endl;
}

