﻿#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#include<limits.h>
using namespace std;
//{
//	
//		void task1()
//		{
//			const int n = 5;
//			int k = 2;
//			int a[n] = { 1, 2, 3, 4, 5 };
//			int b[n];
//			int c = 0;
//			for (int i = 0; i < n; i++)
//			{
//				if (i + k < n)
//				{
//					b[i + k] = a[i];
//				}
//				else
//					b[c++] = a[i];
//			}
//			cout << "Final arrays\n";
//			for (int i = 0; i < n; i++)
//			{
//				cout << b[i] << "\n";
//			}
//		}
//
//
//	#define q 5
//		void task2()
//		{
//			//40.***Создайте двухмерный массив
//			//Заполните его случайными числами и покажите на экран
//			//Выполните сортировку массива
//			//Полученный результат покажите на экран.
//			int A[q][q];
//			int i, j, k, r;
//			int s;
//			for (i = 0; i < q; i++)
//			{
//				for (j = 0; j < q; j++)
//				{
//					A[i][j] = 0 + rand() % 20;
//					cout << A[i][j] << " ";
//
//				}
//				cout << "\n";
//			}
//			cout << "\n====================================\n";
//			for (k = 0; k < q; k++)
//			{
//				for (r = 0; r < q; r++)
//				{
//					for (i = 0; i < q; i++)
//					{
//						for (j = 0; j < q; j++)
//						{
//							if (A[i][j] > A[k][r])
//							{
//								s = A[i][j];
//								A[i][j] = A[k][r];
//								A[k][r] = s;
//							}
//						}
//					}
//				}
//			}
//			for (i = 0; i < q; i++)
//			{
//				for (j = 0; j < q; j++)
//				{
//					cout << A[i][j] << " ";
//				}
//				cout << "\n";
//			}
//		}
//
//
//
//		int kub(int x)
//		{
//			return x * x*x;
//		}
//		void task3()
//		{
//			//1.*Напишите функцию, которая принимает целое число, и возвращает его куб.
//			int a = kub(5);
//			cout << a << endl;
//		}
//
//
//
//
//		int summ(int s, int a)
//		{
//			return a + s;
//		}
//		void task4()
//		{
//			//2.*Напишите функцию, которая принимает два целых числа, и возвращает их сумму.
//			int a = 5;
//			int	s = 6;
//			cout << summ(a, s) << endl;
//		}
//
//
//
//
//		int s(int a, int b)
//		{
//			return(a > b ? a : b);
//		}
//		void task5()
//		{
//			//4.*Напишите функцию, которая принимает два целых числа, и определяет большее из них.
//			int a = 5;
//			int b = 10;
//			cout << s(a, b) << endl;
//		}
//
//
//
//
//
//
//		int bol(int a, int b, int c)
//		{
//			if (a > b && a > c)
//				return a;
//			if (b > a && b > c)
//				return b;
//			if (c > b && c > a)
//				return c;
//		}
//		void task6()
//		{
//			//5.*Напишите функцию, которая принимает три целых числа, и определяет большее из них.
//			int a = 5;
//			int b = 6;
//			int c = 13;
//			cout << bol(a, b, c) << endl;
//		}
//
//
//
//
//		bool isUpper(char c)
//		{
//			if (c >= 'A' && c <= 'Z')
//				return true;
//			else
//				return false;
//		}
//		void task7()
//		{
//			char c;
//			cin >> c;
//			cout << isUpper(c) << endl;
//		}
//
//
//		//Объем цилиндра
//		float S(float R, float h)
//		{
//			float V = 3.14*R*R*R*h;
//			return V;
//		}
//		void task8()
//		{
//			float R = 0 + rand() % 5;
//			float h = 0 + rand() % 5;
//			cout << S(R, h) << endl;
//		}
//
//
//
//
//
//		char W(int a, int b)
//		{
//			if (a > b)
//				return '>';
//			if (a < b)
//				return '<';
//			if (a == b)
//				return '=';
//		}
//		void task9()
//		{
//			float a = 0 + rand() % 5;
//			float b = 0 + rand() % 5;
//			cout << W(a, b) << endl;
//		}
//
//
//
//
//
//		double fact(int n)
//		{
//			return n < 2 ? 1 : n * fact(n - 1);
//		}
//		void task10()
//		{
//			//Написать функцию "Факториал" и программу, использующую эту функцию для вывода таблицы факториалов
//			for (int n = 0; n < 15; n++)
//			{
//				cout << '\t' << n << '\t' << fact(n) << '\n';
//			}
//		}
//
//
//		int dohod(float vklad, float stavka, float srok)
//		{
//			float s = vklad*(stavka / 365)*srok;
//		}
//		void task11()
//		{
//		////Написать функцию Dohod, которая вычисляет доход по вкладу
//		////Исходными данными для функции являются : величина вклада, процентная ставка(годовых) и срок вклада(количество дней).
//			float vklad = 0 + rand() % 500;
//		float stavka = 0.5 + rand() % 5;
//			float srok = 1 + rand() % 10;
//			cout << dohod(vklad,stavka,srok) << endl;
//		}
//
//
//
//
//		bool glash(char bukva)
//		{
//			char a[11] = "аеуоиыэюя";
//			for (int i = 0; i < 10; i++)
//			{
//				if (a[i] == bukva)
//					return 1;
//			}
//			return 0;
//		}
//		void task11()
//		{
//			//Написать функцию glasn, которая возвращает 1, если символ, полученный функцией в качестве аргумента, является гласной буквой русского алфавита, и ноль — в противном случае.
//			SetConsoleCP(1251);
//			SetConsoleOutputCP(1251);
//			char bukva;
//			cin >> bukva;
//			cout << glash(bukva) << endl;
//		}
//
//
//
//		void stroka(int l, char ch)
//		{
//			for (int i = 0; i < l; i++)
//				cout << ch;
//		}
//		void task12()
//		{
//			//Написать функцию, которая выводит строку, состоящую из одинаковых символов.Длина строки и символ являются параметрами функции.
//			SetConsoleCP(1251);
//			SetConsoleOutputCP(1251);
//			stroka(5, 'a');
//		}
//
//
//		int parallepiped(int a, int b, int c)
//		{
//			return a * c + a * b + b * c;
//		}
//		int parallepiped1(int a, int b, int c)
//		{
//			return a * b*c;
//		}
//		void task13()
//		{
//			//Написать функцию, которая вычисляет объем и площадь поверхности параллелепипеда
//			SetConsoleCP(1251);
//			SetConsoleOutputCP(1251);
//			int a = 0 + rand() % 10;
//			int b = 0 + rand() % 10;
//			int c = 0 + rand() % 10;
//			cout << parallepiped(a, b, c) << endl;
//			cout << parallepiped1(a, b, c) << endl;
//		}
//
//
//		void frame(short x, short y, short cx, short cy)
//		{
//			while (y--)
//				cout << endl;
//			short n = cy - 1;
//			while (cy--)
//			{
//				for (short i = 0; i <= x + cx; i++)
//				{
//					if ((cy == n && i >= x) || (!cy && i >= x) || i == x || i == x + cx)
//						cout.put((char)40);
//					else
//						cout.put(' ');
//				}
//				cout << endl;
//			}
//		}
//		void task14()
//		{
//			//Написать функцию frame, которая выводит на экран рамку.В качестве параметров функции должны передаваться координаты левого верхнего угла и размер рамки.
//			SetConsoleCP(1251);
//			SetConsoleOutputCP(1251);
//			frame(15, 2, 28, 18);
//		}
//	}
//	//------------------------------------------------------------------------------------------------------------------------------------
//	//1. Описать процедуру PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B 
//	/*void powerA3(int A, int &B)
//	{
//		B = A * A*A;
//	}*/
//	//-----------------------------------------------------------------------------------------------------------------------------------
//	//2.писать процедуру PowerA234(A, B, C, D), вычисляющую вторую, третью и четвертую степень числа A и возвращающую эти степени соответственно в переменных B, C и D 
//	/*void powerA234(int A, int &B, int &C, int &D)
//	{
//		B = A * A;
//		C = B * A;
//		D = C * A;
//	}*/
//	//---------------------------------------------------------------------------------------------------------------------------------
//	//3.Описать процедуру Mean(X, Y, AMean, GMean), вычисляющую среднее арифметическое AMean = (X+Y)/2 и среднее геометрическое GMean = √X·Y двух положительных чисел X и Y 
//	/*void change_number2(int a, int b, int &c, int &d)
//	{
//		c = (a + b) / 2;
//		b = sqrt(a*b);
//	}*/
//	//-------------------------------------------------------------------------------------------------------------------------------------
//	//5..ОписатьпроцедуруRectPS(x1,y1,x2,y2,P,S),вычисляющуюпериметрP и площадь S прямоугольника со сторонами, параллельными осям координат, по координатам (x1,y1), (x2,y2) его противоположных вершин 
//	/*bool rectPS(double x1, double y1, double x2, double y2, double *P, double *S)
//	{
//		bool res = true;
//		double a = sqrt(pow(x1 - x1, 2) + pow(y2 - y1, 2));
//		double b = sqrt(pow(x2 - x1, 2) + pow(y1 - y1, 2));
//		if ((a != 0) && (b != 0))
//		{
//			*P = 2 * (a + b);
//			*S = a * b;
//			return true;
//		}
//		else
//			return false;
//	}*/
//	//------------------------------------------------------------------------------------------------------------------------------
//	//4. Описать процедуру TrianglePS(a, P, S), вычисляющую по стороне a равностороннеготреугольникаегопериметрP=3·aиплощадьS =a2·√3/4 
//	/*void TrianglePS(int a, int &b, int &c)
//	{
//		b = 3 * a;
//		c = pow(2, a)*(sqrt(3) / 4);
//	}*/
//	//-----------------------------------------------------------------------------------------------------------------------------
//	//6. Описать процедуру DigitCountSum(K, C, S), находящую количество C цифр целого положительного числа K, а также их сумму S
//	/*void DigitCountSum(int K, int &C, int &S)
//	{
//		while (K % 10)
//		{
//			S += K % 10;
//			C++;
//			K /= 10;
//		}
//	}*/
//	//-------------------------------------------------------------------------------------------------
//	//7.Описать процедуру InvertDigits(K), меняющую порядок следования цифр целого положительного числа K на обратный 
//	/*void InvertDigits(int a)
//	{
//		int p = a, b = 0, n = 1, *arr;
//		while (p >= 10)
//		{
//			p = (p - p % 10) / 10;
//			n++;
//		}
//		arr = new int[n];
//		p = a;
//		for (int i = 0; i < n; i++)
//		{
//			arr[i] = p % 10;
//			p = (p - p % 10) / 10;
//			b = b * 10 + arr[i];
//		}
//		cout << b << endl;
//	}*/
//	//----------------------------------------------------------------------------------------------------
//	//8.писать процедуру AddRightDigit(D, K), добавляющую к целому положительному числу K справа цифру D
//	/*void AddRightDigit(int d, int &k)
//	{
//		k = (k * 10) + d;
//	}*/
//	//-------------------------------------------------------------------------------------------------------
//	//9.писать процедуру AddLeftDigit(D, K), добавляющую к целому положительному числу K слева цифру D  
//	/*void AddLeftDigit(int &D, int K)
//	{*
//		int g = D;
//		int f = 0;
//		while (g)
//		{
//			g = g / 10;
//			f++;
//		}
//		D = (K*pow(10, f)) + D;
//	}*/
//	//------------------------------------------------------------------------------------------------------------
//	//10.Описать процедуру Swap(X, Y), меняющую содержимое переменных X и Y
//	/*void Swap(int *x, int *y)
//	{
//		int tmp = *x;
//		*x = *y;
//		*y = tmp;
//	}*/
//	//-----------------------------------------------------------------------------------------------------------
//	//11.Описать процедуру Minmax(X, Y), записывающую в переменную X минимальное из значений X и Y, а в переменную Y — максимальное из этих значений
//	/*void Minmax(int &X, int &Y)
//	{
//		if (X < Y)
//		{
//			X = Y;
//		}
//	}*/
//	//------------------------------------------------------------------------------------------------------
//	//01.массивы бинарный поиск
//	/*int binarySerch(int a[], int size, int key)
//	{
//		int low = 0;
//		int high = size - 1;
//		int middle;
//		while (low<=high)
//		{
//			middle = (low + high) / 2;
//			if (a[middle] < key)
//				low = middle + 1;
//			else if (a[middle] > key)
//				high = middle - 1;
//			else
//				return middle;
//		}
//		return -1;
//	}*/
//{
//	//===================================================================================================================
//	//01.массивы бинарный поиск
//	/*int arr[9] = { 1,3,4,5,6,9,11,12,14 };
//		cout << binarySerch(arr, 9, 12);
//		cout << endl;*/
//		//===================================================================================================================
//		//11.Описать процедуру Minmax(X, Y), записывающую в переменную X минимальное из значений X и Y, а в переменную Y — максимальное из этих значений
//		/*int X, Y;
//			cin >> X;
//			cin >> Y;
//			Minmax(X, Y);
//			printf("X =%d\n");
//			printf("Y =%d\n");*/
//			//========================================================================================================================
//			//10.Описать процедуру Swap(X, Y), меняющую содержимое переменных X и Y
//			/*int a = 5;
//				int b = 7;
//				printf("a=%d\tb=%d\n", a, b);
//				Swap(&a, &b);
//				printf("a=%d\tb=%d\n", a, b);*/
//				/*int D, K = 1;
//					cin >> D;
//					AddLeftDigit(D, K);
//					cout << D << endl;*/
//					//======================================================================================================================
//					//8.писать процедуру AddRightDigit(D, K), добавляющую к целому положительному числу K справа цифру D
//					/*int k, d = 1;
//						cin >> k;
//						AddRightDigit(d, k);
//						cout << k << endl;*/
//						//=================================================================================================================
//						//7.Описать процедуру InvertDigits(K), меняющую порядок следования цифр целого положительного числа K на обратный  /* int a;
//						/*cout << "Vvedite chislo" << endl;
//								cin >> a;
//								InvertDigits(a);*/
//								//=====================================================================================================================
//								//6.Описать процедуру DigitCountSum(K, C, S), находящую количество C цифр целого положительного числа K, а также их сумму S
//								/*int k, c, s;
//									cin >> k;
//									DigitCountSum(k, c, s);
//									cout << c << endl;
//									cout << s << endl;*/
//									//==========================================================================================================================
//									//4. Описать процедуру TrianglePS(a, P, S), вычисляющую по стороне a равностороннеготреугольникаегопериметрP=3·aиплощадьS =a2·√3/4 
//									/*int a, b, c;
//										cin >> a;
//										TrianglePS(a, b, c);
//										cout << b << endl;
//										cout << c << endl;*/
//										//============================================================================================================================
//										//5..ОписатьпроцедуруRectPS(x1,y1,x2,y2,P,S),вычисляющуюпериметрP и площадь S прямоугольника со сторонами, параллельными осям координат, по координатам (x1,y1), (x2,y2) его противоположных вершин 
//										/*double x1, x2, y1, y2;
//											double P = 0, S = 0;
//											cout << "Ввести координаты\nx1:\n";
//											cin >> x1;
//											cout << "x2:\n";
//											cin >> x2;
//											cout << "y1:\n";
//											cin >> y1;
//											cout << "y2:\n";
//											cin >> y2;
//											if (rectPS(x1, y1, x2, y2, &P, &S) == true)
//											{
//												cout << "Площадь: \n" << S << "\n";
//												cout << "Периметр: \n" << P << "\n";
//											}*/
//											//===============================================================================================================================
//											//3.Описать процедуру Mean(X, Y, AMean, GMean), вычисляющую среднее арифметическое AMean = (X+Y)/2 и среднее геометрическое GMean = √X·Y двух положительных чисел X и Y 
//											/*int a, b, c, d;
//												cin >> a;
//												cin >> b;
//												change_number2(a, b, c, d);
//												cout << c << endl;
//												cout << d << endl;*/
//												//================================================================================================================================
//												//2.писать процедуру PowerA234(A, B, C, D), вычисляющую вторую, третью и четвертую степень числа A и возвращающую эти степени соответственно в переменных B, C и D 
//												/*int a, b, c, d;
//													cin >> a;
//													powerA234(a, b, c, d);
//													cout << b << endl;
//													cout << c << endl;
//													cout << d << endl;*/
//													//==================================================================================================================================
//													//1. Описать процедуру PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B 
//													/*int x,y;
//														cin >> x;
//														powerA3(x,y);
//														cout<< y;*/
//
//}
//*********************************************************************************************************************************
//17.**Напишите функцию, которая принимает три массива целых чисел.Выполнить поэлементное сложение элементов первых двух массивов, и результат занести в третий массив.
void func(int a[], int b[], int c[], int s)
{
	for (int i = 0; i < 10; i++)
	{
		a[i] = 0 + rand() % 10;
		b[i] = 0 + rand() % 10;
		c[i] = a[i] + b[i];	
		cout << c[i] << endl;
		cout << endl;
	}
}
void task1()
{
	int a[10], b[10], c[10];
	func(a, b, c, 10);
}

