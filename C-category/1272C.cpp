#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k;
    long long c=0,sum=0;
    cin>>n>>k;
    string s;
    bool f[123];
    for(int i=97;i<123;i++)
        f[i]=false;
    cin>>s;
    char dhon;
    for(int i=0;i<k;i++)
    {
        cin>>dhon;
        int x=dhon;
        //cout<<dhon<<" "<<x<<endl;
        f[x]=true;
    }

    for(int i=0;i<s.size();i++)
    {
      char bal=s[i];
      int xx=bal;
      if(f[xx])
      {
        c++;
      }
      else
      {
        sum+=((c*(c+1))/2);
        c=0;
      }
    }
    sum+=((c*(c+1))/2);
    cout<<sum<<endl;
}
/*
26 26
abcdefghijklmnopqrstuvwxyz
a b c d e f g h i j k l m n o p q r s t u v w x y z


*/
