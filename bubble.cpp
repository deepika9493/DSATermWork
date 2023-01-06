#include<iostream>
using namespace std;
#define max 100
void b_sort(int a[],int n)
{
    int i,j,t=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
int main()
{
    int a[max];
    int n,i;
    cout<<"enter the limt";
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    b_sort(a,n);

    cout<<"sorted array: \n";
    for(i=0;i<n;i++)
    {
     cout<<a[i]<<" ";
    }
    return 0;
}
