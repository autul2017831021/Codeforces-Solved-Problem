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
main()
{
    int n,k,an=0;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<n;i++)
    {
       int sal=s[i]-'a';
       int bal='z'-s[i];
       if(bal>=sal)
       {
           if(k>bal)
           {
               k=k-bal;
               s[i]=(char)(s[i]+bal);
           }
           else
           {
               s[i]=(char)(s[i]+k);
               k=0;
           }
       }
       else
       {
           if(k>sal)
           {
               k=k-sal;
               s[i]=(char)(s[i]-sal);
           }
           else
           {
               s[i]=(char)(s[i]-k);
               k=0;
           }
       }
       if(k==0)
        break;
    }
    if(k>0)
    {
        cout<<"-1";
        r0
    }
    cout<<s;
}
