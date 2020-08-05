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
    ll n,c=0,t=0,th=0,f=0,s=0;
    cin>>n;
    ll ans=(n/2)+(n/3)-(n/6)+(n/5)-(n/10)-(n/15)+(n/7)-(n/14)-(n/21)-(n/35)+(n/30)+(n/42)+(n/70)+(n/105)-(n/210);
    //cout<<ans<<endl;
    cout<<n-ans<<endl;
}
/// inculsion exculsion
///
/// | a U b U c U d | = |a|+|b|+|c|+|d| - | a Intersection b| - | a Intersection c| - | a Intersection d|
///                     - | b Intersection c| - | b Intersection d| - | c Intersection d |
///                     + | a Intersection b Intersection c | + | a Intersection b Intersection d |
///                     + | a Intersection c Intersection d | + | b Intersection c Intersection d |
///                     - | a Intersection b Intersection c Intersection d |
