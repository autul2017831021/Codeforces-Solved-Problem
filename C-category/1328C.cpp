#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        vector<int>v,a,b;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            int bal=s[i]-'0';
            v.push_back(bal);
        }
        int shona=v[0];
        if(v[0]==2)
        {
            a.push_back(1);
            b.push_back(1);
        }
        else if(v[0]==1)
        {
            a.push_back(2);
            b.push_back(2);
        }
        bool fir=0;
        for(int i=1;i<s.size();i++)
        {
            int dd=v[i];
            if(dd==0)
            {
                a.push_back(0);b.push_back(0);
            }
            else if(dd==1)
            {
                if(fir==0){
                    a.push_back(1);b.push_back(0);
                }
                else
                {
                    a.push_back(0);b.push_back(1);
                }
            }
            else
            {
                if(fir==0){
                    a.push_back(1);b.push_back(1);
                }
                else
                {
                    a.push_back(0);b.push_back(2);
                }
            }
            if(v[i]==1)
                fir=1;
        }
        for(int i=0;i<s.size();i++)
            {cout<<a[i];}
        cout<<endl;
        for(int i=0;i<s.size();i++)
            {cout<<b[i];}
        cout<<endl;

    }
}
