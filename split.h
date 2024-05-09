#pragma once
#ifndef GUARD_split_h
#define GUARD_split_h

#include <vector>
#include <algorithm> // find_if()
#include <cctype>	 //isspace
#include <string>
#include <iostream>

using namespace std;

bool space(char);

bool not_space(char);

vector<string> split(const string& str);

#endif // !GUARD_split_h