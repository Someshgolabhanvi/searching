#include<iostream>
using namespace std;
int main()
{
    int arr[2000];
    int n,key,start=0,end=n-1,index=n,mid;
    cout<<"Enter the length of an arrary"<<endl;
    cin>>n;
    cout<<"Enter the key you wanted to search"<<endl;
    cin>>key;
    cout<<"Enter the values of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            index=mid;
            break;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            index=mid;
            end=mid-1;
        }
        
    }
    cout<<index;
    
}