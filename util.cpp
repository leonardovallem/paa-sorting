#include <bits/stdc++.h>
#include <string>
#include "util.h"

using namespace std;

bool contains(vector<int *> v, int array[]) {
    return any_of(v.begin(), v.end(), [array](int a[]) { return a == array; });
}

bool is_sorted(const int array[], int n) {
    while (--n > 1) {
        if (array[n] < array[n - 1]) return false;
    }
    return true;
}

void print_array(const int array[], const int n) {
    for (int i = 0; i < n; i++) cout << array[i] << " ";
    cout << endl;
}

void println() { cout << endl; }

void println(const string str) { cout << str << endl; }