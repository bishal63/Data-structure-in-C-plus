#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    b[5]=60;
    b[6]=70;
    for(int i=0;i<n+2;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    delete[] a;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }

}