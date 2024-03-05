////Activity 1
//#include <iostream>
//#include <string>
//using namespace std;
//class Student
//{
//private:
//	string name;
//	string address;
//	float cgpa;
//public:
//	Student(string _name = "NULL", string _address = "NULL", float _cgpa = 0)
//	{
//		name = _name;
//		address = _address;
//		cgpa = _cgpa;
//	}
//	~Student()
//	{
//		cout << "Object Destroyed\n";
//	}
//	void setName(string _name)
//	{
//		name = _name;
//	}
//	string getName()
//	{
//		return name;
//	}
//	void setAddress(string _address)
//	{
//		address = _address;
//	}
//	string getAddress()
//	{
//		return address;
//	}
//	void setCgpa(float _cgpa)
//	{
//		cgpa = _cgpa;
//	}
//	float getCgpa()
//	{
//		return cgpa;
//	}
//	void operator=(Student s1)
//	{
//		name = s1.name;
//		address = s1.address;
//		cgpa = s1.cgpa;
//	}
//};
//
//void main()
//{
//	Student s1("Ali", "Islamabad", 3.6), s2;
//	cout << s1.getName() << endl;
//	cout << s1.getAddress() << endl;
//	cout << s1.getCgpa() << endl << endl;
//	s2 = s1;
//	cout << s1.getName() << endl;
//	cout << s1.getAddress() << endl;
//	cout << s1.getCgpa() << endl << endl;
//	cout << s2.getName() << endl;
//	cout << s2.getAddress() << endl;
//	cout << s2.getCgpa() << endl;
//
//}


////Activity 2
//#include <iostream>
//using namespace std;
//class Time
//{
//private:
//	int h, m, s;
//public:
//	Time()
//	{
//		h = 0;
//		m = 0;
//		s = 0;
//	}
//	Time(int h, int m, int s)
//	{
//		this->h = h;
//		this->m = m;
//		this->s = s;
//	}
//
//	void setH(int h)
//	{
//		this->h = h;
//	}
//	void setM(int m)
//	{
//		this->m = m;
//	}
//	void setS(int s)
//	{
//		this->s = s;
//	}
//
//	int getH()
//	{
//		return h;
//	}
//	int getM()
//	{
//		return m;
//	}
//	int getS()
//	{
//		return s;
//	}
//	void calculateDuration(Time t1, Time t2)
//	{
//		if (t2.s > t1.s)
//		{
//			t1.m--;
//			t1.s += 60;
//		}
//		s = t1.s - t2.s;
//		if (t2.m > t1.m)
//		{
//			t1.h--;
//			t1.m += 60;
//		}
//		m = t1.m - t2.m;
//		h = t1.h - t2.h;
//	}
//	bool isEqual(Time t2)
//	{
//		if (h == t2.h && m == t2.m && s == t2.s)
//			return true;
//		else
//			return false;
//	}
//	void Display()
//	{
//		cout << h << ":" << m << ":" << s << endl;
//	}
//};
//void main()
//{
//	Time t1, t2(1, 1, 1), t3;
//	bool check;
//	int option, h, m, s;
//	char retry;
//	do
//	{
//
//		cout << "Press 1 to set start time\n";
//		cout << "Press 2 to set end time\n";
//		cout << "Press 3 to display start time\n";
//		cout << "Press 4 to display end time\n";
//		cout << "Press 5 to calculate duration\n";
//		cout << "Press 6 to check the equality of t1 and t2\n";
//		cout << "Choose an option: ";
//		cin >> option;
//		switch (option)
//		{
//		case 1:
//			system("cls");
//			cout << "Enter the hours: ";
//			cin >> h;
//			cout << "Enter the seconds = ";
//			cin >> m;
//			cout << "Enter the minutes = ";
//			cin >> s;
//			t1.setH(h);
//			t1.setM(m);
//			t1.setS(s);
//			break;
//		case 2:
//			system("cls");
//			cout << "Enter the hours: ";
//			cin >> h;
//			cout << "Enter the seconds = ";
//			cin >> m;
//			cout << "Enter the minutes = ";
//			cin >> s;
//			t2.setH(h);
//			t2.setM(m);
//			t2.setS(s);
//			break;
//		case 3:
//			system("cls");
//			cout << "Start time t1 = ";
//			t1.Display();
//			break;
//		case 4:
//			system("cls");
//			cout << "End time t2 = ";
//			t2.Display();
//			break;
//		case 5:
//			system("cls");
//			t3.calculateDuration(t1, t2);
//			cout << "Duration = ";
//			t3.Display();
//			break;
//		case 6:
//			system("cls");
//			check = t1.isEqual(t2);
//			if (check == true)
//				cout << "Both t1 and t2 are Equal\n";
//			else
//				cout << "Both t1 and t2 are NOT Equal\n";
//			break;
//		default:
//			system("cls");
//			cout << "Invalid input. Exiting\n";
//		}
//		cout << "Press Y to show menu.";
//		cin >> retry;
//		if (retry != 'Y' && retry != 'y')
//			break;
//		system("cls");
//	} while (1);
//}



//Practice Questions

