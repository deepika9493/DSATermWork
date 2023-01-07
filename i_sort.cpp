#include <iostream>
#define  max 100
using namespace std;
void i_sort(int a[],int n)
{
    int i,j,t,comp=0,shifts=0;
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0&&t<a[j])
        {

            shifts++;
            comp++;
            a[j+1]=a[j];
            j--;
        }
        shifts++;
        a[j+1]=t;
    }
        cout<<"Total comparisions: "<<comp<<endl;
        cout<<"Total shifts: "<<shifts<<endl;
}
int main()
{
    int a[max],t,i,j,k,n;
    cout<<"Enter the no of test cases: "<<endl;
    cin>>k;
    for(j=1;j<k;j++)
    {
        cout<<"Enter the limit: "<<endl;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        i_sort(a,n);
        cout<<"Sorted array : "<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
