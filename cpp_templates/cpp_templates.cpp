#include <iostream>

using namespace std;

template <typename dType> dType sum(dType a, dType b)
{
	return (dType)a + (dType)b;
}


int main()
{
	float f1 = 10.3f;
	float f2 = 12.07f;
	cout << "float: " << sum(f1, f2) << endl;

	int i1 = 10;
	int i2 = 12;
	cout << "int: " << sum(i1, i2) << endl;
	cout << "int as float: " << sum<float>(i1, i2) << endl;

	string s1 = "10";
	string s2 = "12";
	cout << "string: " << sum(s1, s2).c_str() << endl;

	system("pause");
}