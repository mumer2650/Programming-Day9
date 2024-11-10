#include<iostream>
#include<windows.h>
using namespace std;
string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
int price=500;
int index[5];
void gotoxy(int X,int Y)
{
	COORD coordinates;
	coordinates.X=X;
	coordinates.Y=Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void discount(string movie[],int size)
{
    int total_price=0;
    system("cls");
    gotoxy(20,5);
	cout <<"Movie Name";
	gotoxy(40,5);
	cout <<"Actual Price ";
	gotoxy(60,5);
	cout <<"Price after discount ";
    for (int i=0;i<size;i++)
    {
        gotoxy(22,7+i);
        cout <<movie[i];
    }
    for (int j=0;j<size;j++)
    {
        gotoxy(42,7+j);
        cout <<price;
    }
    for (int k=0;k<size;k++)
    {
        gotoxy(62,7+k);
        if (index[k] % 2 == 0)
        {
            cout << float(price) * 0.95;
        }
        else 
        {
            cout << float(price) * 0.90;
        }
    }
}
main()
{
    int size;
    cout <<"How many movies you want to enter : ";
    cin >>size;
    if (size <= 0 && size >4)
    {
        cout <<"Invalid SIze ";
        return 0;
    }
    cout <<"You can Enter only Gladiator, StarWars, Terminator, TakingLives or TombRider"<<endl;
    string movie[size];
    for (int i=0;i<size;i++)
    {
        cout <<endl;
        cout <<"Enter the movie : "<<i+1 <<"  : ";
        cin >>movie[i];
        bool found = false;
        for (int j=0;j<5;j++)
        {
            if (movies[j] == movie[i])
            {
                index[i] = j;
                found = true;
                break;
            }
        }
        if(found == false)
        {
            cout <<"Movie not  Found "<<endl;
            i--;
        }
    }
    discount(movie,size);
    gotoxy(2,20);
}