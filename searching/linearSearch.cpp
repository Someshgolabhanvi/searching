#include<iostream>
using namespace std;
int main()
{
    int n;
    int key;
    int arr[2000];
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    cout<<"enter the array values :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter a key you wanted to search :"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
    if(arr[i]==key)
    {
        cout<<"key present at index "<<i<<endl;
    }
    }
    cout<<"enter a valued key"<<endl;

}