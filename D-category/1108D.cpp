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
string t="RGB";
void kor(int n)
{
    string s;
    ne s;
    int a=0;
    if(n<3)
    {
       for(int i=0;i<n-1;i++)
       {
           if(s[i]==s[i+1])
           {
               a++;
               for(int j=0;j<3;j++)
               {
                   if(s[i]!=t[i])
                    s[i]=t[i];
               }
           }
       }
       de a;nl;
       de s;
       return;
    }
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1]){
                a++;
                ///de i;sp;
            for(int j=0;j<3;j++)
            {
                ///de t[j];sp;de s[i-1];sp;de s[i];sp;de s[i+1];nl;
                if(s[i-1]!=t[j] && t[j]!=s[i+1])
                {
                    s[i]=t[j];break;
                }
            }
            ///de s;nl;
        }
    }
    de a;nl;
    de s;
}
main()
{
   int n;
   ne n;
   kor(n);
}
