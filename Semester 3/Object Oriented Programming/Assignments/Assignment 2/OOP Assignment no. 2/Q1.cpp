/*=================================================================
/* CSEE1122:			Computer Programming
/*
/* Student Name :		Nabeel Ali
/*
/* Registration No.:	BEE173059
/*
/* Section No.:			II
/*
/* Assignment No.:		2
/*
/* Question No.:		1.
/*==================================================================
/* I certify that I have neither given nor received unauthorized aid
/*         on this Assignment.
/*==================================================================*/

//#include <iostream>
//using namespace std;
//class complexNumber
//{
//	int real, img;
//public:
//	complexNumber()
//	{
//		real = 0;
//		img = 0;
//	}
//	complexNumber(int r, int i)
//	{
//		real = r;
//		img = i;
//	}
//	int getReal()
//	{
//		return real;
//	}
//	int getImg()
//	{
//		return img;
//	}
//	complexNumber operator*(complexNumber X)
//	{
//		complexNumber temp;
//		temp.real = real * X.real - img * X.img;
//		temp.img = real * X.img + img * X.real;
//		return temp;
//	}
//	bool operator==(complexNumber X)
//	{
//		if (real == X.real && img == X.img)
//			return true;
//		else
//			return false;
//	}
//
//};
//void main()
//{
//	complexNumber num1(9, 7), num2(4, 8), num3;
//	num3 = num1 * num2;
//	cout << "(" << num1.getReal() << " + " << num1.getImg() << "i)x(";
//	cout << num2.getReal() << " + " << num2.getImg() << "i) = ";
//	cout << num3.getReal() << " + " << num3.getImg() << "i"<< endl;
//	if (num1 == num2)
//		cout << "Both the conplex numbers are same\n";
//	else
//		cout << "Both complex numbers are NOT same\n";
//}