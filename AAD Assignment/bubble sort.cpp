#include<iostream>
using namespace std;
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

    for(int pass=0;pass<n-1;pass++)
    {
        for(int i=0;i<n-pass-1;i++)
        {
            if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
