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
#define inf -9999999999
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,in,ik;
        cin>>n>>k;
        string s;
        cin>>s;
        priority_queue<ll,vector<ll>,greater<ll> >q,p;
        for(ll i=0;i<s.sz;i++)
        {
            if(s[i]=='0' && i>0)
            {
                q.push(i);
            }
            else if(s[i]=='1' && i!=s.sz-1)
            {
                p.push(i);
            }
        }
        while(!q.empty())
        {
            in=q.top();
            q.pop();
            //cout<<"in->"<<in<<endl;
            while(!p.empty())
            {
                ik=p.top();
                //cout<<"ik->"<<ik<<endl;
                if(in-ik<=0)
                    break;
                else if(in-ik<=k)
                {
                    p.pop();
                    swap(s[in],s[ik]);
                    k=k-(in-ik);
                    p.push(in);
                    //cout<<"k->"<<k<<endl;
                    break;
                }
                else
                    p.pop();
            }
            if(k<=0 || p.sz==0)
                break;
        }
        cout<<s<<endl;
    }
}
