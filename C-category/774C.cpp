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
    ll a,b;
    cin>>a;
    if(a%2)
    {
        a=a-3;
        cout<<"7";
        while(1)
        {
            if(a<=0)
                break;
            a=a-2;
            cout<<"1";
        }
    }
    else
    {
        while(1){
            cout<<"1";
            a=a-2;
            if(a==0)
                break;
          }
    }
}