//**********************************************************************************************************************************
//18.**Напишите функцию, которая принимает вещественное число и количество знаков и возвращает округленное число до указанного знака.
double okruglenie(double var, int n)
{
	var = double(int(var*pow(10, n)+0.5) / pow(10, n));
	return var;
}
void task2()
{
	double x;
	int n;
	cin >> x >> n;
	cout << fixed << setprecision(n) << okruglenie(x, n) << endl;
}

//***********************************************************************************************************************************
//19.*Напишите функцию, которая определяет количество нулевых элементов передаваемого массива. Реализовать перегрузки для различных типов массивов.
int zeros(int a[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % 20;
		if (a[i] == 0)
		{
			k++;
		}
		cout << a[i]<< endl;
	}
	cout << endl;
	return k;
}
void task3()
{
	int a[10];
	cout << zeros(a, 10) << endl;
}

//***************************************************************************************************************************************
//Сортировка пузырьком в функции.
void SortMass(int* m, int n)
{
	for (int i = 0; i < n; i++)
	{
		m[i] =0 + rand() % 30;
	}
	for (int i = n - 1; i >= 1; i--)
		for (int j = 0; j < i; j++)
		{
			if (m[j] > m[j + 1])
			{
				swap(m[j], m[j + 1]);
			}
		}
	for (int i = 0; i < 10; i++)
	{
		cout << m[i] << endl;
	}
	cout << endl;
}
void task4()
{
	int m[10];
	SortMass(m, 10);
}

