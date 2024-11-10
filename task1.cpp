#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
void gotoxy(int X,int Y)
{
	COORD coordinates;
	coordinates.X=X;
	coordinates.Y=Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
string fruits[4] = {"peach", "apple", "guava", "watermelon"};
int price[4] = {60, 70, 40, 30};
int U_price[4];
void calculate_price(string fruit[],int quantity[],int size)
{
    int total_price=0;
    system("cls");
    gotoxy(20,5);
	cout <<"Fruit Name";
	gotoxy(40,5);
	cout <<"Quantity";
	gotoxy(60,5);
	cout <<"Unit Price";
	gotoxy(80,5);
	cout <<"Total Price";
    for (int i=0;i<size;i++)
    {
        gotoxy(22,7+i);
        cout <<fruit[i];
    }
    for (int j=0;j<size;j++)
    {
        gotoxy(42,7+j);
        cout <<quantity[j];
    }
    for (int k=0;k<size;k++)
    {
        gotoxy(62,7+k);
        cout <<U_price[k];
    }
    for (int l=0;l<size;l++)
    {
        gotoxy(82,7+l);
        cout <<U_price[l] * quantity[l];
        total_price += (U_price[l] * quantity[l]);
    }
    gotoxy(20,13);
    cout <<"Total Price : "<<total_price;
} 
int main()
{
    int size;
    cout <<"How many fruits you want to enter (Maximum 4): "; 
    cin >>size;
    if (size <= 0 && size >4)
    {
        cout <<"Invalid SIze ";
        return 0;
    }
    cout <<"You can Enter only peach, apple, guava or  watermelon"<<endl;
    string fruit[size];
    int quantity[size];
    for (int i=0;i<size;i++)
    {
        cout <<"Enter Fruit : "<<i+1<<" : ";
        cin >>fruit[i];
        bool found = false;
        for (int j=0;j<4;j++)
        {
            if (fruits[j] == fruit[i])
            {
                U_price[i] = price[j];
                found = true;
                break;
            }
        }
        if (found)
        {
            cout <<"Enter The quantity of "<<fruit[i]<<" : ";
            cin >>quantity[i];
            cout <<endl;
        }
        else 
        {
            cout <<"Fruit not found "<<endl;
            i--;
        }
        
    }
    calculate_price(fruit,quantity,size);
    gotoxy(2,20);
}