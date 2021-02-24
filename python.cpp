#include "python.h"

using namespace std;

vector<string> split(string line, char sep = ' ') {
	vector<string> res;
	string slice = "";
	line += sep;
	for (int i = 0; i < line.length(); i++) {
		if (line[i] == sep) {
			if (slice.length() > 0) res.push_back(slice);
			slice = "";
		}
		else slice += line[i];
	}
	return res;
}

string input(string message="") {
	string res;
	cout << message; getline(cin, res); cout << endl;
	return res;
}

template <typename T>

void sort(T* arr, size_t n, bool reverse=false) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}
	}
	if (reverse) {
		T* n_arr = new T[n];
		for (int i = 0; i < n; i++) {
			n_arr[i] = arr[n - i - 1];
		}
		arr = n_arr;
	}
}

void print(int*arr, size_t n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i != n - 1) cout << ", ";
	}
	cout << endl;
}

vector<int> range(int start, int finish, int step=1){
	vector<int> res;
	for (int i = start; i < finish; i+=step){
		res.push_back(i);
	}
	return res;
}
