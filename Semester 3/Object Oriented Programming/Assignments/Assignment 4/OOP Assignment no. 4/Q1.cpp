/*=================================================================
/* CSEE2132:			OOP and Data Structures
/*
/* Student Name :		Nabeel Ali
/*
/* Registration No.:	BEE173059
/*
/* Section No.:			II
/*
/* Assignment No.:		4
/*
/* Question No.:		1.
/*==================================================================
/* I certify that I have neither given nor received unauthorized aid
/*         on this Assignment.
/*==================================================================*/

//#include <iostream>
//#include <string>
//using namespace std;
//
//
//
//class searchEngine
//{
//	int actual_size, max_size;
//	string *list_array;
//
//public:
//
//	searchEngine(int size)
//	{
//		actual_size = 0;
//		max_size = size;
//		list_array = new string[size];
//	}
//
//	void addWord(string word)
//	{
//		if (actual_size >= max_size)
//		{
//			system("cls");
//			cout << "Cannot add word. List is full\n";
//		}
//		else
//		{
//			list_array[actual_size] = word;
//			actual_size++;
//		}
//	}
//
//	void sortWordList()
//	{
//		string max = list_array[0];
//		for (int i = 1; i < max_size; i++)
//		{
//			for (int j = 1; j < max_size; j++)
//			{
//				if (list_array[j - 1] > list_array[j])
//				{
//					max = list_array[j - 1];
//					list_array[j - 1] = list_array[j];
//					list_array[j] = max;
//				}
//			}
//		}
//	}
//
//	void displayWordList()
//	{
//		for (int i = 0; i < max_size; i++)
//		{
//			cout << list_array[i] << endl;
//		}
//	}
//
//	int searchWord(string word)
//	{
//		int first = 0, last = max_size - 1, mid = (first + last) / 2;
//		while (first <= last)
//		{
//			if (word == list_array[mid])
//			{
//				return mid;
//			}
//			else if (word < list_array[mid])
//			{
//				last = mid - 1;
//			}
//			else if (word > list_array[mid])
//			{
//				first = mid + 1;
//			}
//			mid = (first + last) / 2;
//		}
//		return -1;
//	}
//};
//
//
//
//void main()
//{
//	int size = 20;
//	searchEngine s1(size);
//	string word;
//	int check;
//	for (int i = 1; i <= size; i++)
//	{
//		cout << "Enter the word " << i << ": ";
//		cin >> word;
//		s1.addWord(word);
//	}
//	system("cls");
//	s1.displayWordList();
//	cout << "\n";
//	s1.sortWordList();
//	cout << "\n";
//	s1.displayWordList();
//	cout << "\n";
//	cout << "Enter the word to search: ";
//	cin >> word;
//	check = s1.searchWord(word);
//	if (check == -1)
//	{
//		cout << "The entered word was not found in the list\n";
//	}
//	else
//	{
//		cout << "The index of the word found is: " << check << endl;
//	}
//}