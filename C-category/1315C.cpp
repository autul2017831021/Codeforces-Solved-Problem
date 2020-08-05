#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<bool>f(2*n+1,0);
        vector<int>v(2*n,-1);
        for(int i=0;i<2*n;i=i+2)
        {
            cin>>v[i];
            f[v[i]]=1;
        }
        for(int i=1;i<2*n;i=i+2)
        {
            for(int j=v[i-1]+1;j<=2*n;j++)
            {
                if(f[j]==0)
                {
                    v[i]=j;
                    f[j]=1;
                    break;
                }
            }
        }

        bool k=1;
        for(int i=1;i<2*n;i=i+2)
        {
            if(v[i]==-1)
            {
                k=0;
                break;
            }
        }
        if(k==0)
            cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<2*n;i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}
