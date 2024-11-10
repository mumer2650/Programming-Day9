#include<iostream>
using namespace std;
bool is_identical(string arr[],int size)
{
    for (int i=1;i<size;i++)
    { 
        if(arr[0] != arr[i])
        {
            return false;
        } 
    }
    return true;
}
main()
{
    int size;
    cout <<"Enter the size of array : ";
    cin >>size;
    string arr[size];
    if (size <=0)
    {
        cout <<"Enter a valid input (Size must be greater than 0)";
    }
    else 
    {
        cout <<"Enter "<<size<<" numbers ,one per line : "<<endl;
        for (int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        bool res = is_identical(arr,size);
        if (res == true)
        {
            cout <<"True";
        }
        else 
        {
            cout <<"False";
        }
    }
}