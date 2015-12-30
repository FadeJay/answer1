#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::endl;
int main()
{
	vector<string> a;
	string str;
	int count = 0;
	while (cin >> str)
		a.push_back(str);
	for (vector<string>::size_type i = 0;i != a.size();++i)
	{
		for (string::size_type j = 0;j != a[i].size();++j)
			a[i][j] = toupper(a[i][j]);
		cout << a[i] << '\t';
		++count;
		if (count % 6 == 0)
			cout << endl;
	}
	return 0;
}