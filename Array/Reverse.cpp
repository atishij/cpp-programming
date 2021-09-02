#include <iostream>

using namespace std;
int reverse(int arr[] , int n , int start , int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
   cout<<"Oringinal Array "<<endl;
   for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
   reverse(arr,n,0,n-1);
   cout<<"Reversed Array "<<endl;
   for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
  
  
   return 0;
}
