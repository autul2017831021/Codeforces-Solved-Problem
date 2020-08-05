/// Shei To mama
#include<bits/stdc++.h>
using namespace std;
main()
{
    long long m,k;cin>>m;
    if(m>3)
    {
        cout<<"143"<<endl<<"91"<<endl<<"77"<<endl;
        for(int i=2;i<=m-2;i++)
        {
            long long ans=77*i;
            cout<<ans<<endl;
        }
    }
    else if(m==3)
    {
        cout<<"143"<<endl<<"91"<<endl<<"77"<<endl;
    }
    else if(m==2)
        cout<<"-1";
}
