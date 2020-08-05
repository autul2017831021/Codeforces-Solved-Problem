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
#define inf 9999999999
main()
{
    string s1;
    cin>>s1;
    string s2="heidi";
    if(s1==s2)
    {
        cout<<"YES"<<endl;
        r0;
    }
    ll n=s1.size();
    ll m=s2.size();
    ll arr[m+1][n+1];
    for(int i=0;i<=s2.size();i++)
    {
        for(int j=0;j<=s1.size();j++)
        {
            if(i==0 || j==0)
                arr[i][j]=0;
            else if(s2[i-1]==s1[j-1])
            {
                arr[i][j] = arr[i-1][j-1]+1;
            }
            else
            {
                arr[i][j] = max(arr[i][j-1],arr[i-1][j]);
            }

        }
    }
    ll l=arr[m][n];
    if(l==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

