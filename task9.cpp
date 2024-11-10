#include<iostream>
#include<iomanip>
using namespace std;
void funtion(string code)
{
    string moves[10] = { "Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque"};
    for (int i=0;code[i] != '\0'; i++)
    {
        int num =code[i]- '0';
        int index = (num + i) % 10;
        cout <<moves[index]<<" ";
    }
}
int main()
{
    string code;
    cout <<"Enter the code : ";
    cin >>code;
    for (int i=0;code[i] != '\0'; i++)
    {
        if (code[i] < '0' || code[i] > '9')
        {
            cout <<"Invalid Input ";
            return 0;
        }
    }
    funtion(code);
}