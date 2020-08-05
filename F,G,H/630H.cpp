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
    ll n,x,y;
    cin>>n;
    x=n*(n-1)*(n-2)*(n-3)*(n-4);
    y=(x/120)*x;
    cout<<y<<endl;
}
