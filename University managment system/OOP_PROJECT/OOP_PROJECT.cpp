#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<string>
using namespace std;



class person {                                                                         //common class to inhiret from
protected:
	char id[5], phone_number[50], year[5], college[50], email[50], gender[10], address[50], last_name[50], first_name[50], gpa[5];
public:
void update()
	{
		system("cls");
		fstream fin;
		fstream tempfile;
		fin.open("student.txt", ios::in);
		tempfile.open("temp.txt", ios::out);
		char idd[5];
		cout << " ------ Updating ------ " << endl;
		cin.ignore();
		cout << "\n Enter Id to update :  ";
		cin.getline(idd, 5);
		while (!fin.eof())
		{
			fin.getline(id, 5, '|');
			fin.getline(first_name, 50, '|');
			fin.getline(last_name, 50, '|');
			fin.getline(gpa, 5, '|');
			fin.getline(college, 50, '|');
			fin.getline(address, 50, '|');
			fin.getline(gender, 10, '|');
			fin.getline(email, 50, '|');
			fin.getline(phone_number, 50, '|');
			fin.getline(year, 5);
			if (strcmp(id, idd) == 0)
			{
				cout << "\n Enter New ID : ";
				cin.getline(id, 5);
				cout << "\n Enter First Name : ";
				cin.getline(first_name, 50);
				cout << "\n Enter last Name : ";
				cin.getline(last_name, 50);
				cout << "\n GPA :  ";
				cin.getline(gpa, 50);
				cout << "\n Enter College : ";
				cin.getline(college, 50);
				cout << "\n Address : ";
				cin.getline(address, 50);
				cout << "\n Gender : ";
				cin.getline(gender, 10);
				cout << "\n Email : ";
				cin.getline(email, 50);
				cout << "\n Phone Number : ";
				cin.getline(phone_number, 50);
				cout << "\n Year of birth : ";
				cin.getline(year, 5);

				tempfile << id << '|' << first_name << '|' << last_name << '|' << gpa << '|' << college << '|' << address << '|' << gender << '|' << email << '|' << phone_number << '|' << year << endl;
			}
			else
			{
				tempfile << id << '|' << first_name << '|' << last_name << '|' << gpa << '|' << college << '|' << address << '|' << gender << '|' << email << '|' << phone_number << '|' << year << endl;
			}
		}
		fin.close();
		tempfile.close();
		tempfile.open("temp.txt", ios::in);
		fin.open("student.txt", ios::out);
		while (!tempfile.eof())
		{
			tempfile.getline(id, 5, '|');
			tempfile.getline(first_name, 50, '|');
			tempfile.getline(last_name, 50, '|');
			tempfile.getline(gpa, 5, '|');
			tempfile.getline(college, 50, '|');
			tempfile.getline(address, 50, '|');
			tempfile.getline(gender, 10, '|');
			tempfile.getline(email, 50, '|');
			tempfile.getline(phone_number, 50, '|');
			tempfile.getline(year, 5);
			fin << id << '|' << first_name << '|' << last_name << '|' << gpa << '|' << college << '|' << address << '|' << gender << '|' << email << '|' << phone_number << '|' << year << endl;
		}
		tempfile.close();
		fin.close();
		remove("temp.txt");
		cout << " \n Student updated successfully  ";

	}

	void delete_student();

	void show_all_students()
	{
		
		system("cls");
		fstream fin;
		fin.open("student.txt", ios::in);
		if (fin.is_open())
		{
			cout << "\n                             ----------- Show All Students ----------- " << endl << endl;
			while (!fin.eof())
			{
				
				fin.getline(id, 5, '|');
				if (!strcmp(id, "")) break;
				fin.getline(first_name, 50, '|');
				fin.getline(last_name, 50, '|');
				fin.getline(gpa, 5, '|');
				fin.getline(college, 50, '|');
				fin.getline(address, 50, '|');
				fin.getline(gender, 10, '|');
				fin.getline(email, 50, '|');
				fin.getline(phone_number, 50, '|');
				fin.getline(year, 5);
				cout << "\n\n\n\t\t\t ----------------- STUDENT PROFILE ----------------- ";
				cout << "\n\n\t\t\t ID :- " << id << endl << "\n\n";
				cout << "FIRST NAME :- " << first_name << endl;
				cout << "LAST NAME :- " << last_name << endl ;
				cout << "GPA :- " << gpa << endl ;
				cout << "COLLEGE :- " << college << endl ;
				cout << "ADDRESS :- " << address << endl ;
				cout << "GENDER :- " << gender << endl ;
				cout << "EMAIL :- " << email << endl ;
				cout << "PHONE NUMBER :- " << phone_number << endl ;
				cout << " YEAR OF BIRTH :- " << year << "\n\n";
				cout << "******************\n"; 
			}
		}
		else
		{
			cout << "Error ....... File can not open \n";
		}
	
	}
	
