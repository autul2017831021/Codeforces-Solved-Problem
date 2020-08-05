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
void kor()
{
    int n,x,y,an=0;
    ne n;ne x;ne y;
    priority_queue<int,vector<int>,greater<int> >v;
    for(int i=0;i<n;i++){
        int xx;ne xx;v.push(xx);
    }
    while(!v.empty())
    {
        int m=v.top();
        if(max(0,m-x)==0)
        {
            an++;
            v.pop();
          if(!v.empty()){
            m=v.top();
            v.pop();
            m=m+y;
            v.push(m);
          }
        }
        else if(y-x>=0)
        {
            m=v.top();v.pop();
        }
        else{
            an++;
            m=v.top();
            v.pop();
        }
    }
    de an;
}
main()
{
   kor();
}
