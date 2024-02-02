#include<iostream>
using namespace std;
int keyElmntInRoatedArray(int arr[],int n,int key)
{
    int start=0,end=n-1,ans=-1;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>arr[0])
        {
            if(arr[start]<=key && arr[mid]>=key)
            
            end=mid-1;
            
            else
            start=mid+1;
        }
        else
        {
            if(arr[mid]<=key && arr[end]>=key)
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        

    }
    
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
    cout<<"Index of the mountain element is "<<keyElmntInRoatedArray(arr,n,key)<<endl;
}