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

void sort(int*, size_t, bool);
void sort(char*, size_t, bool);
void sort(double*, size_t, bool);
void print(int*, size_t);
