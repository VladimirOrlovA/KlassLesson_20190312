#include<iostream>
#include<Windows.h>
#include<fstream>  

using namespace std;

 /*����� fstream ������������� ���������� ��� ���������� ������ �� ����� � ��� ������ � ����. 
 � ����� �� ����� ����� �� ����� iostream, ������� �������� � ��������, ��������� ������� ��� ���� ����. 
 ������� ��� �������� �������� ����� ��, �� ������� ���������, ��� � ���������� ���� �� iostream.*/


//int main()
//{
//	SetConsoleCP(1251);						// ��������� ������� �������� win-cp 1251 � ����� �����
//	SetConsoleOutputCP(1251);				// ��������� ������� �������� win-cp 1251 � ����� ������
//
//	ofstream my_file;						// output file stream
//
//	my_file.open("out.txt");				// ����������� � ���������� my_file ���� out.txt 
//
//	my_file << "Hello, World!" << endl;		// ������ � ���� out.txt ����� ���������� my_file
//	my_file << "next string - 1" << endl;	// ����� ������ ������� � ���� my_file
//	my_file << "next string - 2" << endl;	// ����� ������ ������� � ���� my_file � �.�.
//
//
//	system("pause");
//	return 0;
//}


///////////////////////////////////////////////////////


//int main()
//{
//	SetConsoleCP(1251);						// ��������� ������� �������� win-cp 1251 � ����� �����
//	SetConsoleOutputCP(1251);				// ��������� ������� �������� win-cp 1251 � ����� ������
//
//	ofstream my_file;						// output file stream
//
//	//my_file.open("out.txt", ios::out);		// ����������� � ���������� my_file ���� out.txt 
//
//	my_file.open("out.txt", ios::app);		// ����������� � ���������� my_file ���� out.txt � ios::app ��������� ������ �������� � ����
//
//	my_file << endl;
//
//	int a[5] = { 4,78,12,34,100 };
//
//	for (int i = 0; i < 5; i++)
//		my_file << a[i] << " ";
//	
//	my_file.close();						// ����������� ���������� �� �����
//
//
//	system("pause");
//	return 0;
//}


/////// ������ �� ����� //////

//int main()
//{
//	SetConsoleCP(1251);						// ��������� ������� �������� win-cp 1251 � ����� �����
//	SetConsoleOutputCP(1251);				// ��������� ������� �������� win-cp 1251 � ����� ������
//
//	ifstream in_file;						// output file stream
//
//	in_file.open("out.txt");
//
//	int var;
//	int tmp = 0;
//	int count = 0;
//	
//	/*in_file >> var;
//	cout << var << endl;*/
//
//	/*while (in_file >> var)
//		cout << var << endl;*/
//
//	while (in_file >> var)
//	{
//		cout << var << endl;
//		tmp += var;
//		count++;
//	}
//	
//	cout << "����� ����� -> "<<tmp << endl;
//	cout << "���-�� ����� -> " << count << endl;
//
//	system("pause");
//	return 0;
//}


////////////// ����������� ������ �� ������ ����� � ������ /////////////////

//int main()
//{
//	SetConsoleCP(1251);						// ��������� ������� �������� win-cp 1251 � ����� �����
//	SetConsoleOutputCP(1251);				// ��������� ������� �������� win-cp 1251 � ����� ������
//
//	ifstream in_file;						// output file stream
//	ofstream out_file;
//
//	in_file.open("source.cpp");
//	out_file.open("out.txt");
//
//	char var;
//		
//	while (in_file.get(var))
//	{
//		out_file << var;
//	}
//
//
//	system("pause");
//	return 0;
//}



/////////////////////////////////////

/*int main()
{
	SetConsoleCP(1251);						// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251);				// ��������� ������� �������� win-cp 1251 � ����� ������

	ifstream in_file;						// in file stream - ��������� �� �����
	ofstream out_file;						// output file stream - ����� � ����

	in_file.open("Source.cpp");
	

	char var;
	int count = 0;

	while (in_file.get(var))
	{
		count++;
	}

	cout << "������� ���-�� ���� �������� -> " << count << endl;

	in_file.close();
	in_file.open("Source.cpp");
	count = 0;

	while (in_file >> var)
	{
		count++;
	}

	cout << "������� ���-�� ������ ������� ������� -> " << count << endl;

	system("pause");
	return 0;
}*/


///////////////////// ������� ���-�� ����  //////////////////////////

/*
int main()
{
	SetConsoleCP(1251);						// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251);				// ��������� ������� �������� win-cp 1251 � ����� ������

	ifstream in_file;						// in file stream - ��������� �� �����
	ofstream out_file;						// output file stream - ����� � ����

	char str[50];

	in_file.open("Source.cpp");


	char var;
	int count = 0;

	while (in_file >> str)
	{
		count++;
	}

	cout << "������� ���-�� ���� ���� -> " << count << endl;

	in_file.close();
	in_file.open("Source.cpp");
	count = 0;

	

	system("pause");
	return 0;
}*/


///////////////////// ������� ���-�� �����  //////////////////////////

/*
int main()
{
	SetConsoleCP(1251);						// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251);				// ��������� ������� �������� win-cp 1251 � ����� ������

	ifstream in_file;						// in file stream - ��������� �� �����
	//ofstream out_file;						// output file stream - ����� � ����

	char str[1000];

	in_file.open("Source.cpp");


	char var;
	int count = 0;

	while (in_file.getline(str,1000))
	{
		cout << str << endl;
		count++;
	}

	cout << "������� ���-�� ����� -> " << count << endl;

	


	system("pause");
	return 0;
}
*/


/////////////// ������ ����� //////////////


int main()
{

	char ss[20][30];					//  [20]- ���-�� �����   [30] - ���-�� �������� � ������;

	ofstream out_file("out.txt");

	for (int i = 0; i < 5; i++)
	{
		cin.getline(ss[i], 30);			// ��������� ������
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout<<ss[i]<<endl;				// ������� ������
		
		out_file << ss[i] << endl;

	}

	cout << endl;

	system("pause");
}



//////////////////// ���������� �� ����� C_lab5_pro21_files_zp  ////////////////////

// 7. ��� ��������� ����.������� �� ���� ��������� ������.��������� �������� � ������ ����.

int main()
{
	SetConsoleCP(1251);						// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251);				// ��������� ������� �������� win-cp 1251 � ����� ������

	ifstream in_file;						// output file stream
	ofstream out_file;

	in_file.open("source.cpp");
	out_file.open("out.txt");

	char var;
	
	while (in_file.getline(str, 1000))
	{
		cout << str << endl;
		count++;
	}

	while (in_file.get(var))
	{
		out_file << var;
	}


	system("pause");
	return 0;
}
