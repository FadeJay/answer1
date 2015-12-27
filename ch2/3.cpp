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
		for (vector<int>::size_type i = 0;i < a.size() - 1;i += 2)
			cout << a[i] + a[i + 1]<<endl;
	}
	else
	{
		for (vector<int>::size_type i = 0;i < a.size() - 2;i += 2)
			cout << a[i] + a[i + 1]<<endl;
		cout << "The last number is not sumed" <<endl<<a[a.size()-1]<<endl;
	}
	return 0;
}