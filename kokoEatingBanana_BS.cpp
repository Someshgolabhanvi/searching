#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
long long findMax(int v[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,v[i]);
    }
return maxi;
}
long long calculateTotalHours(int v[],int n, int hourly)
{
    long long totalH=0;
    for(int i=0;i<n;i++)
    {
       totalH+=ceil((double)v[i]/(double)hourly);
    }
    return totalH;
}
long long minEatingSpeed(int v[],int n, int h) {
        long long low=1,high=findMax(v,n);
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            long long totalH = calculateTotalHours(v,n,mid);
            if(totalH<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
int main()
{
    int arr[2000];
    int n,h;
    cout<<"Enter the length of a weights:"<<endl;
    cin>>n;
    cout<<"Enter the number days to allocate"<<endl;
    cin>>h;
    cout<<"Enter the values of a weights :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"min wiights to be shiped per day is "<<minEatingSpeed(arr,n,h)<<endl;
}