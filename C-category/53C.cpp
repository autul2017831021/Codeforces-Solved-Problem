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
   int n;
   vector<int>v;
   cin>>n;
   for(int i=1;i<=(n+1)/2;i++)
   {
       v.pb(i);
       v.pb(n-i+1);
   }
   if(n%2==0){
      for(int i=0;i<v.sz;i++)
        cout<<v[i]<<" ";
     r0;
   }
    for(int i=0;i<v.sz-1;i++)
        cout<<v[i]<<" ";
}
