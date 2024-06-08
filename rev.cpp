#include <iostream>
using namespace std;

int main(){
	string str;
	cin >> str;
	string bag = "";
	for(int i = str.length() - 1 ; i >= 0 ; i--)
	{
		bag += str[i];
	}
	cout << bag;
}	