#include<iostream>
#include<climits>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid)
{
    int studentsReq=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mid)
        {
            return false;
        }
        if(sum+arr[i]>mid)
        {
            studentsReq++;
            sum=arr[i];
            if(studentsReq>m)
            {
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}



int bookAllocation(int arr[],int n,int m)
{
    int sum=0;
    if(n<m){
        return -1;
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    int start=0,end=sum,ans=INT_MAX;
    while (start<=end)
    {
        int mid =start+(end-start)/2;
        if(isPossible(arr,n,m,mid))
        {
            ans=min(ans,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    return ans;
    
}
int main()
{
    int arr[2000];
    int n,m;
    cout<<"Enter the length of an array or number of books :"<<endl;
    cin>>n;
    cout<<"Enter the number of student to allocate"<<endl;
    cin>>m;
    cout<<"Enter the values of an array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Book allocations for a student"<<bookAllocation(arr,n,m)<<endl;
}