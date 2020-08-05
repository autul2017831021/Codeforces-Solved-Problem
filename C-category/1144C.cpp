#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
#define r0 return 0
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
    sort(v.bg,v.en);
    vector<ll>a,d;
    ll bal=0;
    ll boro=*max_element(v.bg,v.en);
    v.clear();
    for(int i=0;i<=boro;i++)
    {
        if(w[i]>0)
        {
            v.pb(i);
        }
        if(w[i]>2)
        {
            cout<<"NO"<<endl;
            r0;
        }
        else if(w[i]==2)
        {
            bal++;
            //cout<<w[i]<<endl;
        }
    }
    cout<<"YES"<<endl;
    if(bal==0)
    {
        cout<<n<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl<<"0"<<endl;
    }
    else
    {
        for(int i=0;i<v.sz;i++)
        {
            if(w[v[i]]>0)
            {
                a.pb(v[i]);
                w[v[i]]--;
            }
        }
        for(int i=v.sz-1;i>=0;i--)
        {
            if(w[v[i]]>0)
            {
                d.pb(v[i]);
                w[v[i]]--;
            }
        }
        cout<<a.sz<<endl;
        for(int i=0;i<a.sz;i++)
            cout<<a[i]<<" ";
        cout<<endl<<d.sz<<endl;
        for(int i=0;i<d.sz;i++)
            cout<<d[i]<<" ";
    }

}

