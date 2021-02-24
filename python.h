//often used libs, some important funcs from Python (input, split, arr sort, arr print)
//all python functions are modified and adapted to c++ language
#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

std::vector<std::string> split(std::string line, char sep = ' ') {
	std::vector<std::string> res;
	std::string slice = "";
	line += sep;
	for (int i = 0; i < int(line.length()); i++) {
		if (line[i] == sep) {
			if (slice.length() > 0) res.push_back(slice);
			slice = "";
		}
		else slice += line[i];
	}
	return res;
}

std::string input(std::string message = "") {
	std::string res;
	std::cout << message; getline(std::cin, res); std::cout << std::endl;
	return res;
}


std::vector<int> range(int start, int finish, int step = 1) {
	std::vector<int> res;
	for (int i = start; i < finish; i += step) {
		res.push_back(i);
	}
	return res;
}

template <typename T>
void sort(T* arr, size_t n, bool reverse=false) {
	for (int i = 0; i < int(n); i++) {
		for (int j = 0; j < int(n - 1 - i); j++) {
			if (arr[j] > arr[j + 1]) std::swap(arr[j], arr[j + 1]);
		}
	}
	if (reverse) {
		for (int i = 0; i < int(n)/2; i++) {
			std::swap(arr[i], arr[n - i - 1]);
		}
	}
}

template <typename T>
void print(std::vector<T> v) {
	for (T a : v) {
		std::cout << a;
		if (a != v[v.size() - 1]) std::cout << ", ";
	}
	std::cout << std::endl;
}

void print(int* arr, size_t n) {
	for (int i = 0; i < int(n); i++) {
		std::cout << arr[i];
		if (i != n - 1) std::cout << ", ";
	}
	std::cout << std::endl;
}

int randint(int start, int finish){
	//srand(time(NULL));
	return rand() %(finish-start) + start;
}

std::vector<std::string> readlines(std::string name){
	std::ifstream f(name);
	std::vector<std::string> lines;
	while (!f.eof()) {
		std::string line;
		getline(f, line);
		lines.push_back(line);
	}
	f.close();
	return lines;
}
