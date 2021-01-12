#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define inf 10000000000
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
#define mod 1000000007
#define pi acos(-1.0)
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
bool pusu(pair<int,int>a,pair<int,int>b)
{
    if(a.F<b.F || (a.F==b.F && a.S>b.S))return true;
    return false;
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
ll bigmod(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x)%mod;
        y=y>>1;
        x= (x*x)%mod;
    }
    return res;
}
ll Pow(ll x, ll y)
{
    ll res = 1;
    while(y>0)
    {
        if(y&1)
            res = (res*x);
        y=y>>1;
        x= (x*x);
    }
    return res;
}
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
void A()
{

}
void B()
{

}
void C()
{
    int r,c,op=0;
    cin>>r>>c;
    int a[r+10][c+10];
    vc v[35000];
    for(int i=1;i<=r;i++){
        string s;ne s;
        for(int j=1;j<=c;j++){
            a[i][j]=s[j-1]-'0';
        }
    }
    for(int j=1;j<=c-2;j++){
        for(int i=1;i<r;i++){
            if(a[i][j]==0)continue;
            op++;
            v[op].pb(i);v[op].pb(j);
            v[op].pb(i);v[op].pb(j+1);
            v[op].pb(i+1);v[op].pb(j+1);
            a[i][j]=0;
            a[i][j+1]=(a[i][j+1]+1)%2;
            a[i+1][j+1]=(a[i+1][j+1]+1)%2;
        }
        if(a[r][j]==1){
            op++;
            v[op].pb(r);v[op].pb(j);
            v[op].pb(r);v[op].pb(j+1);
            v[op].pb(r-1);v[op].pb(j+1);
            a[r][j]=0;
            a[r][j+1]=(a[r][j+1]+1)%2;
            a[r-1][j+1]=(a[r-1][j+1]+1)%2;
        }
    }
    int R=r;
    for(int j=c-1;;){
        if(r%2){
            R--;
            if(a[r][j]==a[r][j+1] && a[r][j]==1){
                op++;
                v[op].pb(r);v[op].pb(j);
                v[op].pb(r);v[op].pb(j+1);
                v[op].pb(r-1);v[op].pb(j+1);
                a[r][j]=0;a[r][j+1]=0;
                a[r-1][j+1]=(a[r-1][j+1]+1)%2;
            }
            else if(a[r][j]!=a[r][j+1]){
                if(a[r][j]==1){
                    op++;
                    v[op].pb(r);v[op].pb(j);
                    v[op].pb(r-1);v[op].pb(j);
                    v[op].pb(r-1);v[op].pb(j+1);
                    a[r][j]=0;
                    a[r-1][j]=(a[r-1][j]+1)%2;
                    a[r-1][j+1]=(a[r-1][j+1]+1)%2;
                }
                else{
                    op++;
                    v[op].pb(r);v[op].pb(j+1);
                    v[op].pb(r-1);v[op].pb(j);
                    v[op].pb(r-1);v[op].pb(j+1);
                    a[r][j+1]=0;
                    a[r-1][j]=(a[r-1][j]+1)%2;
                    a[r-1][j+1]=(a[r-1][j+1]+1)%2;
                }
            }
        }
        for(int i=1;i<=R;i=i+2){
            int one=0;
            if(a[i][j]==1)one++;
            if(a[i+1][j]==1)one++;
            if(a[i][j+1]==1)one++;
            if(a[i+1][j+1]==1)one++;
            if(one==4){
                op++;
                v[op].pb(i);v[op].pb(j);
                v[op].pb(i);v[op].pb(j+1);
                v[op].pb(i+1);v[op].pb(j+1);
                op++;
                v[op].pb(i+1);v[op].pb(j);
                v[op].pb(i);v[op].pb(j);
                v[op].pb(i);v[op].pb(j+1);
                op++;
                v[op].pb(i+1);v[op].pb(j);
                v[op].pb(i+1);v[op].pb(j+1);
                v[op].pb(i);v[op].pb(j+1);
                op++;
                v[op].pb(i);v[op].pb(j);
                v[op].pb(i+1);v[op].pb(j);
                v[op].pb(i+1);v[op].pb(j+1);
            }
            else if(one==3){
                op++;
                if(a[i][j]==1){v[op].pb(i);v[op].pb(j);}
                if(a[i+1][j]==1){v[op].pb(i+1);v[op].pb(j);}
                if(a[i][j+1]==1){v[op].pb(i);v[op].pb(j+1);}
                if(a[i+1][j+1]==1){v[op].pb(i+1);v[op].pb(j+1);}
            }
            else if(one==2){
                op++;
                if(a[i][j]==1){
                    if(a[i+1][j]==1){
                        v[op].pb(i);v[op].pb(j);
                        v[op].pb(i+1);v[op].pb(j);
                        v[op].pb(i+1);v[op].pb(j+1);
                        a[i][j]=(a[i][j]+1)%2;
                        a[i+1][j]=(a[i+1][j]+1)%2;
                        a[i+1][j+1]=(a[i+1][j+1]+1)%2;
                    }
                    else{
                        v[op].pb(i);v[op].pb(j);
                        v[op].pb(i);v[op].pb(j+1);
                        v[op].pb(i+1);v[op].pb(j+1);
                        a[i][j]=(a[i][j]+1)%2;
                        a[i][j+1]=(a[i][j+1]+1)%2;
                        a[i+1][j+1]=(a[i+1][j+1]+1)%2;
                    }
                }
                else{
                    v[op].pb(i);v[op].pb(j+1);
                    v[op].pb(i+1);v[op].pb(j+1);
                    v[op].pb(i+1);v[op].pb(j);
                    a[i][j+1]=(a[i][j+1]+1)%2;
                    a[i+1][j+1]=(a[i+1][j+1]+1)%2;
                    a[i+1][j]=(a[i+1][j]+1)%2;
                }
                one--;
            }
            if(one==1){
                if(a[i][j]==1){
                    op++;
                    v[op].pb(i);v[op].pb(j);v[op].pb(i);v[op].pb(j+1);v[op].pb(i+1);v[op].pb(j+1);
                    op++;
                    v[op].pb(i);v[op].pb(j);v[op].pb(i+1);v[op].pb(j);v[op].pb(i+1);v[op].pb(j+1);
                    op++;
                    v[op].pb(i+1);v[op].pb(j);v[op].pb(i);v[op].pb(j);v[op].pb(i);v[op].pb(j+1);

                }
                else if(a[i+1][j]==1){
                    op++;
                    v[op].pb(i+1);v[op].pb(j);v[op].pb(i);v[op].pb(j);v[op].pb(i);v[op].pb(j+1);
                    op++;
                    v[op].pb(i);v[op].pb(j+1);v[op].pb(i+1);v[op].pb(1+j);v[op].pb(i+1);v[op].pb(j);
                    op++;
                    v[op].pb(i);v[op].pb(j);v[op].pb(i+1);v[op].pb(j);v[op].pb(i+1);v[op].pb(j+1);
                }
                else if(a[i+1][j+1]==1){
                    op++;
                    v[op].pb(i+1);v[op].pb(j);v[op].pb(i+1);v[op].pb(j+1);v[op].pb(i);v[op].pb(j+1);
                    op++;
                    v[op].pb(i);v[op].pb(j);v[op].pb(i);v[op].pb(1+j);v[op].pb(i+1);v[op].pb(j+1);
                    op++;
                    v[op].pb(i);v[op].pb(j);v[op].pb(i+1);v[op].pb(j);v[op].pb(i+1);v[op].pb(j+1);
                }
                else{
                    op++;
                    v[op].pb(i);v[op].pb(j);v[op].pb(i);v[op].pb(j+1);v[op].pb(i+1);v[op].pb(j+1);
                    op++;
                    v[op].pb(i+1);v[op].pb(j);v[op].pb(i+1);v[op].pb(1+j);v[op].pb(i);v[op].pb(j+1);
                    op++;
                    v[op].pb(i+1);v[op].pb(j);v[op].pb(i);v[op].pb(j);v[op].pb(i);v[op].pb(j+1);
                }
            }
        }
        break;
    }
    de op;nl;
    for(int i=1;i<=op;i++){
        for(int j=0;j<v[op].sz;j++){
            de v[i][j];sp;
        }nl;
    }
}
int main()
{
    int t;ne t;
    while(t--)
    {
        //A();
        //B();
        C();
    }
}

