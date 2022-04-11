#include <bits/stdc++.h>
#include "permutation_sort.h"
#include "util.h"

using namespace std;

void permute_array(int array[], int index, int n, bool sort) {
    if (!sort && index == n) print_array(array, n + 1);
    for (int i = index; i <= n; i++) {
        if (!sort || !std::is_sorted(array, array + n + 1)) {
            std::swap(array[i], array[index]);
            permute_array(array, index + 1, n, sort);
        }
        if (!sort || !std::is_sorted(array, array + n + 1)) std::swap(array[i], array[index]);
    }
}

void permutation_sort(int array[], int n) {
    permute_array(array, 0, n - 1, true);
}