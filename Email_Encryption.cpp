#include <iostream>
using namespace std;
void main()
{
	string key = "tc2eo.nkq8apf0yh4z95gblsj1iwu@x3v76";
	int j = 0;
	int askey[127];
	// O(1)
	for (int i = 0; i < 127; i++)
	{
		askey[i] = -1;
	}
	
	// O(n)
	for (int k = 0; k < key.length(); k++)
	{
		askey[int(key[k])] = k;
	}

	string email = "syedsajjadali.personal@gmail.com";

	// O(n)
	cout << "Encrypted string: ";
	for (int m = 0; m < email.length(); m++)
	{
		char a = email[m];
		if (a >= 65 && a <= 90) {
			a = a + 32;
		}
		int g = askey[int(a)];
		if (g == -1) {
			cout << "biz";
		}
		else {
			cout << g;
		}
	}

}
