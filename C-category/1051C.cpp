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
    ll n,unik=0;
    cin>>n;
    vector<pair<ll,ll> >v;
    map<ll,ll>m;
    map<ll,ll>::iterator it;
    ll a[103]={0};
    bool f[103]={0};
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb({x,0});
        a[x]++;
        m[x]++;
    }
    for(int i=0;i<n;i++)
    {
        if(a[v[i].F]==1)
        {
            v[i].S=1;
            unik++;
        }
    }
    /// 1st section
    if(unik!=0 && unik%2==0)
    {
        int c=0;
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(v[i].S==1 && c<unik/2)
            {
                cout<<"A";
                c++;
            }
            else
                cout<<"B";
        }
        r0;
    }
    /// 2nd section
    if(unik>0)
    {
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(a[v[i].F]>2)
            {
                j++;
                f[i]=1;
                break;
            }
        }
        if(j==0)
        {
            cout<<"NO"<<endl;
            r0;
        }
        int c=0;
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if((v[i].S==1 && c<unik/2))
            {
                cout<<"A";
                c++;
            }
            else if(f[i]==1)
            {
                cout<<"A";
            }
            else
                cout<<"B";
        }
        r0;
    }
    /// 3rd section
    else
    {
       char s[n+1];
       int t=0,d=0,in=0;
       for(it=m.bg;it!=m.en;it++)
       {
           if((*it).S==2)
           {
               d++;
           }
           else if((*it).S>2)
           {
               t++;
           }
       }
       if(d>0)
       {
           bool sexy=1;
           cout<<"YES"<<endl;
           for(int i=0;i<n;i++)
           {
               if(a[v[i].F]==2 && sexy==1)
               {
                   s[i]='A';
                   cout<<"A";
                   sexy=0;
               }
               else
               {
                   s[i]='B';
                   cout<<"B";
               }
           }
           r0;
       }
       if(d==1)
       {
           cout<<"YES"<<endl;
           for(int i=0;i<n;i++)
            cout<<"A";
           r0;
       }
       if(d==0)
       {
           if(t==1)
           {
               cout<<"YES"<<endl;
                for(int i=0;i<n;i++)
                    cout<<"A";
                r0;
           }
           if(t<2)
           {
               cout<<"NO";
               r0;
           }
           else
           {
               cout<<"YES"<<endl;
               for(int i=0;i<n;i++)
               {
                   if(in<2 && f[v[i].F]==0)
                   {
                      f[v[i].F]=1;
                      if(in%2==0)
                      {
                          in++;
                          s[i]='A';
                          for(int j=i+1;j<n;j++)
                          {
                              if(v[i].F==v[j].F)
                              {
                                  s[j]='B';
                              }
                          }
                      }
                      else
                      {
                          in++;
                          s[i]='B';
                          for(int j=i+1;j<n;j++)
                          {
                              if(v[i].F==v[j].F)
                              {
                                  s[j]='A';
                              }
                          }
                      }
                   }
                   else if(f[v[i].F]==0)
                        s[i]='B';
               }
               for(int i=0;i<n;i++)
                cout<<s[i];
               cout<<endl;
           }
       }
    }
}
