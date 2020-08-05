#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
bool isPrime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
main()
{
    int n,k,a=1,b;
    cin>>n;
    vector<int>v;
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            a=1;
            while(1)
            {
                a=a*i;
                if(a<=n)
                {
                    v.pb(a);
                }
                else
                    break;
            }
        }
    }
    cout<<v.sz<<endl;
    for(int i=0;i<v.sz;i++)
    {
        cout<<v[i]<<" ";
    }

}

