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
    if(n==0)
    {
        cout<<"1";
        r0;
    }
    ll x=n+1;
    x=x*3*n;
    x++;
    cout<<x<<endl;
}


