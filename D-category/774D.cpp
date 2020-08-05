#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++){
      L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++){
       R[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
main()
{
    int n,l,r,s=0,t=0,x;
    scanf("%d %d %d",&n,&l,&r);
    int a[n],b[n],v[n],w[n];
    int j=0;
    for(int i=1;i<=n;i++)
    {
       scanf("%d",&x);
       if(i<l || i>r)
       {
           a[s]=x;
           s++;
       }
       else
       {
           v[t]=x;
           t++;
       }
    }
    s=0;
    t=0;
    for(int i=1;i<=n;i++)
    {
       scanf("%d",&x);
       if(i<l || i>r)
       {
           b[s]=x;
           s++;
       }
       else
       {
           w[t]=x;
           t++;
       }
    }
    for(int i=0;i<s;i++)
    {
        if(a[i]!=b[i])
        {
            printf("LIE");
            return 0;
        }
    }
    mergeSort(v,0,t-1);
    mergeSort(w,0,t-1);
    for(int i=0;i<t;i++)
    {
        if(v[i]!=w[i])
        {
            printf("LIE");
            return 0;
        }
    }
    printf("TRUTH");
    return 0;
}

