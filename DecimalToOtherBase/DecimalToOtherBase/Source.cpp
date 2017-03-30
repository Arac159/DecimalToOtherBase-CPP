#include <iostream>
#include <conio.h>

/*char *get_binary_representation(int number)
{
char* binStr = nullptr; // needs to be allocated
return binStr;
}*/

using namespace std;
// Se da un numar natural. Sa se scrie transformarea numarului in baza 2, baza 8, baza 16.
int main()
{
	int decimalnumber = 0;
	int decimalnumberhex = 0;
	int decimalnumberoctal = 0;
	int divisionresult = 0;
	int numberofcolumns = 0;
	int *binaryarray = nullptr;
	int *octalarray = nullptr;
	int *hexarray = nullptr;
	cout << "Insert a decimal number" << endl;
	cin >> decimalnumber;
	decimalnumberhex = decimalnumberoctal = decimalnumber;
	int i = 1;
	numberofcolumns = 0;
	while (i <= decimalnumber)
	{
		numberofcolumns = numberofcolumns + 1;
		i = i * 2;
	}
	i = 1;
	binaryarray = new int[numberofcolumns];
	int j = 0;
	while (j <= numberofcolumns)
	{
		binaryarray[j] = i;
		i = i * 2;
		j = j + 1;
	}
	numberofcolumns--;
	while (numberofcolumns >= 0)
	{
		divisionresult = decimalnumber / binaryarray[numberofcolumns];
		if (divisionresult >= 1)
		{
			decimalnumber = decimalnumber - binaryarray[numberofcolumns];
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		numberofcolumns = numberofcolumns - 1;
	}
	cout << " = Binary representation" << endl;
	int k = 1;
	divisionresult = 0;
	numberofcolumns = 0;
	while (k <= decimalnumberoctal)
	{
		numberofcolumns = numberofcolumns + 1;

		k = k * 8;
	}
	k = 1;
	octalarray = new int[numberofcolumns];
	int l = 0;
	while (l <= numberofcolumns)
	{
		octalarray[l] = k;
		k = k * 8;
		l = l + 1;
	}
	numberofcolumns--;
	while (numberofcolumns >= 0)
	{
		divisionresult = decimalnumberoctal / octalarray[numberofcolumns];
		if (divisionresult < 10 && divisionresult >= 1)
		{
			decimalnumberoctal = decimalnumberoctal - octalarray[numberofcolumns] * (int)divisionresult;
			cout << (int)divisionresult;
		}
		else if (divisionresult >= 0 && divisionresult<1)
		{
			cout << "0";
		}
		numberofcolumns = numberofcolumns - 1;
	}
	cout << " = Octal representation" << endl;
	int m = 1;
	divisionresult = 0;
	numberofcolumns = 0;
	while (m <= decimalnumberhex)
	{
		numberofcolumns = numberofcolumns + 1;

		m = m * 16;
	}
	m = 1;
	hexarray = new int[numberofcolumns];
	int n = 0;
	while (n <= numberofcolumns)
	{
		hexarray[n] = m;
		m = m * 16;
		n = n + 1;
	}
	numberofcolumns--;
	while (numberofcolumns >= 0)
	{
		divisionresult = decimalnumberhex / hexarray[numberofcolumns];
		if (divisionresult < 10 && divisionresult >= 1)
		{
			decimalnumberhex = decimalnumberhex - hexarray[numberofcolumns] * (int)divisionresult;
			cout << (int)divisionresult;
		}
		else if (divisionresult >= 10 && divisionresult<11)
		{
			decimalnumberhex = decimalnumberhex - hexarray[numberofcolumns] * (int)divisionresult;
			cout << "A";
		}
		else if (divisionresult >= 11 && divisionresult<12)
		{
			decimalnumberhex = decimalnumberhex - hexarray[numberofcolumns] * (int)divisionresult;
			cout << "B";
		}
		else if (divisionresult >= 12 && divisionresult<13)
		{
			decimalnumberhex = decimalnumberhex - hexarray[numberofcolumns] * (int)divisionresult;
			cout << "C";
		}
		else if (divisionresult >= 13 && divisionresult<14)
		{
			decimalnumberhex = decimalnumberhex - hexarray[numberofcolumns] * (int)divisionresult;
			cout << "D";
		}
		else if (divisionresult >= 14 && divisionresult<15)
		{
			decimalnumberhex = decimalnumberhex - hexarray[numberofcolumns] * (int)divisionresult;
			cout << "E";
		}
		else if (divisionresult >= 15 && divisionresult<16)
		{
			decimalnumberhex = decimalnumberhex - hexarray[numberofcolumns] * (int)divisionresult;
			cout << "F";
		}
		else if (divisionresult >= 0 && divisionresult<1)
		{
			cout << "0";
		}
		numberofcolumns = numberofcolumns - 1;
	}
	cout << " = Hexadecimal representation" << endl;
	_getch();
	return 0;
}
