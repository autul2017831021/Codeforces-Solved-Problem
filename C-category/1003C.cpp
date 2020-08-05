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
    dl n,k,s=0;
    cin>>n>>k;
    vector<dl>v,w,a;
    v.pb(0);w.pb(0);
    for(int i=1;i<=n;i++)
    {
        dl x;
        cin>>x;
        s+=x;
        v.pb(x);
        w.pb(s);
    }
    for(int i=1;i<=n;i++)
    {
        dl x=w[i-1];
        int j=i+k-1;
        while(1)
        {
            if(n<j)
                break;
            //cout<<"i->"<<i<<" j->"<<j<<endl;
            dl ans;
            dl bal=j-i+1;
            ans=(w[j]-x)/(bal);
            a.pb(ans);
            j++;
        }
    }
    sort(a.rbg,a.ren);
    printf("%0.10f\n",a[0]);
}


