#include <iostream>
#include<algorithm>
using namespace std;
void kelement(int arr[],int n, int k)
{
    sort(arr,arr+n);
    cout<<arr[k-1]<<endl;
    cout<<arr[n-k];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int j = 0;
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];
    }
   int k;
   cin>>k;

   kelement(a,n,k);
}
