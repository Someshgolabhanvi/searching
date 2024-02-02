//first and last occurence of an element in a sorted array
#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n,int key)
{
    int start=0,end=n-1,mid,first=-1;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            first=mid;
            end=mid-1;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else
            end=mid-1;
        
    }
    return first;
}
int lastOccurence(int arr[],int n,int key)
{
    int start=0,end=n-1,mid,last=-1;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            last=mid;
            start=mid+1;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else
            end=mid-1;
    }
    return last;
}
int main()
{
    int arr[2000];
    int n,key;
    cout<<"Enter the length of an array :"<<endl;
    cin>>n;
    cout<<"Enter Value of the key you wanted to search"<<endl;
    cin>>key;
    cout<<"Enter the values of an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<firstOccurence(arr,n,key)<<" "<<lastOccurence(arr,n,key)<<endl;
}