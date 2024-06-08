#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int num;
	cin >> num;
	string str = to_string(num);
	int len = str.length();
	double sum = 0;
	int temp = num;
	while(num > 0)
	{
		double rem = num % 10;
		double result = pow(rem , len);
		sum = sum + result;
		num = num / 10;
	}
	cout << sum << endl;
	if(sum == temp)
	{
		cout << "Armstrong";
	}
	else{
		cout << "Not a armstrong";
	}
}

		