	void getfile()
	{
		system("cls");                                     // TO READ ALL THE STUDENT DATA FROM THE FILE print in console
		fstream fin;
		cout << "\n Enter Your ID : ";
		cin.ignore();
		char idd[5];
		cin.getline(idd, 5);
		fin.open("student.txt", ios::in);	
		int count = 0;
			if (fin.is_open())
			{
				while (!fin.eof())
				{
					fin.getline(id, 5, '|');
					fin.getline(first_name, 50, '|');
					fin.getline(last_name, 50, '|');
					fin.getline(gpa, 5, '|');
					fin.getline(college, 50, '|');
					fin.getline(address, 50, '|');
					fin.getline(gender, 10, '|');
					fin.getline(email, 50, '|');
					fin.getline(phone_number, 50, '|');
					fin.getline(year, 5);
					
						if (strcmp(id,idd)==0) 
						{
							system("cls");
							cout << "\n\n\n\t\t\t ----------------- STUDENT PROFILE ----------------- ";
							cout << "\n\n\t\t\t ID :- " << id << endl<<"\n\n";
							cout << "\t\t\t FIRST NAME :- " << first_name;
							cout << "\t\t\t LAST NAME :- " << last_name << endl<<"\n\n";
							cout << "\t\t\t GPA :- " <<gpa << endl << "\n\n";
							cout << " \t\t\t COLLEGE :- " << college << endl << "\n\n";
							cout << "\t\t\t ADDRESS :- " << address << endl << "\n\n";
							cout << "\t\t\t GENDER :- " << gender << endl << "\n\n";
							cout << "\t\t\t EMAIL :- " << email << endl << "\n\n";
							cout << "\t\t\t PHONE NUMBER :- " << phone_number << endl << "\n\n";
							cout << "\t\t\t YEAR OF BIRTH :- " << year << "\n\n";
							count++;
							break;
						}
				}
			if(count==0)
			{
				cout << "\n Student ID not found ......Error " << endl;
			}
				fin.close();
			}
     }
		
};



class student : public person {

public:

