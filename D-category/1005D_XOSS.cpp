#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
main()
{
    string s;
    cin>>s;
    int l=s.sz;
    int ans=0,a=0,b=0;
    for(int i=0;i<l;i++)
    {
        int x=s[i]-'0';
        if(x%3==0 || (x+a)%3==0 || (x+a+b)%3==0)
        {
            ans++;
            a=0;
            b=0;
        }
        else
        {
            b=a;
            a=x;
        }
    }
    cout<<ans;
}
