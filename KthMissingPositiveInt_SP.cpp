#include<iostream>
using namespace std;
int KthMissingElmnt(int arr[],int n,int k)
{
    int start=0,end=n-1,ans=-1;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k)
        {
            ans=mid;
            end=mid-1;
        }
        else
        start=mid+1;
    }
    
    return ans+k;
    
}
int main()
{
    int arr[1000];
    int n,key;
    cout<<"Enter the length of an array"<<endl;
    cin>>n;
    cout<<"ENter the key elemnt wanted"<<endl;
    cin>>key;
    cout<<"Enter the values of an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Index of the mountain element is "<<KthMissingElmnt(arr,n,key)<<endl;
}