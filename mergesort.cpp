#include<iostream>
using namespace std;
#define max 100
void merge_sort(int[],int[],int,int);
void merge(int[],int[],int,int,int);
void merge_sort(int a[],int t[],int lb,int ub)
{
    int mid=0;
    if(lb<ub)
        {
            mid=(lb+ub)/2;
            merge_sort(a,t,lb,mid);
            merge_sort(a,t,mid+1,ub);
            merge(a,t,lb,mid,ub);

        }
}
void merge(int a[],int t[],int lb,int mid,int ub)
{
    int k=lb, i=lb,j=mid+1,comp;
    while(i<=mid && j<=ub)
    {
        comp++;
        if(a[i]<a[j])
        {
            comp++;
            t[k]=a[i];
            i++;
            k++;
        }
        else
        {
            comp++;
            t[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        comp++;
        t[k]=a[i];
        i++;
        k++;

    }
    while(j<=ub)
    {
        comp++;
        t[k]=a[j];
        k++;
        j++;
    }
    for(k=lb;k<=ub;k++)
    {
      a[k]=t[k];
    }
    cout<<"comparisions :"<<comp;
}

int main()
{
    int a[max],t[max];
    int i,n,j,k;
    cout<<"Enter no of test cases:";
    cin>>k;
    for(j=0;j<k;j++)
    {
        cout<<"enter the limit: ";
        cin>>n;
        for(i=0;i<n;i++)
        {
          cin>>a[i];
        }
        merge_sort(a,t,0,n-1);
        //merge(a,t,0,(n/2),n);
        cout<<"sorted array: ";
        for(i=0;i<n;i++)
        {
          cout<<a[i]<<" ";
        }

    }
    //printf("\n");
    return 0;
}

