#include <iostream>
#include<algorithm>
using namespace std;
void negative_element(int a[],int n)
{
    int j = 0;
    for(int i = 0 ;i<n;i++)
    {
        if(a[i] < 0)
        {
            if(i!=j)
            {
                swap(a[i],a[j]);
            }
        j++;
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
   negative_element(a,n);
   for (int i = 0; i < n; i++)
   {
       /* code */
       cout<<a[i]<<" ";
   }
   

}
