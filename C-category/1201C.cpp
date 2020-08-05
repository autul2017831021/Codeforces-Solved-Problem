#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define bg begin()
#define ed end()
#define sz size()
main()
{
    long long n,k,i=0,a;
    cin>>n>>k;
    vector<long long>v,w;
    for(i=0;i<n;i++)
    {
        cin>>a;
        w.pb(a);
    }
    sort(w.bg,w.ed);
    long long mid=w.sz/2;
    for(int i=mid;i<n;i++)
    {
        v.pb(w[i]);
        //cout<<w[i]<<" ";
    }
    ll diff=v[1]-v[0];
    //cout<<diff<<endl;
    if(diff>k)
    {
        cout<<v[0]+k;
        return 0;
    }
    for(int i=0;i<v.sz-1;i++)
    {
        ll j=i+1;
        diff=v[i+1]-v[i];
        //cout<<"j->"<<i+1<<" diff->"<<diff<<endl;
        if(diff>k)
        {
            cout<<v[i]+(k/j);
            return 0;
        }
        else
        {
            if(diff*j>k)
            {
                v[i]+=(k/j);
                cout<<v[i];
                return 0;
            }
            else
            {
                v[i]=v[i+1];
                //cout<<v[i]<<endl;
                //cout<<"k->"<<k<<" j*diff->";
                k=k-(j*diff);
                //cout<<j*diff<<" K-j*diff->"<<k<<endl;
            }
        }
    }
    v[v.sz-1]+=(k/v.sz);
    cout<<v[v.sz-1];
}

/*
11 685146646
26521171 379278816 8989449 50899375 935650934 529615950 494390299 427618702 979962232 602512657 429731081
*/
