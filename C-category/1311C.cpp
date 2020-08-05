#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       string s;
       cin>>s;
       vector<int>v;
       for(int i=0;i<m;i++)
       {
           int x;
           cin>>x;
           v.push_back(x);
       }
       int a[123];
       for(int i=97;i<=122;i++)
       {
           a[i]=0;
       }
       sort(v.begin(),v.end());
       int j=0;
       for(int i=0;i<v.size();i++)
       {
           int k=v[i];
           while(j<k)
           {
               char cd=s[j];
               int in=cd;
               a[in]+=(m-i);
               j++;
           }
       }
        for(int i=0;i<n;i++)
        {
            char xd=s[i];
            int ix=xd;
            a[ix]++;
        }
       for(int i=97;i<123;i++)
        cout<<a[i]<<" ";
       cout<<endl;
    }
}

