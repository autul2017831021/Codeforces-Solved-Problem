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
main()
{
    dl a,b,c,x,y;
    cin>>a>>b>>c;
    if(a==0 || (b==0 && c>0 && a>0) || (b==0 && c<0 && a<0) )
    {
        cout<<"0.000000 "<<endl<<"0.000000";
    }
    else
    {
        dl bb;
        bb=b*b-4*a*c;
        bb=sqrt(bb);
        x=(b+bb)/(2*a);
        x=x*-1;
        y=(bb-b)/(2*a);
        dl bal,sal;
        bal=max(x,y);
        sal=min(x,y);
        printf("%.6f \n%.6f",bal,sal);
    }
}
