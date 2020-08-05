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
    int n,w,b,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<pair<char,int> >v;
    for(int i=0;i<n;i++)
    {
        char in=s[i];
        v.pb({in,i});
    }
    sort(v.bg,v.en);
    for(int i=0;i<k;i++)
    {
        s[v[i].S]='0';
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]!='0')
            cout<<s[i];
    }
    cout<<endl;
}

