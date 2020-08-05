#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        k=3;
        cin>>n;
        bool f=1;
        while(f)
        {
            bool bal=1;
            ll x;
            x=n;
            ll a[40]={0};
            ll in=0;
            while(x)
            {
                ll r=x%3;
                x/=3;
                a[in]+=r;
                if(a[in]>1)
                {
                    n++;
                    bal=0;
                    break;
                }
                in++;
            }
            if(bal)
            {
                cout<<n<<endl;
                break;
            }
        }

    }
}
// 1000000000000000000
