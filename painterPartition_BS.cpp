#include<iostream>
#include<climits>
using namespace std;
int findPossible(int arr[],int n,int m,int mid)
{
    int sum=0,painters=1;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>mid)
        {
            sum=arr[i];
            painters++;
        }
    
    }
    return painters;
}
int painterPartition(int boards[],int n,int m)
{
    int totalLength=0,k=0;
    for(int i=0;i<n;i++)
    {
        k=max(k,boards[i]);
        totalLength+=boards[i];
    }
    int low=k,high=totalLength;
    while(low<high)
    {
        int mid=high+(low-high)/2;
        int painters = findPossible(boards,n,m,mid);
        if(painters<=m)
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;
}
int main()
{
    int arr[2000];
    int n,m;
    cout<<"Enter the length of array :"<<endl;
    cin>>n;
    cout<<"Enter the number of days"<<endl;
    cin>>m;
    cout<<"Enter the values of an array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"minimum days required of paint "<<painterPartition(arr,n,m)<<endl;
}