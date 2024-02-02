#include<iostream>
#include<math.h>
using namespace std;
int sqrtNum(int x)
{
    int start=0,end=x,mid,ans;
        if(x<2)
        return x;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if(mid==x/mid)
        {
           return mid;
        }
        else if (mid<x/mid)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {end=mid-1;}
    }
    return ans;

        if(x<=0) return false;
    
}
int main()
{
    int x,start=1,end=x,mid,ans;
    cin>>x;
    cout<<sqrtNum(x);
    
}