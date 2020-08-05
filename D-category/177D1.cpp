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
    int n,m,a,b,c=0;
    cin>>n>>m>>c;
    vector<int>v,w;
    v.pb(0);
    w.pb(0);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    for(int i=1;i<=m;i++)
    {
        int x;
        cin>>x;
        w.pb(x);
    } int in=0;
    for(int k=1;k<=(n-m+1);k++)
    {
        in++;
        int jj=1;
        int mi=n-in+1;
        mi=min(m,mi);
        //cout<<"in->"<<in<<" min->"<<mi+in-1<<endl;
        for(int i=in;i<=(in+mi-1);i++)
        {
            v[i]=w[jj]+v[i];
            v[i]=v[i]%c;
            jj++;
        }
        //cout<<jj-1<<" ";
    }
    //cout<<endl;
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}

