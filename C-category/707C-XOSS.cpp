#include<bits/stdc++.h>
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
main()
{
    ll n;
    cin>>n;
    if(n==1 || n==2)
    {
        cout<<"-1";
        r0;
    }
    if(n%2==0)
    {
        ll xx=n/2;
        cout<<xx*xx-1<<" "<<xx*xx+1<<endl;
    }
    else
    {
        ll x=n*n;
        ll c=(x+1)/2;
        ll b=(x-1)/2;
        cout<<b<<" "<<c;
    }
}


