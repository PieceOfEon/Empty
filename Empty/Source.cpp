#include <iostream>
#include <vector>
#include<string>
#include <conio.h>

using namespace std;

class Vec
{
private:
	vector <int> a;
	vector <float> w;
	vector <char> r;
	vector <string> f;
public:

	void int1()
	{
		int size;
		cout << "Enter size vector: ";
		cin >> size;
		a.resize(size);
		for (int i = 0; i < a.size(); i++)
		{
			cout << i  << ":\t" << a[i] << "\n";
		}
		int ku;
		cout << "1 - Enter elem\n2 - Ext\n";
		cin >> ku;
		if (ku == 1)
		{
			int b;
			cout << "Enter " << size << " elem: \n";
			for (int i = 0; i < a.size(); i++)
			{
				cout << i << ":\t";
				cin >> b;

				a[i] = b;

			}
			cout << "\n\n";

			for (int i = 0; i < a.size(); i++)
			{
				cout << i << ":\t" << a[i] << "\n";
			}
		}
	}

	void changeint()
	{
		for (int i = 0; i < a.size(); i++)
		{
			cout << i  << ":\t" << a[i] << "\n";
		}

		int j;
		cout << "Enter change elem: ";
		cin >> j;
		int p;
		cout << "Enter new value: ";
		cin >> p;
		a.at(j)=p;
		for (int i = 0; i < a.size(); i++)
		{
			cout << i << ":\t" << a[i] << "\n";
		}
	}

	void changefloat()
	{
		for (int i = 0; i < w.size(); i++)
		{
			cout << i  << ":\t" << w[i] << "\n";
		}
		int j;
		cout << "Enter change elem: ";
		cin >> j;
		float p;
		cout << "Enter new value: ";
		cin >> p;
		w.at(j) = p;
		for (int i = 0; i < w.size(); i++)
		{
			cout << i<< ":\t" << w[i] << "\n";
		}
	}

	void float1()
	{
		int size1;
		cout << "Enter size vector: ";
		cin >> size1;
		w.resize(size1);
		for (int i = 0; i < w.size(); i++)
		{
			cout << i << ":\t" << w[i] << "\n";
		}
		int ku;
		cout << "1 - Enter elem\n2 - Ext\n";
		cin >> ku;
		if (ku == 1)
		{
			float b;
			cout << "Enter " << size1 << " elem: \n";

			for (int i = 0; i < w.size(); i++)
			{
				cout << i << ":\t";
				cin >> b;

				w[i] = b;

			}
			cout << "\n\n";

			for (int i = 0; i < w.size(); i++)
			{
				cout << i << ":\t" << w[i] << "\n";
			}
		}
	}

	void char1()
	{
		int size1;
		cout << "Enter size vector: ";
		cin >> size1;
		r.resize(size1);
		for (int i = 0; i < r.size(); i++)
		{
			cout << i << ":\t" << r[i] << "\n";
		}

		int ku;
		cout << "1 - Enter elem\n2 - Ext\n";
		cin >> ku;
		if (ku == 1)
		{
			char b;
			cout << "Enter " << size1 << " elem: \n";
			cin.ignore();
			for (int i = 0; i < r.size(); i++)
			{
				cout << i << ":\t";

				cin >> b;
				r[i] = b;

			}
			cout << "\n\n";

			for (int i = 0; i < r.size(); i++)
			{
				cout << i << ":\t" << r[i] << "\n";
			}
		}
		
	}

	void changechar()
	{
		for (int i = 0; i < r.size(); i++)
		{
			cout << i << ":\t" <<r[i] << "\n";
		}

		int j;
		cout << "Enter change elem: ";
		cin >> j;
		char p;
		cout << "Enter new value: ";
		cin >> p;
		r.at(j) = p;
		for (int i = 0; i < r.size(); i++)
		{
			cout << i << ":\t" << r[i] << "\n";
		}
	}

	void string1()
	{
		int size1;

		cout << "Enter size vector: ";
		cin >> size1;
		f.resize(size1);
		for (int i = 0; i < f.size(); i++)
		{
			cout << i << ":\t" << f[i] << "\n";
		}
		int ku;
		cout << "1 - Enter elem\n2 - Ext\n";
		cin >> ku;
		if (ku == 1)
		{
			string b;
			cout << "Enter " << size1 << " str: \n";
			cin.ignore();
			for (int i = 0; i < f.size(); i++)
			{
				cout << i << ":\t";

				getline(cin, b);
				f[i] = b;

			}
			cout << "\n\n";

			for (int i = 0; i < f.size(); i++)
			{
				cout << i << ":\t" << f[i] << "\n";
			}
		}
	}

	void changestring()
	{
		for (int i = 0; i < f.size(); i++)
		{
			cout << i << ":\t" << f[i] << "\n";
		}

		int j;
		cout << "Enter change elem: ";
		cin >> j;
		char p;
		cout << "Enter new value: ";
		cin >> p;
		f.at(j) = p;
		for (int i = 0; i < f.size(); i++)
		{
			cout << i << ":\t" << f[i] << "\n";
		}
	}

};

int main()
{
	Vec Ve;
	char vvod;
	do
	{
		cout << "Select data type:\n";
		cout << "1 - Type Int\n";
		cout << "2 - Type Float\n";
		cout << "3 - Type Char\n";
		cout << "4 - Type String\n";
		vvod = _getch();
		switch (vvod)
		{
		case'1':
		{
			char vvod;
			vvod = 0;
			while (vvod != 27)
			{
				Ve.int1();
				system("pause");
				do
				{
					cout << "change the vector?\n";
					cout << "1 - Yes.\n";
					cout << "2 - No.\n";
					vvod = _getch();
					switch (vvod)
					{
					case '1':
					{
						Ve.changeint();
						break;
					}
					case'2':
					{
						vvod = 27;
						break;
					}
					}
				} while (vvod != 27);
			}
			break;
		}
		case'2':
		{
			char vvod;
			vvod = 0;
			while (vvod != 27) 
			{
				Ve.float1();
				system("pause");
				cout << "change the vector?\n";
				do
				{
					cout << "1 - Yes.\n";
					cout << "2 - No.\n";

					vvod = _getch();
					switch (vvod)
					{
					case '1':
					{
						Ve.changefloat();
						break;
					}
					case'2':
					{
						vvod = 27;
						break;
					}
					}
				} while (vvod != 27);
			}
			system("pause");
			break;
		}
		case'3':
		{
			char vvod;
			vvod = 0;
			while (vvod != 27)
			{
				Ve.char1();
				system("pause");
				cout << "change the vector?\n";
				do
				{
					cout << "1 - Yes.\n";
					cout << "2 - No.\n";

					vvod = _getch();
					switch (vvod)
					{
					case '1':
					{
						Ve.changechar();
						break;
					}
					case'2':
					{
						vvod = 27;
						break;
					}
					}
				} while (vvod != 27);
			}
			system("pause");
			break;
		}
		case'4':
		{
			char vvod;
			vvod = 0;
			while (vvod != 27)
			{
				Ve.string1();
				system("pause");
				cout << "change the vector?\n";
				do
				{
					cout << "1 - Yes.\n";
					cout << "2 - No.\n";

					vvod = _getch();
					switch (vvod)
					{
					case '1':
					{
						Ve.changestring();
						break;
					}
					case'2':
					{
						vvod = 27;
						break;
					}
					}
				} while (vvod != 27);
			}
			system("pause");
			break;
		}
		}
	} while (vvod != 27);
}