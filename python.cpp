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

void sort(int* arr, size_t n, bool reverse = false) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}
	}
	if (reverse) {
		int* n_arr = new int[n];
		for (int i = 0; i < n; i++) {
			n_arr[i] = arr[n - i - 1];
		}
		arr = n_arr;
	}
}

void sort(double* arr, size_t n, bool reverse = false) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}
	}
	if (reverse) {
		double* n_arr = new double[n];
		for (int i = 0; i < n; i++) {
			n_arr[i] = arr[n - i - 1];
		}
		arr = n_arr;
	}
}

void sort(char* arr, size_t n, bool reverse) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}
	}
	if (reverse) {
		for (int i = 0; i < n/2; i++) {
			swap(arr[i], arr[n-1-i]);
		}
	}
}

void print(int*arr, size_t n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i != n - 1) cout << ", ";
	}
	cout << endl;
}