////Activity 1
//#include <iostream>
//using namespace std;
//struct GradeRec
//{
//	float percent;
//	char grade;
//};
//struct StudentRec
//{
//	char lastname[20], firstname[20];
//	int age;
//	GradeRec courseGrade;
//};
//void main()
//{
//	StudentRec student;
//	cout << "Enter first name: ";
//	cin >> student.firstname;
//	cout << "Enter last name: ";
//	cin >> student.lastname;
//	cout << "Enter age: ";
//	cin >> student.age;
//	cout << "Enter overall percent: ";
//	cin >> student.courseGrade.percent;
//
//	if (student.courseGrade.percent >= 90)
//	{
//		student.courseGrade.grade = 'A';
//	}
//	else if (student.courseGrade.percent >= 75)
//	{
//		student.courseGrade.grade = 'B';
//	}
//	else
//	{
//		student.courseGrade.grade = 'F';
//	}
//	cout << "\n\nHello " << student.firstname << ' ' << student.lastname << "How are you?\n";
//	cout << "\nCongratulations on reaching the age of " << student.age << ".\n";
//	cout << "Your overall percent score is " << student.courseGrade.percent << " for a grade of " << student.courseGrade.grade;
//}


////Activity 2
//#include <iostream>
//using namespace std;
//typedef struct
//{
//	short bookid;
//	char booktitle[20];
//	float price;
//}books;
//
//void main()
//{
//	int book = 0, x = 2, option, flag;
//	books *ptr = new books[x];
//	do
//	{
//		flag = 0;
//		
//		cout << endl;
//		cout << "Press 1 to add book\n";
//		cout << "Press 2 to display all books\n";
//		cout << "Press 3 to exit\n";
//		cout << "Choose an option: ";
//		cin >> option;
//		cout << endl;
//		switch (option)
//		{
//		case 1:
//			cout << "Enter the book ID: ";
//			cin >> ptr[book].bookid;
//			cout << "Enter the book title: ";
//			cin >> ptr[book].booktitle;
//			cout << "Enter price of the book: ";
//			cin >> ptr[book].price;
//			book++;
//			break;
//		case 2:
//			for (int i = 0; i < book; i++)
//			{
//				cout << "Book ID: " << ptr[i].bookid << endl;
//				cout << "Book Title: " << ptr[i].booktitle << endl;
//				cout << "Price of book = " << ptr[i].price << endl;
//				cout << endl;
//
//			}
//			system("pause");
//			break;
//		case 3:
//			flag = 1;
//			break;
//		default:
//			cout << "You have entered the wrong value\n";
//		}
//		system("cls");
//	} while (flag == 0);
//	delete[] ptr;
//}


////Activity 3
//#include <iostream>
//using namespace std;
//struct Author
//{
//	char firstname[10], lastname[10];
//};
//typedef struct
//{
//	short bookid;
//	char booktitle[20];
//	float price;
//	struct Author authorinfo;
//}books;
//
//
//void main()
//{
//	int x = 2, option, flag, book = 0;
//	books *ptr = new books[x];
//	do
//	{
//		flag = 0;
//		
//		cout << endl;
//		cout << "Press 1 to add book\n";
//		cout << "Press 2 to display all books\n";
//		cout << "Press 3 to exit\n";
//		cout << "Choose an option: ";
//		cin >> option;
//		cout << endl;
//		switch (option)
//		{
//		case 1:
//			cout << "Enter the book ID: ";
//			cin >> ptr[book].bookid;
//			cout << "Enter the book title: ";
//			cin >> ptr[book].booktitle;
//			cout << "Enter price of the book: ";
//			cin >> ptr[book].price;
//			cout << "Enter the author's first name: ";
//			cin >> ptr[book].authorinfo.firstname;
//			cout << "Enter the author's last name: ";
//			cin >> ptr[book].authorinfo.lastname;
//
//			book++;
//			break;
//
//			break;
//		case 2:
//			for (int i = 0; i < book; i++)
//			{
//				cout << "Book ID: " << ptr[i].bookid << endl;
//				cout << "Book Title: " << ptr[i].booktitle << endl;
//				cout << "Price of book = " << ptr[i].price << endl;
//				cout << "Author's first name: " << ptr[i].authorinfo.firstname << endl;
//				cout << "Author's last name: " << ptr[i].authorinfo.lastname << endl;
//				cout << endl;
//
//			}
//			system("pause");
//			break;
//		case 3:
//			flag = 1;
//			break;
//		default:
//			cout << "You have entered the wrong value\n";
//		}
//		system("cls");
//	} while (flag == 0);
//	delete[] ptr;
//}


////Activity 4
//#include <iostream>
//#include <string>
//using namespace std;
//enum WeekDayT
//{
//	Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
//};
//int NextDay(int today);
//int PreviousDay(int today);
//int IncrementDay(int startDay, int delta);
//void main()
//{
//	int today, nextday, previousday, delta, incrementday;
//	cout << "Enter the number of the day: ";
//	cin >> today;
//	nextday = NextDay(today);
//	cout << "\nNext day: " << nextday << endl;
//	previousday = PreviousDay(today);
//	cout << "Previous day: " << previousday << endl << endl;
//	cout << "Enter the value for delta: ";
//	cin >> delta;
//	incrementday = IncrementDay(today, delta);
//	cout << "Incremented day: " << incrementday << endl;
//
//}
//int NextDay(int today)
//{
//	return today + 1;
//}
//int PreviousDay(int today)
//{
//	return today - 1;
//}
//int IncrementDay(int startday, int delta)
//{
//	return startday + delta;
//}


////Activity 5
//#include <iostream>
//using namespace std;
//float Round(float x) 
//{
//	int temp1;
//	float temp2;
//	temp1 = x;
//	temp2 = x - temp1;
//	if (temp2 >= 0.5)
//	{
//		temp2 = 1 - temp2;
//		x = x + temp2;
//		return x;
//	}
//	else
//	{
//		x = x - temp2;
//		return x;
//	}
//}
//void main()
//{
//	float x, y;
//	cout << "Enter a floating point number: ";
//	cin >> x;
//	y = Round(x);
//	cout << "The rounded number is = " << y << endl;
//}
