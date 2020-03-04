
#include <iostream>
#include"Header.h"
using namespace std;
int main()
{
	int a[5] = {1,2,5,3,2};
	Array<int> arr(a,5);
	Array<int> b;
	b = arr;
	arr[0] = 5;
	arr.bublesort();
	//f(n) = 4;
	cout << arr << endl;
	cout << b << endl;
}

