#include <iostream>
using namespace std;

void main()
{
	int i, j, num;
	cout << "input (3~15) : ";
	while (cin >> num)
	{
		if (num < 3 || num>15 || num % 2 == 0)
		{
			if (num == -1)
			{
				break;
			}
			else
				cout << " please input again!" << endl;
		}
		else
		{

			if (num >= 3 && num <= 15)
			{
				for (i = 1; i <= num / 2 + 1; i++)
				{
					for (j = i; j <= num / 2; j++)
					{
						cout << " ";
					}
					for (int k = 1; k <= i * 2 - 1; k++)
					{
						cout << "*";
					}
					cout << endl;
				}
			}

			if (num >= 3 && num <= 15)
			{
				for (i = num / 2; i >= 1; i--)
				{
					for (j = i; j <= num / 2; j++)
					{
						cout << " ";
					}
					for (int k = 1; k <= i * 2 - 1; k++)
					{
						cout << "*";
					}
					cout << endl;
				}
			}
		}
	}
	system("pause");
}