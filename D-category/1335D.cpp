using namespace std;
#include<bits/stdc++.h>
typedef long long  ll;
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
    int t;
    cin>>t;
    while(t--)
    {
        int a[9]={0,5,6,1,7,4,2,3,8};
        vector<string>v;
        for(int i=0;i<9;i++)
        {
            string s;
            cin>>s;
            v.pb(s);
        }
        for(int i=0;i<9;i++)
        {
            string s=v[i];
            if(s[a[i]]=='9')
            {
                s[a[i]]='1';
            }
            else
            {
                s[a[i]]='9';
            }
            cout<<s<<endl;
        }
    }
}
