#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int q;
    cin>>q;
    while(q--)
    {
      vector<long long>v;
      ll n;
      cin>>n;
      vector<ll>w;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            w.push_back(x);
        }
      sort(w.begin(),w.end());
      ll ans=w[0]*w[n-1];
      ll h=sqrt(ans);
        for(long long i=1;i<=h;i++)
        {
          if(ans%i==0)
          {
            if(ans/i==i){
                v.push_back(i);
            }
            else {
                v.push_back(i);
                v.push_back(ans/i);
            }
          }
       }
       sort(v.begin(),v.end());
       bool f=0;
       if(w.size()==v.size()-2){
            for(int i=0;i<w.size();i++)
            {
                if(w[i]==v[i+1])f=1;
                else
                {
                    f=0;
                    break;
                }
            }
            if(f)
                cout<<ans<<endl;
            else
                cout<<"-1"<<endl;
       }
       else
          cout<<"-1"<<endl;
    }
}
