#include<iostream>
using namespace std;
void transformation(int arr[],int num,int size)
{
    for (int i=1;i<=num;i++)
    {
        for (int j=0;j<size;j++)
        {
            if(arr[j] % 2 == 0)
            {
                arr[j] -= 2;
            }
            else 
            {
                arr[j] += 2;
            }
        }
    }
    for(int k=0;k<size;k++)
    {
        cout <<arr[k]<<" ";
    }
}
main()
{
    int size,num;
    cout <<"Enter the size of array : ";
    cin >>size;
    cout <<"Enter the number of times even odd transformation needed to be done  : ";
    cin >>num;
    int arr[size];
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
        transformation(arr,num,size);
    }
}