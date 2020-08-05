#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<pair<ll,ll> > vp;
typedef map<ll,ll> ml;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0;
#define F first
#define S second
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
char a1[3]={'R','G','B'};
char b1[3]={'G','B','R'};
char c1[3]={'B','R','G'};
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<int>v;
        v.pb(0);
        int l=s.sz,a=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='R')
                v.pb(i+1);
        }
        v.pb(l+1);
        for(int i=0;i<v.sz-1;i++)
        {
            a=max(a,(v[i+1]-v[i]));
        }
        cout<<a;nl;
    }
}

