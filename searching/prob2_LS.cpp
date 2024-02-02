//find proper position of an element in an given array
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
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<i<<endl;
            break;
        }
        if(arr[i]>key)
        {
            cout<<i<<endl;
            break;
        }
    }
}