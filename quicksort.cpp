#include <bits/stdc++.h>
#include "quicksort.h"

void quicksort(int array[], const int begin, const int end) {
    int i = begin, j = end;
    int pivot = array[(end + begin) / 2];

    while (i <= j) {
        while (array[i] < pivot) i++;
        while (array[j] > pivot) j--;
        if (i <= j) std::swap(array[i++], array[j--]);
    }

    if (begin < j) quicksort(array, begin, j);
    if (i < end) quicksort(array, i, end);
}

void quicksort(int array[], const int n) {
    quicksort(array, 0, n - 1);
}