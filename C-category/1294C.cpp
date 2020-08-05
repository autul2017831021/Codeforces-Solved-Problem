#include <bits/stdc++.h>
using namespace std;
void printDivisors(long long n,long long h)
{
    vector<long long>v;
    long long e=0,o=0;
    for (long long i=1; i<=h; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i){
                v.push_back(i);
            }
            else {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=1;i<v.size()-2;i++)
    {
        for(int j=i+1;j<v.size()-1;j++)
        {
            for(int k=j+1;k<v.size();k++)
            {
                long long r=v[i]*v[j]*v[k];
                if(r==n)
                {
                    cout<<"YES"<<endl<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                    return;
                }
            }
        }

    }
    cout<<"NO"<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){
    long long n,k;cin>>n;long long h=sqrt(n);
    printDivisors(n,h);
    }
}