////Q1
//#include <iostream>
//#include <string>
//using namespace std;
//class Employee
//{
//	string name, address, contactNo;
//public:
//	Employee(string N = " ", string A = " ", string C = " ")
//	{
//		name = N;
//		address = A;
//		contactNo = C;
//	}
//	void input()
//	{
//		cout << "Enter the name: ";
//		cin >> name;
//		cout << "Enter the address: ";
//		cin >> address;
//		cout << "Enter the contact number: ";
//		cin >> contactNo;
//	}
//	void display()
//	{
//		cout << "Name: " << name << endl;
//		cout << "Address: " << address << endl;
//		cout << "Contact number: " << contactNo << endl;
//	}
//	void setName()
//	{
//		cin >> name;
//	}
//	string getName()
//	{
//		return name;
//	}
//};
//void main()
//{
//	int option, retry, counter = 0;
//	Employee X[10];
//	string name, checkname;
//	do
//	{
//		retry = 1;
//		cout << "Press 1 to add employee\n";
//		cout << "Press 2 to display all employees\n";
//		cout << "Press 3 to search employee\n";
//		cout << "Press 4 to exit\n";
//		cout << "Choose an option: ";
//		cin >> option;
//		switch (option)
//		{
//		case 1:
//			X[counter].input();
//			break;
//		case 2:
//			for (int i = 0; i < counter; i++)
//			{
//				X[i].display();
//			}
//			system("pause");
//			break;
//		case 3:
//			cout << "Enter the name of the employee you want to find: ";
//			cin >> checkname;
//			for (int i = 0; i < 10; i++)
//			{
//				name = X[i].getName();
//				if (checkname == name)
//				{
//					cout << "Employee found! More info below:\n";
//					X[i].display();
//					system("pause");
//					break;
//				}
//				if (i == 9)
//				{
//					cout << "Employee not found\n";
//					system("pause");
//				}
//			}
//			break;
//		case 4:
//			retry = 0;
//			break;
//		default:
//			cout << "Invalid input\n";
//			system("pause");
//		}
//		counter++;
//		system("cls");
//	} while (retry == 1);
//}

////Q2/Q3 (Both are the same question)
//#include <iostream>
//#include <string>
//using namespace std;
//class Accounts
//{
//	char accTitle[10];
//	char accType[10];
//	float balance;
//public:
//	Accounts()
//	{
//		accTitle[0] = ' ';
//		accType[0] = ' ';
//		balance = 0;
//	}
//	Accounts(char _accTitle[10], char _accType[10], float _balance = 500)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			accTitle[i] = _accTitle[i];
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			accType[i] = _accType[i];
//		}
//		balance = _balance;
//	}
//	void setTitle()
//	{
//		cin >> accTitle;
//	}
//	void setType()
//	{
//		cin >> accType;
//	}
//	void setBalance()
//	{
//		cin >> balance;
//	}
//	string getTitle()
//	{
//		return accTitle;
//	}
//	string getType()
//	{
//		return accType;
//	}
//	float getBalance()
//	{
//		return balance;
//	}
//	void deposit(float amount)
//	{
//		balance += amount;
//	}
//	void withdraw(float amount)
//	{
//		balance -= amount;
//	}
//};
//void main()
//{
//	int retry, choice, counter = 0;
//	Accounts X[10];
//	string checktitle;
//	float amountD, amountW;
//	do
//	{
//		retry = 1;
//		cout << "Press 1 to create new account\n";
//		cout << "Press 2 to display account info\n";
//		cout << "Press 3 to deposit amount\n";
//		cout << "Press 4 to withdraw amound\n";
//		cout << "Press 5 to check balance\n";
//		cout << "Press 6 to exit\n";
//		cout << "Choose an option: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			cout << "Enter the account title: ";
//			X[counter].setTitle();
//			cout << "Enter the account type: ";
//			X[counter].setType();
//			cout << "Enter the initial balance: ";
//			X[counter].setBalance();
//			system("pause");
//			break;
//		case 2:
//			cout << endl;
//			for (int i = 0; i < counter; i++)
//			{
//				cout << X[i].getTitle() << endl;
//				cout << X[i].getType() << endl;
//				cout << X[i].getBalance() << endl;
//			}
//			system("pause");
//			break;
//		case 3:
//			cout << "Enter the account title: ";
//			cin >> checktitle;
//			for (int i = 0; i < counter; i++)
//			{
//				if (checktitle == X[i].getTitle())
//				{
//					cout << "Enter the amount to deposit: ";
//					cin >> amountD;
//					X[i].deposit(amountD);
//					break;
//				}
//				cout << "Account not found\n";
//				system("pause");
//			}
//			break;
//		case 4:
//			cout << "Enter the account title: ";
//			cin >> checktitle;
//			for (int i = 0; i < counter; i++)
//			{
//				if (checktitle == X[i].getTitle())
//				{
//					cout << "Enter the amount to withdraw: ";
//					cin >> amountW;
//					X[i].withdraw(amountW);
//					break;
//				}
//				cout << "Account not found\n";
//				system("pause");
//			}
//			break;
//		case 5:
//			cout << "Enter the account title: ";
//			cin >> checktitle;
//			for (int i = 0; i < counter; i++)
//			{
//				if (checktitle == X[i].getTitle())
//				{
//					cout << "Balance = " << X[i].getBalance();
//					break;
//				}
//				cout << "Account not found\n";
//				system("pause");
//			}
//			break;
//		case 6:
//			retry = 0;
//			break;
//		default:
//			cout << "Wrong input\n";
//			system("pause");
//		}
//		counter++;
//		system("cls");
//	} while (retry == 1);
//}