#include<iostream>
using namespace std;
string check_7(string numbers[],int size)
{
    for(int i=0;i<size;i++)
    {
        for (int j=0;numbers[i][j] != '\0';j++)
        {
            if(numbers[i][j] == '7')
            {
                return "Boom!";
            }
        }
    }
    return "there is no 7 in the array";
}
main()
{
    int size;
    cout <<"Enter the size of array : ";
    cin >>size;
    string numbers[size];
    if (size <=0)
    {
        cout <<"Enter a valid input (Size must be greater than 0)";
    }
    else 
    {
        cout <<"Enter "<<size<<" numbers ,one per line : "<<endl;
        for (int i=0;i<size;i++)
        {
            cin>>numbers[i];
        }
        string res = check_7(numbers,size);
        cout <<res;
    }
}