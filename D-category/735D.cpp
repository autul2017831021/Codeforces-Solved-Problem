#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime(ll x)
{
    for(ll i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
main()
{
    ll n,c=0;
    scanf("%lld",&n);
    if(isPrime(n))
    {
        cout<<"1";
        return 0;
    }
    else if(isPrime(n-2))
    {
        cout<<"2";
        return 0;
    }
    else
    {
        if(n%2==0)
        {
            cout<<"2";
            return 0;
        }
        else
        {
            cout<<"3";
            return 0;
        }
    }
}
