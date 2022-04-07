#include "mergesort.h"

void mergesort(int array[], int n) {
    mergesort(array, 0, n - 1);
}

void mergesort(int array[], int begin, int end) {
    if (begin < end) {
        int mid = (begin + end) / 2;
        mergesort(array, begin, mid);
        mergesort(array, mid + 1, end);
        merge(array, begin, mid, end);
    }
}

void merge(int array[], int begin, int mid, int end) {
    int n1 = mid - begin + 1;
    int n2 = end - mid;

    int a1[n1], a2[n2];

    for (int i = 0 ; i < n1 ; i++) a1[i] = array[begin + i];
    for (int j = 0; j < n2 ; j++) a2[j] = array[mid + j + 1];

    int i = 0, j = 0, k = begin;

    while (i < n1 && j < n2) array[k++] = a1[i] <= a2[j] ? a1[i++] : a2[j++];
    while (i < n1) array[k++] = a1[i++];
    while (j < n2) array[k++] = a2[j++];
}
