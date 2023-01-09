#include<iostream>
using namespace std;
#define max 100
void quick_sort(int a[],int lb,int ub)
{
    int key=a[lb],i=lb,j=ub,n,t=0,swaps=0,comp=0;
    if(i>j)
        return;
    while(i<j)
    {
        while(key>=a[i]&&i<j)
            comp++;
            i++;
        while(key<a[j])
        j--;
    if(i<j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        swaps++;
    }
    }
    a[lb]=a[j];
    a[j]=key;
    swaps++;
    quick_sort(a,lb,j-1);
    quick_sort(a,j+1,ub);
    cout<<"Total swaps"<<swaps<<endl;
    cout<<"Total comparisions"<<comp<<endl;
}
int main()
{
    int a[max];
    int i,t,n;
    cout<<"Enter the no of test cases: "<<endl;
    cin>>t;
    while(t--)
    {
        cout<<"Enter the limit: "<<endl;
        cin>>n;
        cout<<"Enter the elements of array"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        quick_sort(a,0,n-1);
        cout<< "After sorting: ";
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

}

