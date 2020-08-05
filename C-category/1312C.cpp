#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        ll n,k,c=0;
        cin>>n>>k;
        vector<ll>v;
        bool f=1;
        ll a[100]={0};
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<v.size();i++)
        {
            ll x=v[i];
            ll j=0;
            while(x)
            {
                ll r=x%k;
                x=x/k;
                a[j]+=r;
                if(a[j]>1)
                {
                    f=0;
                    break;
                }
                j++;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
