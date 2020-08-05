#include<bits/stdc++.h>
using namespace std;
main()
{
    int q;
    cin>>q;
    while(q--){
    long long n,m,sum=0;
    cin>>n>>m;
    if(n==m)
    {
        cout<<n%10<<endl;
    }
    else if(m>n)
    {
        cout<<"0"<<endl;
    }
    else
    {
        long long j=0,x,y,r,bal=0,sal;
        vector<long long>v;
        x=n/m;
        y=x/10;
        r=x%10;
        for(long long i=1;i<=9;i++)
        {
            sum=sum+(m*i)%10;
        }
        sum=sum*y;
        for(long long i=1;i<=r;i++)
        {
            sum=sum+(m*i)%10;
            //cout<<"bal:"<<sum<<" ";
        }
        //cout<<endl;
        //sum=sum*y+bal;
        cout<<sum<<endl;
    }

}
}
