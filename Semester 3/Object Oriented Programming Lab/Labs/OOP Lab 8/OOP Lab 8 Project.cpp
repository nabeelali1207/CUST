////Activity 1
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string list[10], remove;
//	int itemLocation;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Enter a name: ";
//		cin >> list[i];
//		itemLocation = i;
//		for (int j = 0; j < 10; j++)
//		{
//			if (j != i)
//			{
//				if (list[i] == list[j])
//				{
//					cout << "Value already exists. Enter again: ";
//					i--;
//					break;
//				}
//			}
//		}
//	}
//	cout << "Enter the name to remove: ";
//	cin >> remove;
//	for (int i = 0; i < 10; i++)
//	{
//		if (remove == list[i])
//		{
//			for (int j = i; j < itemLocation; j++)
//			{
//				list[j] = list[j + 1];
//				if (j == (itemLocation - 1))
//				{
//					list[itemLocation] = " ";
//				}
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << list[i] << endl;
//	}
//}


//Activity 2
//#include <iostream>
//#include <vector>
//using namespace std;
//void main()
//{
//	vector<char> myArrayList;
//	vector<char>::iterator i;
//	char c = 0;
//	while (c != 'x')
//	{
//		cout << "Enter: ";
//		std::cin >> c;
//		myArrayList.push_back(c);
//	}
//	for (i = myArrayList.begin(); i != myArrayList.end(); i++)
//	{
//		cout << *i;
//	}
//}


////Activity 3
//#include <iostream>
//#include <vector>
//using namespace std;
//void main()
//{
//	vector<float> marks;
//	vector<float>::iterator i;
//	float avg, sum = 0;
//	float x;
//	for (int i = 0; i < 6; i++)
//	{
//		cout << "Enter marks: ";
//		cin >> x;
//		marks.push_back(x);
//	}
//	for (i = marks.begin(); i < marks.end(); i++)
//	{
//		sum += *i;
//	}
//	avg = sum / 6;
//	cout << "Average: " << avg << endl;
//}


////Activity 4
//#include <iostream>
//#include <vector>
//using namespace std;
//void main()
//{
//	vector<char> myArrayList;
//	vector<char>::iterator i;
//	myArrayList.insert(myArrayList.begin(), 'A');
//	myArrayList.insert(myArrayList.begin(), 5, 'B');
//	cout << "Size before pop back: " << myArrayList.size() << endl;
//	myArrayList.pop_back();
//	cout << "Size after pop back: " << myArrayList.size() << endl;
//	for (i = myArrayList.begin(); i < myArrayList.end(); i++)
//	{
//		cout << *i;
//	}
//	cout << endl;
//}
