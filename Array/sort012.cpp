#include <iostream>
#include<algorithm>
using namespace std;
void sort_array(int a[] , int n)
{
    int low = 0 , mid = 0 , high = n-1;
    while(mid<high)
    {
        if(a[mid] == 0)
        {
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if(a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
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
   sort_array(a,n);
   for (int i = 0; i < n; i++)
   {
       /* code */
       cout<<a[i]<<" ";
   }
   

}
