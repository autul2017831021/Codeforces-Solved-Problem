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
    int n,c=0;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<int>v;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=t[i])
        {
            if(s[i+1]!=t[i+1] && s[i]!=s[i+1])
            {
                s[i]=t[i];
                s[i+1]=t[i+1];
                c=c+1;
            }
            else
            {
                c++;
                s[i]=t[i];
            }
        }
    }
    if(s[n-1]!=t[n-1])
        c++;
    cout<<c<<endl;
}

