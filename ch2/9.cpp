#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> a;
	string b;
	int count = 1;
	while (cin >> b)
		a.push_back(b);
	for (vector<string>::iterator p = a.begin();p != a.end();++p)
	{
		for (string::size_type i = 0;i < (*p).size();++i)
			(*p)[i] = toupper((*p)[i]);
		cout << *p<<'\t';
		if (count % 8 == 0)
			cout << endl;
		count++;
	}
//	vector<string>::iterator m = a.begin();
//	vector<string>::iterator n = a.end();
//	vector<string>::difference_type c = m - n;
//	cout << c;
	return 0;
}