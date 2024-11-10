#include<iostream>
using namespace std;
int function(string arr[],int size)
{
    int count = 0,sum =0;
    for (int i=0;i<size-1;i++)
    {
        count = 0;
        for (int j=i+1;j<size;j++)
        {
            if(arr[i] != arr[j])
            {
                count++;
                break;
            }
            else 
            {
                i=j;
                continue;
            }
        }
        sum += count;
    }
    return (2*size) + sum;
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
        int res = function(arr,size);
        cout <<res;
    }
}