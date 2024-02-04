#include<iostream>
#include<climits>
using namespace std;
int findDays(int weights[],int n,int cap)
{
    int days=1,load=0;
    for(int i=0;i<n;i++)
    {
        if(weights[i]+load>cap)
        {
            days+=1;
            load=weights[i];
        }
        else
        {
            load+=weights[i];
        }
    }
    return days;
}
int shipWithinDays(int weights[],int n, int days)
{
    int low=0,high=0;
        for(int i=0;i<n;i++)
    {
        low=max(low,weights[i]);
        high+=weights[i];
    }
    int start=low,end=high;
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int numberOfDays=findDays(weights,n,mid);
            if(numberOfDays<=days){
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return start;
}
int main()
{
    int arr[2000];
    int n,m;
    cout<<"Enter the length of a weights:"<<endl;
    cin>>n;
    cout<<"Enter the number days to allocate"<<endl;
    cin>>m;
    cout<<"Enter the values of a weights :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"min wiights to be shiped per day is "<<shipWithinDays(arr,n,m)<<endl;
}