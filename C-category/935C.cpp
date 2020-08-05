/// Wooohooo AC hoise
#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define eps 1e-7
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}
main()
{
    double R,x1,y1,x2,y2,r=0,x3,y3;
    cin>>R>>x1>>y1>>x2>>y2;
    double dist=distance(x1,y1,x2,y2);
    if(dist>=R)
    {
        cout<<x1<<".00000000000000000 "<<y1<<".00000000000000000 "<<R<<".00000000000000000"<<endl;
    }
    else
    {
        double ex=R-dist;
        r=2*R-ex;
        r=r/2.0;
        double rr=r-dist;
        ///cout<<r<<endl<<rr<<endl;
        for(double i=0.0;i<=360;i+=0.0001)
        {
            double cd,cx,cy,d;
            cd=(i*pi)/180.0;
            cx=(rr*cos(cd))+x1;
            cy=(rr*sin(cd))+y1;
            d=distance(x2,y2,cx,cy);
            double dd=abs(d-r);
            ///cout<<i<<endl<<cd<<endl<<cx<<endl<<cy<<endl<<d+r<<endl<<d<<endl<<"bal"<<endl;
            if(dd<=eps)
            {
                printf("%.15f %.15f %.15f",cx,cy,d);
                break;
            }
        }
    }
}
/*
alternate AC hobe sure..
        double ex=R-dist;
        r=2*R-ex;
        for(double i=0.0;i<=360;i+=0.0001)
        {
            double cd,cx,cy,d;
            cd=(i*pi)/180.0;
            cx=(R*cos(cd))+x1;
            cy=(R*sin(cd))+y1;
            d=distance(x2,y2,cx,cy);
            double dd=abs(d-r);
            ///cout<<i<<endl<<cd<<endl<<cx<<endl<<cy<<endl<<d+r<<endl<<d<<endl<<"bal"<<endl;
            if(dd<=eps)
            {
                printf("%.15f %.15f %.15f",(cx+x2)/2.0,(cy+y2)/2.0,d/2.0);
                break;
            }
        }
*/
