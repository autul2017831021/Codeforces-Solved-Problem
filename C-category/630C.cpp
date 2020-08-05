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
    ll a,b,c,x,y;
    cin>>a;
    x=2;
    if(a==1)
    {
        cout<<"2";
        r0;
    }
    for(long long i=2;i<=a;i++)
    {
        ll ans=pow(2,i);
        x+=ans;
    }
    cout<<x;
}

