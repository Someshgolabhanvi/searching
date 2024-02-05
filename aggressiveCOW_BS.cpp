#include<iostream>
#include<climits>
using namespace std;
int aggressiveCow(int stalls[],int n,int k)
{
int start=1,end,mid,ans;
        //sort(stalls.begin(),stalls.end());
        end=stalls[n-1]-stalls[0];
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int count=1,pos=stalls[0];
            for(int i=1;i<n;i++)
            {
                if(pos+mid<=stalls[i])
                {
                    count++;
                    pos=stalls[i];
                }
            }
            if(count<k)
            {
                end=mid-1;
            }
            else
            {
                ans=mid;
                start=mid+1;
            }
        }
        return ans;


}
int main()
{
    int arr[2000];
    int n,m;
    cout<<"Enter the length of an array or number of stalls :"<<endl;
    cin>>n;
    cout<<"Enter the number of cow to allocate"<<endl;
    cin>>m;
    cout<<"Enter the values of a distance between stals:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"min distance between the stalls for a cows"<<aggressiveCow(arr,n,m)<<endl;
}