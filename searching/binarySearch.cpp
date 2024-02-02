// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6]={2,3,5,6,7,8};
//     int key,start=0,end=5;
//     cin>>key;
//     while(start<=end)
//     {
//         int mid=(start+end)/2;
//         if(arr[mid]==key)
//         {   
//             cout<<"Got it"<<endl;
//             cout<<mid<<endl;
//             break;
//         }
//         else if (arr[mid]<key)
//         {
//             start=mid+1;
//         }
//         else
//         {
//             end=mid-1;
//         }
//     }
//     if(start>end)
//     {
//         cout<<"Key is not found"<<endl;
//     }
// }

// //////////////////////////////////////////////
int BinarySearch(int a[],int num,int value)
{
    int start=0,end=num-1;
    while (start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==value)
        return mid;
        else if (a[mid]<value)
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
    
}
#include<iostream>
using namespace std;
int main()
{
    int n,key;
    int arr[2000];
    cout<<"Enter the length of an array :"<<endl;
    cin>>n;
    cout<<"Enter Value of the key you wanted to search"<<endl;
    cin>>key;
    cout<<"Enter the values of an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Key value present at the index of "<< BinarySearch(arr,n,key)<<endl;
}