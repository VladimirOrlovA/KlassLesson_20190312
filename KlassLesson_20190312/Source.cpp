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
	//ofstream out_file;					// output file stream - ����� � ����

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

/*
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
*/


//////////////////// ���������� �� ����� C_lab5_pro21_files_zp  ////////////////////

// 7. ��� ��������� ����.������� �� ���� ��������� ������.��������� �������� � ������ ����.
/*
int main()
{
	SetConsoleCP(1251);						// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251);				// ��������� ������� �������� win-cp 1251 � ����� ������

	ifstream in_file;						// output file stream
	ofstream out_file;

	in_file.open("source.cpp");
	out_file.open("out.txt");

	char str[1000];
	int count(0);
	char var;

	while (in_file.getline(str,1000))
	{
		count++;
	}

	in_file.close();
	in_file.open("Source.cpp");

	for (int i = 0; i < count - 5; i++)
	{
		in_file.getline(str, 1000);
		out_file << str << endl;
	}

	cout << count << endl;

	system("pause");
	return 0;
}
*/


///////////////////  20190213  � ����� Tasks /////////////////

/// 4.	��� ��������� ����. ���������� ������� ����� ����, � ������� ���������� �� ��������� ����� ��� �����, ��������� �� ����� ��� �� ���� ����.

/*
int main()
{
	ifstream file1 ("C:/Users/������/source/repos/KlassLesson_20190312/KlassLesson_20190312/ForTask4.txt");		// � ���� ���������� "/"
	ofstream file2 ("C:\\Users\\������\\source\\repos\\KlassLesson_20190312\\KlassLesson_20190312\\New.txt");	// � ���� ���������� "\\"
	
	char str1[100];

	while (file1 >> str1)
	{
		if (strlen(str1) == 3)
		{
			file2 << str1 << " ";
		}

	}
	
		file1.close();
		file2.close();

		system("pause");
		return 0;
}
*/

// 5.	��� ��������� ����. ���������� ���������� ��� ������ � ������ ����. ������� ����� �� ������ ����� ������ ��������� � �������� ����� � �������� �����.

/*
int main()
{
	ifstream fin ("Source.cpp");
	ofstream fout("Out.txt");

	
	char str[1000];						// ��������� ������ ������ �� 1000 ��������

	while (fin.getline(str,1000))		// ��������� �� ����� "Source.cpp" ������ �� ����� �����
	{
		fout << str << endl;			// ������� � ���� "Out.txt"
	}

	system("pause");
	return 0;
}
*/

/// 6.	��� ��������� ����.���������� ���������� ��� ������ � ������ ����.������� ����� �� ������ ����� ������ ���� �������� �� ��������� � ������� ����� � �������� �����.

/*
int main()
{
	ifstream fin("New.txt");
	ofstream fout("Out.txt");

	char str[50][1000];
	int count(0);

	while (!fin.eof())
	{
		fin.getline(str[count], 1000);
		count++;
	}

	for (int i = count-1; i >= 0; i--)
	{
		fout << str[i] << endl;
	}
}
*/

/// 7.	��� ��������� ����. �������� � ���� ������ �� ���������� ��������(------------), �������� �� ����� ��������� �� �����, � ������� ��� �������.
/// ���� ����� ����� ���, �� ����� ������ ������ ���� ��������� ����� ���� ����� ���������� �����.��������� �������� � ������ ����.

int main()
{
	ifstream fin("New.txt");
	ofstream fout("Out.txt");

	char str[50][120];								// ������ �� 50 ����� �� 120 ���������
	int count(0);									
	int numstr = 0;
	while (!fin.eof())								// ���� �� ��������� ����� �����
	{
		fin.getline(str[count], 1000);				// ���������� ������ � ������ �� �������
		if (!strchr(str[count], ' '))				// ���� ������� ������ � ������ �� ���������� �� �����, ��������������� �� ��������� ������ ��� �������� 
		{
			numstr = count;							
		}
		count++;									// ������� ��� ������
	}

	for (int i = 0; i <= numstr; i++)				// ���� �� ������� ����� ��  ��������� ������ ��� ��������
	{
		fout << str[i] << endl;
	}

	fout << "----------------------------" << endl;	// ���������� ������  "----------------------------"


	for (int i = numstr + 1; i < count; i++)		// ���������� ����� ���������� ������  "----------------------------"
	{
		fout << str[i] << endl;
	}

	/*for (int i = 0; i < count; i++)
	{
		if (i == numstr + 1)
			for (int j = 0; j <= 97; j++)
				str[i][j] = '-';
			
		str[i][98] = '\n';
		str[i][99] = '\0';
			
		fout << str[i] << endl;
	}*/

}



