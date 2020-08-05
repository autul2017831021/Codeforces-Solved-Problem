#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
typedef long long ll;
main()
{
    ll q,l=0,r=0;
    cin>>q;
    map<ll,ll>m;
    for(int i=1;i<=q;i++)
    {
        char c;
        ll n;
        cin>>c>>n;
        if(i==1)
        {
            m[n]=l;
            l--;
            r++;
        }
        else if(c=='L')
        {
            m[n]=l;
            l--;
        }
        else if(c=='R')
        {
            m[n]=r;
            r++;
        }
        else
        {
            ll pos=m[n];
            ll left=l+1;
            ll right=r-1;
            //cout<<"pos="<<pos<<endl<<"left="<<left<<endl<<"right="<<right<<endl;
            cout<<min((right-pos),(pos-left))<<endl;
        }
    }
}
