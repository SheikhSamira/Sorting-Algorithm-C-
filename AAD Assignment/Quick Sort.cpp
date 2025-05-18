#include<iostream>
using namespace std;

void swap(int a[],int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;

}
int partitionT(int a[],int lower,int r)
{
    int pivot=a[r];
    int i=lower-1;
    int j;

    for(j=lower;j<r;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a,i,j);
        }
    }

    swap(a,i+1,r);
    return i+1;
}


void quickS(int a[],int l,int r)
{
    if(l<r)
    {
        int pi= partitionT(a,l,r);

        quickS(a,l,pi-1);
        quickS(a,pi+1,r);
    }
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    quickS(a,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
