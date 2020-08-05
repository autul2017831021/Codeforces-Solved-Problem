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
    string x,y;
    int c=0,in,f,bal,sal;
    cin>>x>>y;
    int a,b;
    a=x.sz;
    b=y.sz;
    int g=__gcd(a,b);
    vector<long long>v;
    long long e=0,o=0;
    for(int i=1;i<=sqrt(g);i++)
    {
        if(g%i==0)
        {
            if(g/i==i){
                v.push_back(i);
            }
            else {
                v.push_back(i);
                v.push_back(g/i);
            }
        }
    }
    sort(v.begin(),v.end());
    /// khela shuru
       for(int i=0;i<v.sz;i++)
       {
           int xx=v[i];
           string t=y.substr(0,xx);
           bal=a;sal=b;in=0;
           bool f=1,g=1;
           while(1)
           {
               if(sal==0)
               {
                   break;
               }
               string tt=y.substr(in,xx);
               if(tt==t)
               {
                   //cout<<"tt->"<<tt;sp;
                   in=in+xx;
                   sal=sal-xx;
                   //cout<<sal;nl;
               }
               else
               {
                   f=0;
                   break;
               }
           }
           in=0;
           while(1)
           {
               if(bal==0)
               {
                   break;
               }
               string ss=x.substr(in,xx);
               if(ss==t)
               {
                   in=in+xx;
                   bal=bal-xx;
                   //cout<<"ss->"<<ss;sp;cout<<bal;nl;
               }
               else
               {
                   g=0;
                   break;
               }
           }
           if(f==1 && g==1)
           {
               c++;
           }
       }
       cout<<c<<endl;
}

