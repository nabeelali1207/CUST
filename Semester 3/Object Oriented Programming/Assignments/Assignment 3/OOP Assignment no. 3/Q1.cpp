/*=================================================================
/* CSEE1122:			OOP and Data Structure
/*
/* Student Name :		Nabeel Ali
/*
/* Registration No.:	BEE173059
/*
/* Section No.:			II
/*
/* Assignment No.:		3
/*
/* Question No.:		1.
/*==================================================================
/* I certify that I have neither given nor received unauthorized aid
/*         on this Assignment.
/*==================================================================*/


//#include <iostream>
//#include <string>
//using namespace std;
//template <class T>
//class ABList
//{
//	int max_size;
//	int actual_size;
//	T *list_array;
//public:
//	ABList(int size)
//	{
//		list_array = new T[size];
//		max_size = size;
//		actual_size = 0;
//	}
//	~ABList()
//	{
//		delete[] list_array;
//	}
//	bool isEmpty()
//	{
//		if (actual_size == 0)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	bool isFull()
//	{
//		if (actual_size == max_size)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	int getLength()
//	{
//		return actual_size;
//	}
//	T getItem(int index)
//	{
//		return list_array[index];
//	}
//	void insertItem(T value)
//	{
//		list_array[actual_size] = value;
//		actual_size++;
//	}
//	void removeItem(int index)
//	{
//		for (int i = index; i < actual_size - 1; i++)
//		{
//			list_array[i] = list_array[i + 1];
//			if (i == (actual_size - 2))
//			{
//				list_array[actual_size - 1] = '\0';
//			}
//		}
//		actual_size--;
//	}
//	int findAndRemoveItem(T value)
//	{
//		int count = 0;
//		for (int i = 0; i < actual_size; i++)
//		{
//			if (list_array[i] == value)
//			{
//				removeItem(i);
//				count++;
//			}
//		}
//		if (count == 0)
//		{
//			return -1;
//		}
//		else
//		{
//			return count;
//		}
//	}
//	void displayList()
//	{
//		for (int i = 0; i < actual_size; i++)
//		{
//			cout << "Value: ";
//			cout << list_array[i] << endl;
//		}
//	}
//	void clearList()
//	{
//		for (int i = 0; i < actual_size; i++)
//		{
//			list_array[i] = '\0';
//		}
//		actual_size = 0;
//	}
//	void resizeList()
//	{
//		T *temp = new T[max_size * 2];
//		for (int i = 0; i < max_size; i++)
//		{
//			temp[i] = list_array[i];
//		}
//		max_size *= 2;
//		delete[] list_array;
//		list_array = temp;
//	}
//};
//void main()
//{
//	ABList<int> i1(3);
//	ABList<string> s1(3);
//	int num;
//	string str;
//
//	cout << "Enter the 1st int: ";
//	cin >> num;
//	i1.insertItem(num);
//	cout << "Enter the 2nd int: ";
//	cin >> num;
//	i1.insertItem(num);
//	cout << "Enter the 3rd int: ";
//	cin >> num;
//	i1.insertItem(num);
//
//	cout << "Enter the 1st string: ";
//	cin >> str;
//	s1.insertItem(str);
//	cout << "Enter the 2nd string: ";
//	cin >> str;
//	s1.insertItem(str);
//	cout << "Enter the 3rd string: ";
//	cin >> str;
//	s1.insertItem(str);
//
//	i1.displayList();
//	s1.displayList();
//
//	system("pause");
//	system("cls");
//
//	i1.findAndRemoveItem(1);
//	s1.findAndRemoveItem("ab");
//
//	i1.displayList();
//	s1.displayList();
//	
//	system("pause");
//	system("cls");
//
//	i1.clearList();
//	s1.clearList();
//
//	i1.displayList();
//	s1.displayList();
//
//	system("pause");
//	system("cls");
//
//	i1.resizeList();
//	cout << "Enter the 1st int: ";
//	cin >> num;
//	i1.insertItem(num);
//	cout << "Enter the 2nd int: ";
//	cin >> num;
//	i1.insertItem(num);
//	cout << "Enter the 3rd int: ";
//	cin >> num;
//	i1.insertItem(num);
//	cout << "Enter the 4th int: ";
//	cin >> num;
//	i1.insertItem(num);
//	cout << "Enter the 5th int: ";
//	cin >> num;
//	i1.insertItem(num);
//	cout << "Enter the 6th int: ";
//	cin >> num;
//	i1.insertItem(num);
//
//	i1.displayList();
//}