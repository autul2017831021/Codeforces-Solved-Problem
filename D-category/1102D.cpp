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
string t="012";
void kor(int n)
{
    string s;
    ne s;
    int m=n/3;
    int a[3]={0};
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            a[1]++;
        else if(s[i]=='2')
            a[2]++;
        else
            a[0]++;
    }
    if(a[0]==a[1] && a[1]==a[2])
    {
        de s;
        return;
    }
    ///replacing zeros
    for(int i=0;i<n;i++){
        if(s[i]!='0')
        {
            if(a[0]>=m)
            {
                break;
            }
            if(s[i]=='1' && a[1]>m)
            {
                s[i]='0';
                a[0]++;
                a[1]--;
            }
            else if(s[i]=='2' && a[2]>m)
            {
                s[i]='0';a[0]++;a[2]--;
            }
        }
    }
    ///replacing twos
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]!=2){
            if(a[2]>=m)
                break;
            if(s[i]=='0' && a[0]>m){
                s[i]='2';
                a[0]--;
                a[2]++;
            }
            else if(s[i]=='1' && a[1]>m){
                s[i]='2';
                a[2]++;
                a[1]--;
            }
        }
    }
    ///replacing ones
       /// with tw0
    for(int i=0;i<n;i++){
        if(s[i]!='1')
        {
            if(a[1]>=m)
            {
                break;
            }
            if(s[i]=='2' && a[2]>m)
            {
                s[i]='1';
                a[1]++;
                a[2]--;
            }
        }
    }
        /// with one
    for(int i=n-1;i>=0;i--){
        if(s[i]!='1')
        {
            if(a[1]>=m)
                break;
            if(s[i]=='0' && a[0]>m){
                s[i]='1';
                a[1]++;
                a[0]--;
            }
        }
    }
    de s;
}
main()
{
   int n;
   ne n;
   kor(n);
}
