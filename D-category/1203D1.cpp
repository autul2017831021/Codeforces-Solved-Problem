#include<bits/stdc++.h>
using namespace std;
int pre[200007], post[200007];
int main()
{
    string s,t;
    cin>>s>>t;
    int j=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==t[j])
            pre[j] =i,j++;
    }
    j--;
    for(int i=s.size()-1; i>=0; i--)
        if(s[i]==t[j])
            post[j]=i,j--;

    int ans = max((int)s.size()-pre[t.size()-1]-1,post[0]);

    for(int i=0; i<t.size()-1; i++)
        ans = max(ans,post[i+1]-pre[i]-1);

    cout<<ans<<endl;

    return 0;
}