	void add_student()
	{
		system("cls");
		fstream myfile;
		cout << "\n\n                             -------- REGISTRATION -------- ";
		cin.ignore();
		cout << "\n\n\t\t\t Enter id consists of 4 numbers :- ";
		cin.getline(id, 5);
		cout << "\n\n\t\t\t Enter first Name :- ";
		cin.getline(first_name, 50);
		cout << "\n\n\t\t\t Enter last Name :- ";
		cin.getline(last_name, 50);
		cout << "\n\n\t\t\t Enter gpa :- ";
		cin.getline(gpa, 5);
		cout << "\n\n\t\t\t Enter college :- ";
		cin.getline(college, 50);
		cout << "\n\n\t\t\t Enter your address :-  ";
		cin.getline(address, 50);
		cout << "\n\n\t\t\t Enter your gender :-  ";
		cin.getline(gender, 10);
		cout << "\n\n\t\t\t Enter your email :-  ";
		cin.getline(email, 50);
		cout << "\n\n\t\t\t Enter your phone number :-  ";
		cin.getline(phone_number, 50);
		cout << "\n\n\t\t\t Enter the year of birth :-  ";
		cin.getline(year, 50);

		myfile.open("student.txt", ios::out | ios::app);
		if (myfile.is_open())
		{
			myfile << id << '|' << first_name << '|' << last_name << '|' << gpa << '|' << college << '|' << address  << '|' << gender << '|' << email  << '|' <<phone_number << '|'<<year << endl;
			myfile.close();
		}
		else
		{
			cout << "error ........ file can not be open \n";
		}
	}
};

		class doctor : public person
		{
		protected:
			char subject[50];
		public:
			 
			void getfile() 
			{
				system("cls");                              // TO READ ALL THE DOCTOR DATA FROM THE FILE print in console
				fstream fin;
				cout << "\n Enter Your ID : ";
				cin.ignore();
				char idd[5];
				cin.getline(idd, 5);
				fin.open("doctor.txt", ios::in);
				char  subject[20];
				int count = 0;
				if (fin.is_open())
				{
					string myfile;
					while (!fin.eof()) {
						fin.getline(id, 5, '|');
						fin.getline(first_name, 50, '|');
						fin.getline(last_name, 50, '|');
						fin.getline(gender, 10, '|');
						fin.getline(email, 50, '|');
						fin.getline(college, 50, '|');
						fin.getline(subject, 20);
						if (strcmp(id, idd) == 0) {
							system("cls");
							cout << "\n\n\n\t\t\t -----------------DOCTOR PROFILE ----------------- ";
							cout << "\n\n\t\t\t ID :- " << id << endl << "\n\n";
							cout << "\t\t\t FIRST NAME :- " << first_name;
							cout << "\t\t\t LAST NAME :- " << last_name << endl << "\n\n";
							cout << "\t\t\t GENDER :- " << gender << endl << "\n\n";
							cout << "\t\t\t EMAIL :- " << email << endl << "\n\n";
							cout << " \t\t\t COLLEGE :- " << college << endl << "\n\n";
							cout << " \t\t\t SUBJECT :- " << subject << endl << "\n\n";
							count++;
							break;
						}
					}
					if (count == 0) { cout << "\n Doctor ID not found ......Error " << endl; }
					fin.close();
				}
			}
			
		};
		class TA : public person
		{
		public:
			void getfile() {
				system("cls");                              // TO READ ALL THE DOCTOR DATA FROM THE FILE print in console
				fstream fin;
				cout << "\n Enter Your ID : ";
				cin.ignore();
				char idd[5];
				cin.getline(idd, 5);
				fin.open("TA.txt", ios::in);
				char  subject[20];
				int count = 0;
				if (fin.is_open()) {
					string myfile;
					while (!fin.eof()) {
						fin.getline(id, 5, '|');
						fin.getline(first_name, 50, '|');
						fin.getline(last_name, 50, '|');
						fin.getline(gender, 10, '|');
						fin.getline(email, 50, '|');
						fin.getline(college, 50, '|');
						fin.getline(subject, 20);

						if (strcmp(id, idd) == 0) {
							system("cls");
							cout << "\n\n\n\t\t\t ----------------- TA PROFILE ----------------- ";
							cout << "\n\n\t\t\t ID :- " << id << endl << "\n\n";
							cout << "\t\t\t FIRST NAME :- " << first_name;
							cout << "\t\t\t LAST NAME :- " << last_name << endl << "\n\n";
							cout << "\t\t\t GENDER :- " << gender << endl << "\n\n";
							cout << "\t\t\t EMAIL :- " << email << endl << "\n\n";
							cout << " \t\t\t COLLEGE :- " << college << endl << "\n\n";
							cout << " \t\t\t SUBJECT :- " << subject << endl << "\n\n";
							count++;
							break;
						}
					}
					if (count == 0) { cout << "\n TA ID not found ......Error " << endl; }
					fin.close();
				}
			}
		};
		

	void person :: delete_student()
		{
		   	system("cls");
			fstream myfile;
			fstream tempfile;
			myfile.open("student.txt", ios::in);
			tempfile.open("temp.txt", ios::out);
			char idd[5];
			cout << "---------- deleting Data ---------- " << endl;
			cout << "Enter student ID  : ";
			cin.getline(idd, 5);
			cin.ignore();
			while (!myfile.eof())
			{
				myfile.getline(id, 5, '|');
				myfile.getline(first_name, 50, '|');
				myfile.getline(last_name, 50, '|');
				myfile.getline(gpa, 50, '|');
				myfile.getline(college, 50, '|');
				myfile.getline(address, 50, '|');
				myfile.getline(gender, 50, '|');
				myfile.getline(email, 50, '|');
				myfile.getline(phone_number, 50, '|');
				myfile.getline(year, 5);
				if (strcmp(id, idd) == 0)
				{
					continue;
				}
				else
				{
					tempfile << id << '|' << first_name << '|' << last_name << '|' << gpa << '|' << college << '|' << address << '|' << gender << '|' << email << '|' << phone_number << '|' << year << endl;
				}
			}
			myfile.close();
			tempfile.close();
			myfile.open("student.txt", ios::out);
			tempfile.open("temp.txt", ios::in);
			while (!tempfile.eof())
			{
				tempfile.getline(id, 5, '|');
				tempfile.getline(first_name, 50, '|');
				tempfile.getline(last_name, 50, '|');
				tempfile.getline(gpa, 50, '|');
				tempfile.getline(college, 50, '|');
				tempfile.getline(address, 50, '|');
				tempfile.getline(gender, 50, '|');
				tempfile.getline(email, 50, '|');
				tempfile.getline(phone_number, 50, '|');
				tempfile.getline(year, 5);
				myfile << id << '|' << first_name << '|' << last_name << '|' << gpa << '|' << college << '|' << address << '|' << gender << '|' << email << '|' << phone_number << '|' << year << endl;
			}
			myfile.close();
			tempfile.close();
			remove("student.txt");
			rename("temp.txt","student.txt");
			cout << "\n\t\t\t\t student deleted successfully ";
		}


	int main()
	{
	menu:
		system("cls");
		cout << "\t\t\t\t ----------------- M University Management System -----------------  \t\t\t " << endl;

		cout << "\n\n\n\n\n\n \t\t\t 1- LOGIN " << endl;
		cout << "\n\n\t\t\t 2- REGISTERATION  " << endl;
		cout << "\n\n\t\t\t 3- EXIT " << endl;
		int x;
		char u;
		cin >> x;
		switch (x) 
		{
		case 1:
		{
			m:
			system("cls");
			cout << "\t\t\t\t ----------------- Login Page -----------------  \t\t\t " << endl;
			cout << "\n\n\n\n\n\n\n\t\t\t 1- STUDENT " << endl;
			cout << "\n\n\t\t\t 2- DOCTOR " << endl;
			cout << "\n\n\t\t\t 3- T.A" << endl;
			cout << "\n\n\t\t\t 4- Back to main menu " << endl;
			int y;
			cin >> y;
			switch (y) 
			{
			case 1:
			{
				system("cls");
				student s;
				s.getfile();
				break;
			}
			case 2: 
			{
				doctor d;
				system("cls");
				cout << "\t\t\t\t ----------------- Doctor page -----------------  \t\t\t " << endl;
				cout << "\n\n\n\n\n\n\n\t\t\t 1- DOCTOR information " << endl;
				cout << "\n\n\t\t\t 2- Delete student" << endl;
				cout << "\n\n\t\t\t 3- Show all students" << endl;
				cout << "\n\n\t\t\t 4- Update a student data " << endl;
				cout << "\n\n\t\t\t 5- Back to previous page " << endl;
				int w;
				cin >> w;
				switch (w) {
				case 1: 
				{
					system("cls");
					d.getfile();
					break;
				}
				case 2: 
				{
					system("cls");
					d.delete_student();
					break;
				}
				case 3: 
				{
					system("cls");
					d.show_all_students();
					break;
				}
				case 4:
				{
					system("cls");
					d.update();
					break;
				}

				case 5: 
				{
					system("cls");
					goto m;
					break;
				}
				}
				break;
			}
			case 3: 
			{
				TA t;
				system("cls");
				cout << "\t\t\t\t ----------------- T.A page -----------------  \t\t\t " << endl;
				cout << "\n\n\n\n\n\n\n\t\t\t 1- T.A information " << endl;
				cout << "\n\n\t\t\t 2- Show all students" << endl;
				cout << "\n\n\t\t\t 3- Update a student data " << endl;
				cout << "\n\n\t\t\t 4- Back to previous page " << endl;
				int j;
				cin >> j;
				switch (j)
				{
					
				case 1:
					{
						t.getfile();
						break;
					}
				case 2:
				{
					t.show_all_students();
					break;
				}
				case 3:
				{
					t.update();
					break;
				}
				case 4:
				{
					goto m;
					break;
				}

				}
				
				break;
			}
			case 4:
			{
				system("cls");
				goto menu;
				break;
			}
			}
			break;
		}
		case 2:
		{
			system("cls");
			cout << "\t\t\t Press 1 to continue " << endl;
			int z;
			cin >> z;
			switch (z)
			{
				student s;
			case 1:
			{
				do 
				{
					
				
					s.add_student();
					cout << "\n\n Do You Want to Add another student (y,n) : ";
					cin >> u;

				} while (u == 'y');

				break;
			}
			default:
			{
				system("cls");
				cout << "\t\t\t PLEASE ENTER THE RIGHT NUMBER " << endl;
				break;
			}
			}

			break;
		}
		case 3:
		{
			break;
		}
		default:
		{
			system("cls");
			cout << "\t\t\t PLEASE ENTER THE RIGHT NUMBER " << endl;
			break;
		}
		}
		return 0;
	}