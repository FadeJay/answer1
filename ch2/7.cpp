#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int b;
	while (cin>> b)
		a.push_back(b);
	if (a.size() % 2 == 0)
	{
		for (vector<int>::iterator p = a.begin();p < a.end() - 1;p = p + 2)
			cout << *p + *(p + 1) << endl;
	}
	else
	{
		for (vector<int>::iterator p = a.begin();p < a.end() - 2;p = p + 2)
			cout << *p + *(p + 1) << endl;
		cout << "The last number is not summed" << endl << *(a.end() - 1) << endl;
	}
	return 0;
}