#include<iostream>
using namespace std;
bool even_or_odd(string s)
{
    int count =0;
    for (int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    if (count % 2 == 0)
        return true;
    return false;
}
main()
{
    string s;
    cout <<"Enter a string : ";
    cin >>s;
    bool res = even_or_odd(s);
    if (res)
    {
        cout <<"True";
    }
    else 
    {
        cout <<"False";
    }
}
