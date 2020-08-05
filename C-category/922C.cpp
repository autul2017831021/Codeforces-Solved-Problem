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
    ll n,k;
    cin>>n>>k;
    if(k==1 || (n==1 && k==2))
    {
        cout<<"YES";
        r0;
    }
    if(k>=n || k>100)
    {
        cout<<"NO"<<endl;
        r0;
    }
    bool f=1;
    for(int i=1;i<=k;i++)
    {
        if(n%i!=(i-1))
        {
            cout<<"NO";
            r0;
        }
    }
    cout<<"YES"<<endl;
}
