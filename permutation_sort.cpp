#include <bits/stdc++.h>
#include "permutation_sort.h"
#include "util.h"

using namespace std;

vector<int *> previousPermutations;
void store_permutation(int array[], const int n) {
    int a[n];
    for (int i = 0; i < n; ++i) a[i] = array[i];
    previousPermutations.push_back(a);
}

void permute_array(int array[], const int n, const bool uniquePermutations) {
    for (int i = 0; i < n; i++) swap(array[i], array[rand() % n]);
    if (!uniquePermutations) return;

    if (contains(previousPermutations, array)) permute_array(array, n, true);
    else store_permutation(array, n);
}

void permutation_sort(int array[], int n, const bool uniquePermutations) {
    while (!is_sorted(array, n)) {
        permute_array(array, n, uniquePermutations);
        print_array(array, n);
    }
}