//**********************************************************************************************************************************************
//символьный ввод в массив.
void task5()
{
	char c[50];
	cin >> c;
	for (int i = 0; i < strlen(c); i++)
	{
		cout << c[i] << endl;
	}
}

//**********************************************************************************************************************************************
//26.Напишите функцию, которая принимает выражение в виде строки и проверяет, правильно ли расставлены в нем скобки
bool check(char c[])
{
	int k = 0;
	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] == '(')k++;
		else if (c[i] == '{')k++;
		else if (c[i] == '[')k++;
		else if (c[i] == ')')k--;
		else if (c[i] == '}')k--;
		else if (c[i] == ']')k--;
		if (k < 0) return false;
	}
	if (k == 0) return true;
}
void task6()
{
	char c[50] = "()(text)()";
	cout << check(c) << endl;
}

//***********************************************************************************************************************************************
//СОРТИРОВКА ВСТАВКАМИ!
void vstavka(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0 + rand() % 30;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}
void task7()
{
	int a[7];
	vstavka(a, 7);
}

//************************************************************************************************************************************************
//СОРТИРОВКА ВЫБОРОМ
void vibor(int* arr, int n)
{
	int min, min_pos;
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0 + rand() % 30;
	}
	for (int i = 0; i < n-1; i++)
	{
		min = INT_MAX;
		for (int j = i; j < n; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				min_pos = j;
			}
		}
		swap(arr[i], arr[min_pos]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}
