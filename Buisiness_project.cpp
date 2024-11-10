#include<iostream>
#include<windows.h>
#include<conio.h>
#include<array>
#include<string>
using namespace std;
void gotoxy(int X,int Y);
void print_front();
void disply_front();
void print_front();
void print_header();
void sign_up_menu();
void Login_menu();
int choice_menu();
void add_record(int n);
void update_record(string id);
void show_record();
void delete_record(string id);
void search_record(string id);
void exit_menu();
void print_box();
void exit_menu();
string user_name,password;
string emp_name[20],emp_id[20],emp_address[20];
string emp_cell[20],emp_salery[20];
main()
{	
	system("cls");
	disply_front();
	system("cls");
	val2:
	sign_up_menu();	
	system("cls");
	Login_menu();
	system("cls");
	val3:
	int op = choice_menu();
	if (op  ==  1)
	{
		system("cls");
		int size;
		gotoxy(2,4);
		cout <<"How many Employees data you want to enter (Maximum 20) : ";
		cin >>size;
		if(size<=0 && size>20)
		{
			cout <<"Invalid Choice ";
			Sleep(800);
			system("cls");
			goto val3;
		}
		else 
		{
			add_record(size); 
			system("cls");
			Sleep(300);
			goto val3;
		}
	}
	else if (op  ==  2)
	{
		system("cls");
		if (emp_id[0] == "")
		{
			gotoxy(2,8);
			cout <<"You have not entered a record Yet : ";
			Sleep(2000);
			system("cls");
			goto val3;
		}
		else 
		{
			show_record();
			system("cls");
			Sleep(300);
			goto val3;
		}
		
	}
	else if (op  ==  3)
	{
		system("cls");
		gotoxy(2,4);
		string id;
		cout <<"Which Employee data you want to Update (Enter Employee ID): ";
		cin >>id;
		if (emp_id[0] == "")
		{
			gotoxy(2,8);
			cout <<"You have not entered a record Yet : ";
			Sleep(2000);
			system("cls");
			goto val3;
		}
		else 
		{
			update_record(id);
			system("cls");
			Sleep(300);
			goto val3;
		}
	}
	else if (op  ==  4)
	{
		system("cls");
		gotoxy(2,4);
		string id;
		cout <<"Which Employee data you want to Update (Enter Employee ID): ";
		cin >>id;
		if (emp_id[0] == "")
		{
			gotoxy(2,8);
			cout <<"You have not entered a record Yet : ";
			Sleep(2000);
			system("cls");
			goto val3;
		}
		else 
		{
			delete_record(id);
			system("cls");
			Sleep(300);
			goto val3;
		}
	}
	else if (op  ==  5)
	{
		system("cls");
		gotoxy(2,4);
		string id;
		cout <<"Which Employee data you want to see (Enter Employee ID): ";
		cin >>id;
		if (emp_id[0] == "")
		{
			gotoxy(2,8);
			cout <<"You have not entered a record Yet : ";
			Sleep(2000);
			system("cls");
			goto val3;
		}
		else 
		{
			search_record(id);
			system("cls");
			Sleep(300);
			goto val3;
		}
	}
	else if (op  ==  6)
	{
		system("cls");
		goto val2;
	}
	else if (op  ==  7)
	{
		system("cls");
		exit_menu();
	}
	else 
	{
		cout <<"    INVALID  CHOICE !!!!!";
		Sleep(1000);
		system("cls");
		goto val2;
	}

}
void gotoxy(int X,int Y)
{
	COORD coordinates;
	coordinates.X=X;
	coordinates.Y=Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void disply_front()
{

	system("cls");
	system("color 02");
	print_front();
	Sleep(700);
	system("cls");
	system("color 03");
	print_front();
	Sleep(700);
	system("cls");
	system("color 05");
	print_front();
	Sleep(700);
	system("color 07");
	cout <<endl<<endl<<endl<<endl<<endl;
	system("color 07");
	cout <<"                                                     PRESS   ANY   KEY TO CONTINUE ";
	getch();
	system("cls");	
	
}

void print_header()
{
	cout <<"             |$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|"<<endl;
	Sleep(60);
	cout <<"             |***********************************************************************************************************************************|"<<endl;
	Sleep(60);
	cout <<"             |***************************************   EMPLOYEE     MANAGEMENT        SYSTEM     ***********************************************|"<<endl;
	Sleep(60);
	cout <<"             |***********************************************************************************************************************************|"<<endl;
	Sleep(60);
	cout <<"             |$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$|"<<endl;
}
void sign_up_menu()
{
	print_header();

	cout <<endl<<endl<<endl<<endl;
	cout <<"                                   @@@@@@@@@@@@@@@@@@@@@@@@@     SIGN UP      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	print_box();
	gotoxy(20,20);
	cout <<"Enter User  Name :  ";
	cin >> user_name;
	gotoxy(20,24);
	cout <<"Enter Password :  ";
	cin >> password;
	gotoxy(20,30);
	cout <<"Loading Please Wait .....";
	Sleep(3000);
	gotoxy(28,32);

	cout <<"         PRESS   ANY   KEY TO CONTINUE ";
	getch();
}

void Login_menu()
{
	value:
	string U_name,pass;
	int count=0;
	print_header();
		
	cout <<endl<<endl<<endl<<endl;
	cout <<"                                   @@@@@@@@@@@@@@@@@@@@@@@@@     LOGIN  MENU    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	print_box();
	gotoxy(20,20);
	cout <<"User  Name :  ";
	cin >> U_name;
	gotoxy(20,24);
	cout <<"Password :";
	cin >> pass;
	if (user_name != U_name   &&   password != pass)
	{
		gotoxy(20,28);
		cout <<"INVALID USER NAME AND PASSWORD !!!!!!"<<endl;
		Sleep(1000);
		count++;
		
	}
	else if (user_name != U_name)
	{
		gotoxy(20,28);
		cout <<"INVALID USER NAME !!!!!!!"<<endl;
		Sleep(1000);
		count++;
		
	}
	else if (password != pass)
	{
		gotoxy(20,28);
		cout <<"INVALID  PASSWORD !!!!!!"<<endl;
		Sleep(1000);
		count++;
	}		

	else
	{
		gotoxy(20,28);
		cout <<"Loading Please Wait .....";
		Sleep(3000);
		gotoxy(28,32);

		cout <<"         PRESS   ANY   KEY TO CONTINUE ";
		getch();
	}
	if (count != 0)
	{
		system("cls");
		goto value;
	}
}

void print_box()
{
	gotoxy(15,18);
	cout <<" ------------------------------------------------------------------------------"<<endl;
	gotoxy(15,19);
	cout <<" |                                                                            |"<<endl;
	gotoxy(15,20);
	cout <<" |                                                                            |"<<endl;
	gotoxy(15,21);
	cout <<" |                                                                            |"<<endl;
	gotoxy(15,22);
	cout <<" |                                                                            |"<<endl;
	gotoxy(15,23);
	cout <<" |                                                                            |"<<endl;
	gotoxy(15,24);
	cout <<" |                                                                            |"<<endl;
	gotoxy(15,25);
	cout <<" |                                                                            |"<<endl;
	gotoxy(15,26);
	cout <<" ------------------------------------------------------------------------------"<<endl;

}

int choice_menu()
{
	print_header();
	cout <<endl<<endl<<endl<<endl;
	cout <<"                                   @@@@@@@@@@@@@@@@@@@@@@@@@     CHOICE  MENU    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	int op;
	gotoxy(20,16);
	cout <<"PRESS 1  TO   ENTER  Record :  ";
	gotoxy(20,18);
	cout <<"PRESS 2  TO   SHOW   Record :  ";
	gotoxy(20,20);
	cout <<"PRESS 3  TO   UPDATE  Record :  ";
	gotoxy(20,22);
	cout <<"PRESS 4  TO   DELETE  Record :  ";
	gotoxy(20,24);
	cout <<"PRESS 5  TO   SEARCH  Record :  ";
	gotoxy(20,26);
	cout <<"PRESS 6  TO   LOGOUT  :  ";
	gotoxy(20,28);
	cout <<"PRESS 7  TO   EXIT :  "<<endl;
	gotoxy(20,30);
	cout <<"YOUR CHOICE : ";
	cin >> op;
	return op;

}

void add_record(int size)
{
	for (int i = 0;i< size;i++)
	{
		cout <<endl<<endl<<endl<<endl;
		cout <<"                                   @@@@@@@@@@@@@@@@@@@@@@@@@     ADD  RECORD      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
		gotoxy(20,16);
		cout <<"Enter the Record of Employee "<<i+1<<"  "<<endl;
		string name,ID,address,contact,salary;
		Sleep(100);
		gotoxy(20,18);
		cout <<"Enter Employee Name : ";
		cin>>emp_name[i];
		Sleep(100);
		gotoxy(20,19);
		cout <<"Enter Emplyee ID : ";
		cin>>emp_id[i];
		Sleep(100);
		gotoxy(20,20);
		cout <<"Enter Employee Address : ";
		cin>>emp_address[i];
		Sleep(100);
		gotoxy(20,21);
		cout <<"Enter Employee  Contact  : ";
		cin>>emp_cell[i];
		Sleep(100);
		gotoxy(20,22);
		cout <<"Enter Employee Salary  : ";
		cin>>emp_salery[i];
		system("cls");
	}
	gotoxy(20,26);
	cout <<"Press Any Key To Exit : ";
	getch();
}

void show_record()
{
	bool found = false;
	cout <<endl<<endl<<endl<<endl;
	cout <<"                                   @@@@@@@@@@@@@@@@@@@@@@@@@     SHOW  RECORD      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	gotoxy(20,16);
	cout <<"Employee ID";
	gotoxy(40,16);
	cout <<"Employee Name";
	gotoxy(60,16);
	cout <<"Employee Address";
	gotoxy(80,16);
	cout <<"Employee Contact";
	gotoxy(100,16);
	cout <<"Employee Salery";
	for(int i=0;emp_id[i] != "";i++)
	{
		gotoxy(22,18+i);
		cout <<emp_id[i];
	}
	for(int j=0;emp_name[j] != "";j++)
	{
		gotoxy(42,18+j);
		cout <<emp_name[j];
	}
	for(int k=0;emp_address[k] != "";k++)
	{
		gotoxy(62,18+k);
		cout <<emp_address[k];
	}
	for(int l=0;emp_cell[l] != "";l++)
	{
		gotoxy(82,18+l);
		cout <<emp_cell[l];
	}
	for(int m=0;emp_id[m] != "";m++)
	{
		gotoxy(102,18+m);
		cout <<emp_salery[m];
	}
	Sleep(1000);
	gotoxy(24,30);
	cout <<"Press Any Key To Exit : ";
	getch();
}

void update_record(string id)
{
	bool found = false;
	cout <<endl<<endl<<endl<<endl;
	cout <<"                                   @@@@@@@@@@@@@@@@@@@@@@@@@     UPDATE  RECORD      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	for(int i=0;emp_id[i] != "\0";i++)
	{
		if (emp_id[i] == id)
		{
			gotoxy(20,14);
			cout <<"You Want to Update the record of employee id : "<<emp_id[i];
			gotoxy(20,18);
			cout <<"Enter Employee Name : ";
			cin>>emp_name[i];
			Sleep(100);
			gotoxy(20,20);
			cout <<"Enter Employee Address : ";
			cin>>emp_address[i];
			Sleep(100);
			gotoxy(20,22);
			cout <<"Enter Employee  Contact  : ";
			cin>>emp_cell[i];
			Sleep(100);
			gotoxy(20,24);
			cout <<"Enter Employee Salary  : ";
			cin>>emp_salery[i];
			gotoxy(20,26);
			cout <<"Updating Record .....";
			Sleep(1000);
			gotoxy(20,28);
			cout <<"Record Updated Successfully ";
		}
	}
	if (found == false)
	{
		gotoxy(20,24);
		cout <<"Employee With id "<<id <<" Does not exist : ";
	}
	gotoxy(24,30);
	cout <<"Press Any Key To Exit : ";
	getch();
	
}

void delete_record(string id)
{
	bool found = false;
	cout <<endl<<endl<<endl<<endl;
	cout <<"                                   @@@@@@@@@@@@@@@@@@@@@@@@@     DELETE  RECORD      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	for(int i=0;emp_id[i] != "\0";i++)
	{
		if (emp_id[i] == id)
		{
			emp_name[i] = "***";
			emp_id[i] = "***";
			emp_address[i] = "***";
			emp_cell[i] = "***";
			emp_salery[i] = "***";
			gotoxy(24,20);
			cout <<"Deleting Record .....";
			Sleep(1000);
			gotoxy(24,24);
			cout <<"Record Deleted Successfully ";
			Sleep(1000);
			found = true;
		}
	}
	if (found == false)
	{
		gotoxy(20,24);
		cout <<"Employee With id "<<id <<" Does not exist : ";
	}
	gotoxy(24,28);
	cout <<"Press Any Key To Exit : ";
	getch();
	
}

void search_record(string id)
{
	bool found = false;
	cout <<endl<<endl<<endl<<endl;
	cout <<"                                   @@@@@@@@@@@@@@@@@@@@@@@@@     SHOW  RECORD      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	for(int i=0;emp_id[i] != "\0";i++)
	{
		if (emp_id[i] == id)
		{
			gotoxy(20,16);
			cout <<"You Want to search the record of employee id : "<<emp_id[i];
			gotoxy(20,20);
			cout <<"Employee Name : "<<emp_name[i];
			gotoxy(20,22);
			cout <<"Employee ID : "<<emp_id[i];
			gotoxy(20,24);
			cout <<"Employee Adress : "<<emp_address[i];
			gotoxy(20,26);
			cout <<"Employee Contact : "<<emp_cell[i];
			gotoxy(20,28);
			cout <<"Employee Salary : "<<emp_salery[i];
			Sleep(1000);
			found = true;
		}
	}
	if (found == false)
	{
		gotoxy(20,24);
		cout <<"Employee With id "<<id <<" Does not exist : ";
	}
	gotoxy(24,31);
	cout <<"Press Any Key To Exit : ";
	getch();
}
void exit_menu()

{
    cout <<endl<<endl;
	cout <<"                                   @@@@@@@@@@@@@@@@@@@@@@@@@     EXIT  MENU     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	cout <<endl<<endl;
	cout <<endl<<endl;
	cout <<endl<<endl;
    cout <<"                @@@@@@@ @   @  @@  @@    @ @   @         @   @  @@  @  @    @"<<endl;
    Sleep(70);
    cout <<"                   @    @   @ @  @ @ @   @ @  @          @   @ @  @ @  @    @"<<endl;
    Sleep(70);
    cout <<"                   @    @@@@@ @@@@ @  @  @ @@@            @@@  @  @ @  @    @"<<endl;
    Sleep(70);
    cout <<"                   @    @   @ @  @ @   @ @ @  @            @   @  @ @  @     "<<endl;
    Sleep(70);
    cout <<"                   @    @   @ @  @ @    @@ @   @           @    @@   @@     @"<<endl;
    Sleep(70);
	cout <<endl<<endl;
	cout <<"              @@@@@@@@  @@@   @@@@@           @   @   @@@   @@@@@@@@  @@     @   @@@           @@@@@@   @@   @@   @@@ "<<endl;
	Sleep(70);
	cout <<"              @	       @   @  @    @          @   @  @   @      @     @ @    @  @   @          @        @ @ @ @  @   @"<<endl; 
	Sleep(70);
	cout <<"              @@@@@@   @   @  @    @          @   @   @         @     @  @   @  @              @@@@     @  @  @   @    "<<endl;
	Sleep(70);
	cout <<"              @        @   @  @@@@@           @   @    @        @     @   @  @  @  @@          @        @     @    @     "<<endl;
	Sleep(70);
	cout <<"              @        @   @  @    @          @   @ @   @       @     @    @ @  @   @          @        @     @  @   @  "<<endl;
	Sleep(70);
	cout <<"              @         @@@   @     @@         @@@   @@@    @@@@@@@@  @     @@   @@@           @@@@@@   @     @   @@@  "<<endl;
	gotoxy(2,35);
}
void print_front()
{	cout <<endl<<endl<<endl<<endl;
	cout <<"			         ********************************************************************************************************************************"<<endl;
	Sleep(80);
	cout <<"			    ******************************************************************************************************************************************"<<endl;
	Sleep(80);
	cout <<"			  *********************************************************************************************************************************************** "<<endl;
	Sleep(80);
	cout <<"			*************|----------------------------------------------------------------------------------------------------------------|********************"<<endl;
	Sleep(80);
	cout <<"			*************|                                                                                                                |********************"<<endl;
	Sleep(80);
	cout <<"			*************| @@@@ @@   @@ @@@  @     @@  @   @ @@@@ @@@@         @@   @@  @@  @@    @  @@   @@  @@   @@ @@@@ @@    @ @@@@@  |********************"<<endl;
	Sleep(80);
	cout <<"			*************| @    @ @ @ @ @  @ @    @  @ @   @ @    @            @ @ @ @ @  @ @ @   @ @  @ @    @ @ @ @ @    @ @   @   @    |********************"<<endl;
	Sleep(80);
	cout <<"			*************| @@@  @  @  @ @@@  @    @  @   @   @@@  @@@          @  @  @ @@@@ @  @  @ @@@@ @ @@ @  @  @ @@@  @  @  @   @    |********************"<<endl;
	Sleep(80);
	cout <<"			*************| @    @     @ @    @    @  @   @   @    @            @     @ @  @ @   @ @ @  @ @  @ @     @ @    @   @ @   @    |********************"<<endl;
	Sleep(80);
	cout <<"			*************| @@@@ @     @ @    @@@@  @@    @   @@@@ @@@@         @     @ @  @ @    @@ @  @  @@  @     @ @@@@ @    @@   @    |********************"<<endl;
	Sleep(80);
	cout <<"			*************|                                                                                                                |********************"<<endl;
	Sleep(80);
	cout <<"			*************|                                          @@@  @   @  @@@ @@@@@ @@@@@ @@   @@                                   |********************"<<endl;
	Sleep(80);
	cout <<"			*************|                                         @     @   @ @      @   @     @ @ @ @                                   |********************"<<endl;
	Sleep(80);
	cout <<"			*************|                                          @@     @    @@    @   @@@@  @  @  @                                   |********************"<<endl;
	Sleep(80);  
	cout <<"			*************|                                            @    @      @   @   @     @     @                                   |********************"<<endl;
	Sleep(80);
	cout <<"			*************|                                         @@@     @   @@@    @   @@@@@ @     @                                   |********************"<<endl; 
	Sleep(80);
	cout <<"			**************----------------------------------------------------------------------------------------------------------------|********************"<<endl;
	Sleep(80);
	cout <<"			***************************************************************************************************************************************************"<<endl;
	Sleep(80);
	cout <<"			**************************************************************************************************************************************************"<<endl;
	Sleep(80);
	cout <<"			 *********************************************************************************************************************************************** "<<endl;
	Sleep(80);
	cout <<"			    ****************************************************************************************************************************************"<<endl;
	Sleep(80);
	cout <<"			         ******************************************************************************************************************************  "<<endl;

}