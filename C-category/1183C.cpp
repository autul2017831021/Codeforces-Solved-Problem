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
    int t;
    cin>>t;
    while(t--)
    {
        ll k,n,a,b;
        cin>>k>>n>>a>>b;
        if((n*b)>=k)
        {
            cout<<"-1"<<endl;
        }
        else if(n*a<k)
        {
            cout<<n<<endl;
        }
        else if(n*a==k)
        {
            cout<<n-1<<endl;
        }
        else
        {
            ll bal=n*a-k;
            ll d=a-b;
            if(bal%a==0)
            {
                ll ans=bal/d;
                ans=ans+1;
                cout<<n-ans<<endl;
            }
            else
            {
                ll ans=bal/d;
                ans++;
                cout<<n-ans<<endl;
            }
        }

    }
}
