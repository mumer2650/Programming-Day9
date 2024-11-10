#include<iostream>
using namespace std;
void num_of_common(string s1,string s2)
{
    int count =0;
    string s="";
    for (int i=0;s1[i] != '\0';i++)
    {
        for (int j=0;s2[j] != '\0'; j++)
        {
            if(s1[i] == s2[j] )
            {
                s2[j] = '*';
                s += s1[i];
                count ++;
                break;
            }
        }
    }
    cout <<"The string has "<<count <<" numbers in common ";
}
main()
{
    string s1,s2;
    cout <<"Enter the first string : ";
    cin >>s1;
    cout <<"Enter the second  string : ";
    cin >>s2;
    num_of_common(s1,s2);
}