#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int b;
	while (cin >> b)
		a.push_back(b);
	if (a.size() % 2 == 0)
	{
		for (vector<int>::size_type i = 0;i != a.size()/2;++i)
			cout << a[i] + a[a.size()-1-i] << endl;
	}
	else
	{
		for (vector<int>::size_type i = 0;i != (a.size()-1)/2;++i)
			cout << a[i] + a[a.size()-1-i] << endl;
		cout << "The middle number is not sumed" << endl << a[(a.size() - 1)/2] << endl;
	}
	return 0;
}