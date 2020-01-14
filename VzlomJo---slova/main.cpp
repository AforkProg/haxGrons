#include <iostream>
using namespace std;
int main()
{
	char word[5]{ 'a', 'a', 'a', 'a', 'a' };
	cout << "your word: ";
	for (int a = 0; a < 5; a++)
	{
		cout << word[a];
	}
	cout << "\n\n";
	cout << "enter key ";
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	int key[5]{ a, b, c, d, e };
	cout << "your key: ";
	for (int u = 0; u < 5; u++)
	{
		cout << key[u];
	}
	cout << endl;
	int l = 0;
	char hack = word[l];
	cout << "cipher succesfully created: ";
	hack += a;
	cout << hack;
	l++;
	hack = word[l];
	hack += b;
	cout << hack;
	l++;
	hack = word[l];
	hack += c;
	cout << hack;
	l++;
	hack = word[l];
	hack += d;
	cout << hack;
	l++;
	hack = word[l];
	hack += e;
	cout << hack;
	l++;
	cout << endl << endl;
	l = 0;
	cout << "decryption succesfully ended: ";
	bool check = 0;
	while (check != 1)
	{
		if (hack == word[l])
		{
			cout << word[l];
			l++;
		}
		else
			hack--;
		if (l == 5)
		{
			check = 1;
			break;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}