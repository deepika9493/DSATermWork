#include<iostream>
using namespace std;
#define max 100
void sel_sort(int a[],int n)
{
int i,j,pvar,min=0;
for(i=0;i<n-1;i++)
{
min=a[i];
pvar=i;
for(j=i+1;j<n;j++)
{
if(min>a[j])
{
min=a[j];
pvar=j;
}
}
if(pvar!=i)
{
a[pvar]=a[i];
a[i]=min;
}
}
}
int main()
{
int a[max];
int n,i,j;
cout<<"enter limit";
cin>>n;
for(i=0;i<n;i++)
{
   cin>>a[i];
}
sel_sort(a,n);
cout<<"sorted array: \n";
for(i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}
//printf("\n");
return 0;
}
