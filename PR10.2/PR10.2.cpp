//Дано літерний рядок, який містить послідовність символів s0, …, sn, ….
//Підрахувати найбільшу кількість пробілів, які розташовані поспіль.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int MaxCount(string str, int*& arr, int& len) {

	int pos = 0;
	int count = 0;
	int k = 0;
	//while ((pos = str.find(' ', pos)) != -1) {
	for (pos = 0; pos < len; pos++) {
		if (str[pos + 1] == ' ') {
			count++;
		}
		else {
			arr[k] = count;
			k++;
			count = 0;
		}
	}
	int max = arr[0];
	for (int i = 0; i < len; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int main()
{
	ifstream fin("1.txt");
	cout << endl;
	string str;
	while (getline(fin, str)) {
		fin >> str;
	}
	cout << str << endl;
	int len = str.length();
	int* arr = new int[len];

	cout << MaxCount(str, arr,len);

   return 0;
}