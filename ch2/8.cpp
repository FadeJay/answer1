#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int b;
	int m = 0;
	while (cin >> b)
		a.push_back(b);
	for (vector<int>::iterator p = a.begin();p != a.begin() + a.size() / 2;++p)
	{
		++m;
		cout << *p + *(a.end() - m) << endl;
	}
	if (a.size() % 2 != 0)
	{
		cout << "The middle number is not summed" << endl;
		cout << *(a.begin() + a.size() / 2) << endl;
	}
	return 0;
}