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
    int t;
    cin>>t;
    map<string,int>m;
    map<string,int>::iterator it;
    vector<pair<string,int> >v;
    for(ll i=0;i<t;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        v.pb({s,m[s]-1});
    }
    for(int i=0;i<t;i++)
    {
        if(v[i].S==0)
            cout<<"OK"<<endl;
        else
            cout<<v[i].F<<v[i].S<<endl;
    }
}

