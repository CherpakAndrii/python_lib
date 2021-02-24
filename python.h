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

std::vector<std::string> split(std::string, char);
std::string input(std::string);

template <typename T>
void sort(T*, size_t, bool);

std::vector<int> range(int, int, int);
void print(int*, size_t);
