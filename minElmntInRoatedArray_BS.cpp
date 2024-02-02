#include<iostream>
using namespace std;
int minElmntInRoatedArray(int arr[],int n)
{
    int ans=arr[0];
    int start=0,end=n-1,mid;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            ans=arr[mid];
            end=mid-1;
        }
        
    }
    return ans;
    
    

}
int main()
{
    int arr[1000];
    int n,key;
    cout<<"Enter the length of an array"<<endl;
    cin>>n;
    cout<<"Enter the values of an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Index of the mountain element is "<<minElmntInRoatedArray(arr,n)<<endl;
}