#include <iostream>
#include <string>
//#include <cctype>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	string a, b;
	cin >> a;
	for (string::size_type i = 0;i < a.size();++i)
	{
		//if (!ispunct(a[i]))
		//	b = b+a[i];
		if (ispunct(a[i]))
			;
		else
			b = b+a[i];

	}
	cout << b;
	return 0;
}