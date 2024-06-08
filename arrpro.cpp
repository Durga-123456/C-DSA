#include <iostream>
using namespace std;

int main() 
{
	int arr[4] =  {1,2,3,4};
	int product = 1;
	for(int i = 1 ; i < 4 ; i++)
	{
		product = product * arr[i];
	}
	cout << product;
}