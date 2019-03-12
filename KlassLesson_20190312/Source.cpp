#include<iostream>
#include<Windows.h>
#include<fstream>  

using namespace std;

 /*Хедер fstream предоставляет функционал для считывания данных из файла и для записи в файл. 
 В целом он очень похож на хедер iostream, который работает с консолью, поскольку консоль это тоже файл. 
 Поэтому все основные операции такие же, за мелкими отличиями, как в предыдущей теме по iostream.*/


//int main()
//{
//	SetConsoleCP(1251);						// установка кодовой страницы win-cp 1251 в поток ввода
//	SetConsoleOutputCP(1251);				// установка кодовой страницы win-cp 1251 в поток вывода
//
//	ofstream my_file;						// output file stream
//
//	my_file.open("out.txt");				// прикрепляет к переменной my_file файл out.txt 
//
//	my_file << "Hello, World!" << endl;		// запись в файл out.txt через переменную my_file
//	my_file << "next string - 1" << endl;	// пишем вторую строчку в файл my_file
//	my_file << "next string - 2" << endl;	// пишем третью строчку в файл my_file и т.д.
//
//
//	system("pause");
//	return 0;
//}


///////////////////////////////////////////////////////


//int main()
//{
//	SetConsoleCP(1251);						// установка кодовой страницы win-cp 1251 в поток ввода
//	SetConsoleOutputCP(1251);				// установка кодовой страницы win-cp 1251 в поток вывода
//
//	ofstream my_file;						// output file stream
//
//	//my_file.open("out.txt", ios::out);		// прикрепляет к переменной my_file файл out.txt 
//
//	my_file.open("out.txt", ios::app);		// прикрепляет к переменной my_file файл out.txt и ios::app позволяет делать дозапись в файл
//
//	my_file << endl;
//
//	int a[5] = { 4,78,12,34,100 };
//
//	for (int i = 0; i < 5; i++)
//		my_file << a[i] << " ";
//	
//	my_file.close();						// открепление переменной от файла
//
//
//	system("pause");
//	return 0;
//}


/////// чтение из файла //////

//int main()
//{
//	SetConsoleCP(1251);						// установка кодовой страницы win-cp 1251 в поток ввода
//	SetConsoleOutputCP(1251);				// установка кодовой страницы win-cp 1251 в поток вывода
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
//	cout << "Сумма чисел -> "<<tmp << endl;
//	cout << "Кол-во чисел -> " << count << endl;
//
//	system("pause");
//	return 0;
//}


////////////// копирование данных из одного файла в другой /////////////////

//int main()
//{
//	SetConsoleCP(1251);						// установка кодовой страницы win-cp 1251 в поток ввода
//	SetConsoleOutputCP(1251);				// установка кодовой страницы win-cp 1251 в поток вывода
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
	SetConsoleCP(1251);						// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);				// установка кодовой страницы win-cp 1251 в поток вывода

	ifstream in_file;						// in file stream - считываем из файла
	ofstream out_file;						// output file stream - пишем в файл

	in_file.open("Source.cpp");
	

	char var;
	int count = 0;

	while (in_file.get(var))
	{
		count++;
	}

	cout << "Выводим кол-во всех символов -> " << count << endl;

	in_file.close();
	in_file.open("Source.cpp");
	count = 0;

	while (in_file >> var)
	{
		count++;
	}

	cout << "Выводим кол-во только видимые символы -> " << count << endl;

	system("pause");
	return 0;
}*/


///////////////////// считаем кол-во слов  //////////////////////////

/*
int main()
{
	SetConsoleCP(1251);						// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);				// установка кодовой страницы win-cp 1251 в поток вывода

	ifstream in_file;						// in file stream - считываем из файла
	ofstream out_file;						// output file stream - пишем в файл

	char str[50];

	in_file.open("Source.cpp");


	char var;
	int count = 0;

	while (in_file >> str)
	{
		count++;
	}

	cout << "Выводим кол-во всех слов -> " << count << endl;

	in_file.close();
	in_file.open("Source.cpp");
	count = 0;

	

	system("pause");
	return 0;
}*/


///////////////////// считаем кол-во строк  //////////////////////////

/*
int main()
{
	SetConsoleCP(1251);						// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);				// установка кодовой страницы win-cp 1251 в поток вывода

	ifstream in_file;						// in file stream - считываем из файла
	//ofstream out_file;						// output file stream - пишем в файл

	char str[1000];

	in_file.open("Source.cpp");


	char var;
	int count = 0;

	while (in_file.getline(str,1000))
	{
		cout << str << endl;
		count++;
	}

	cout << "Выводим кол-во строк -> " << count << endl;

	


	system("pause");
	return 0;
}
*/


/////////////// массив строк //////////////


int main()
{

	char ss[20][30];					//  [20]- кол-во строк   [30] - кол-во символов в строке;

	ofstream out_file("out.txt");

	for (int i = 0; i < 5; i++)
	{
		cin.getline(ss[i], 30);			// считываем строки
	}

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout<<ss[i]<<endl;				// выводим строки
		
		out_file << ss[i] << endl;

	}

	cout << endl;

	system("pause");
}



//////////////////// упражнения из файла C_lab5_pro21_files_zp  ////////////////////

// 7. Дан текстовый файл.Удалить из него последнюю строку.Результат записать в другой файл.

int main()
{
	SetConsoleCP(1251);						// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251);				// установка кодовой страницы win-cp 1251 в поток вывода

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
