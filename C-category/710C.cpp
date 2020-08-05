#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
#define inf 999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES ");
#define no printf("NO ");
#define mone printf("-1 ");
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
bool pusu(pair<ll,ll>a,pair<ll,ll>b)
{
    return b.second>a.second;
}
string ntos(ll n) {
     OS str1 ;
     str1 << n ;
     return str1.str();
}
ll ston(string s) {
     ll x ;
     SS str1(s);
     str1 >> x ;
     return x ;
}
int f[2500][2500]={0};
int a[2500][2500];
void odd(int n)
{
    int mid=(n+1)/2;
    queue<int>o,e;
    for(int i=1;i<=n*n;i++)
    {
        if(i%2)
            o.push(i);
        else
            e.push(i);
    }
    int k=0;
    for(int i=1;i<=mid;i++)
    {
       for(int j=mid;j<=mid+k;j++)
       {
           f[i][j]=1;
       }
       for(int j=mid;j>=mid-k;j--)
       {
           f[i][j]=1;
       }
       k++;
    }
    k=0;
    for(int i=n;i>mid;i--)
    {
       for(int j=mid;j<=mid+k;j++)
       {
           f[i][j]=1;
       }
       for(int j=mid;j>=mid-k;j--)
       {
           f[i][j]=1;
       }
       k++;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(f[i][j]==1){
                de o.front();o.pop();sp;
            }
            else
            {
                de e.front();e.pop();sp;
            }
        }
        nl;
    }
}
main()
{
   int n;
   ne n;
   if(n==1)
   {
       de "1";
       r0
   }
   if(n%2)
   {
       odd(n);
   }
}
