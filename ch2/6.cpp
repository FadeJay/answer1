#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a(10, 42);
	vector<int> b(10);
	for (vector<int>::size_type i = 0;i != b.size();++i)
		b[i] = 42;
	//cout <<*( a.end()-1);
	vector<int> c;
	for (int i = 0;i < 10;++i)
	{
		vector<int>::iterator p = c.end();
		c.insert(p, 42);
	}
	vector<int> d(10);
	for (vector<int>::iterator m = d.begin();m != d.end();m++)
		*m = 42;
//	cout << d[0] << d[8];
	vector<int>::iterator mid1 = d.begin() + d.size() / 2;
	// vector<int>::iterator mid2 = (d.begin() + d.end())/2;
	//vector<int>::iterator mid2 = d.begin()+d.end();
	const vector<int> e(10,9);
	//e[0] = 1;
	return 0;
}