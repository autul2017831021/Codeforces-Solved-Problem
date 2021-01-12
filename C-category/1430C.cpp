#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<pair<ll,ll> > vp;
typedef vector<ll> vc;
typedef map<ll,ll> ml;
typedef ostringstream OS ;
typedef stringstream SS ;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0;
#define F first
#define S second
#define inf 1000000000000
#define ninf -1000000000
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES\n")
#define no printf("NO\n")
#define mone printf("-1\n")
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define modd 1000000007
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main()
{
    int tt;cin>>tt;
    for(int k=0;k<tt;k++)
    {
        ll n;
        ne n;
        priority_queue<ll>q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        vp v;
        for(int i=0;i<n-1;i++){
            ll bal,sal;
            bal=q.top();
            q.pop();
            sal=q.top();
            q.pop();
            v.push_back({bal,sal});
            ll r=(bal+sal)%2;
            bal=(bal+sal)/2;
            if(r==1)bal++;
            q.push(bal);
            if(q.sz==1)break;
        }
        de q.top();nl;
        for(int i=0;i<v.sz;i++){
            de v[i].F;sp;de v[i].S;nl;
        }
    }
}
