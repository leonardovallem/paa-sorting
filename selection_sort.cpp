#include <bits/stdc++.h>
#include "selection_sort.h"

void selection_sort(int array[], const int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i+1; j < n; ++j) {
            if (array[min] > array[j]) min = j;
        }

        std::swap(array[min], array[i]);
    }
}