void task8()
{
	int arr[10];
	vibor(arr, 10);
}

//***********************************************************************************************************************
//4.Написать функции и протестировать их в основной программе. Функции печатают фигуры и используют параметры по умолчанию
//Параметры по умолчанию определяют, каким символом печатается фигура и является ли она заполненной или печатается только рамка фигуры.

	const int n = 10;
	char z, r;
	int a, b, c;
	void res1(int a, char z)
	{
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (i == j)
				{
					cout << " * ";
				}
				else if (i > j)
				{
					cout << "  ";
				}
				else
				{
					cout << " * ";
				}
			}
			cout << endl;
		}
	}
	void res3(int c, char r)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i + j == n - 1)
				{
					cout << " - ";
				}
				else if (j == 0 && i < n - 1)
				{
					cout << " - ";
				}
				else if (i == 0 && j > 0 && j < n - 1)
				{
					cout << " - ";
				}
				else
				{
					cout << "   ";
				}
			}
			cout << endl;
		}
	}

void task9()
{
		res1(a, z);
		res3(c, r);
}

//**************************************************************************************************************************
//7.Hаписать функцию, которая заполняет переданную ей квадратную матрицу по правилу: диагональные элементы ровны 1, другие элементы ровни 0
//Использовать функцию для заполнения матрицы размером 7хх.7. 
void mat()
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (i == j || i == 6 - j)
			{
				cout << " 1 ";
			}
			else if (i < j)
			{
				cout << " 0 ";
			}
			else
			{
				cout << " 0 ";
			}
		}
		cout << endl;
	}
}
void task10()
{
	mat();
}

