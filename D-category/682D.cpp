#include<bits/stdc++.h>
using namespace std;
long long dist[1000][1000];
vector<long long>bal;
long long sal;
int lcs(vector<char>a,vector<char>b,long long x,long long y)
{
    reverse(a.begin(),a.end());
    a.push_back(0);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    b.push_back(0);
    reverse(b.begin(),b.end());
    long long l1=x+1;
    long long l2=y+1;
    for(int i=0;i<l1;i++)
    {
        dist[i][0]=0;
    }
    for(int i=0;i<l2;i++)
    {
        dist[0][i]=0;
    }
    for(int i=1;i<l1;i++)
    {
        for(int j=1;j<l2;j++)
        {
            if(a[i]==b[j])
            {
                dist[i][j]=dist[i-1][j-1]+1;
                //sal=a[i];
                //bal.push_back(sal);
            }
            else
                dist[i][j]=max(dist[i-1][j],dist[i][j-1]);
        }
    }
    return dist[l1-1][l2-1];


}
int main()
{
long long x,y,w;
    vector<char>a;
    vector<char>b;
    char l,m;
    cin>>x;cin>>y>>w;
    for(int i=0;i<x;i++)
    {
        cin>>l;
        a.push_back(l);
    }

    for(int i=0;i<y;i++)
    {
        cin>>m;
        b.push_back(m);
    }
     cout<<lcs(a,b,x,y)<<endl;
    return 0;
}
