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
    ll a,b,k;
    cin>>k>>a>>b;
    if(a>=k && b>=k)
    {
        cout<<(a/k)+(b/k)<<endl;
        r0;
    }
    if(a%k==0 && a>0)
    {
        cout<<(a/k)+(b/k)<<endl;
        r0;
    }
    if(b%k==0 && b>0){
        cout<<(a/k)+(b/k)<<endl;
        r0;
    }
    else
        cout<<"-1";
}