//****************************************************************************************************************************
//
template<typename T>
void sortArray(T arr[][30], int n, int m, char sorting_order)
{
	if (sorting_order == 'a')
	{
		for (int i = 0; i < n; i++)
		{
			for (int pass = 0; pass < m - 1; pass++)
			{
				for (int j = 0; j < m-1; j++)
				{
					if (arr[i][j] > arr[i][j + 1])
					{
						swap(arr[i][j], arr[i][j + 1]);
					}
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			for (int pass = 0; pass < m - 1; pass++)
			{
				for (int j = 0; j < m - 1; j++)
				{
					if (arr[i][j] > arr[i][j + 1]) 
					{
						swap(arr[i][j], arr[i][j + 1]);
					}
				}
			}
		}
	}
}
template<typename T>
void printArray(T a[][30], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for ( int j = 0; j <m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void task11()
{
	int a[20][30];
	double b[4][30] = { {2.5,5.8,0},{4.9,0.5,-1.2} };
	sortArray(b, 3, 3, 'd');
	printArray(b, 3, 3);
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("Введите номер задания->");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {task1(); }break;
	case 2: {task2(); }break;
	case 3: {task3(); }break;
	case 4: {task4(); }break;
	case 5: {task5(); }break;
	case 6: {task6(); }break;
	case 7: {task7(); }break;
	case 8: {task8(); }break;
	case 9: {task9(); }break;
	case 10: {task10(); }break;
	case 11: {task11(); }break;
	default:
		break;
	}
	printf("чтобы продолжить нажмите 1 ->");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}
