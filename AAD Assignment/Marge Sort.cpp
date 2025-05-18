#include<iostream>
using namespace std;

void mergeSort(int a[],int lower,int m,int r)
{
    int size1,size2;
    size1=m-lower+1;
    size2=r-m;

    int larr[size1],rarr[size2];

    for(int i=0;i<size1;i++)
    {
        larr[i]=a[lower+i];

    }
    for(int j=0;j<size2;j++)
    {
        rarr[j]=a[m+1+j];
    }

    int i=0,j=0,k=lower;

    while(i<size1&&j<size2)
    {
        if(larr[i]<=rarr[j])
        {
            a[k]=larr[i];
            i++;
        }

        else
        {
           a[k]=rarr[j];
           j++;

        }
        k++;
    }

    while(i<size1)
    {
        a[k]=larr[i];
        i++;
        k++;
    }

    while(j<size2)
    {
        a[k]=rarr[j];
        j++;
        k++;
    }
}

void mergs(int a[],int lower,int upper)
{
    if(lower<upper)
    {
        int mid=(lower+upper)/2;
        mergs(a,lower,mid);
        mergs(a,mid+1,upper);

        mergeSort(a,lower,mid,upper);
    }
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a[n];

     cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergs(a,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
