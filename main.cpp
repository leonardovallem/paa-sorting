#include "permutation_sort.h"
#include "util.h"
#include "quicksort.h"
#include "selection_sort.h"
#include "mergesort.h"

#define n 10

void test_permutation_sort() {
    int a[] = {3, 2, 5, 1, 0, 4, 7, 6, 9, 8};

    println("Permutation sort: ");

    print_array(a, n);
    permutation_sort(a, n, false);
    print_array(a, n);

    println();
}

void test_quicksort() {
    int a[] = {3, 2, 5, 1, 0, 4, 7, 6, 9, 8};

    println("Quicksort: ");

    print_array(a, n);
    quicksort(a, n);
    print_array(a, n);

    println();
}

void test_selection_sort() {
    int a[] = {3, 2, 5, 1, 0, 4, 7, 6, 9, 8};

    println("Selection sort: ");

    print_array(a, n);
    selection_sort(a, n);
    print_array(a, n);

    println();
}

void test_mergesort() {
    int a[] = {3, 2, 5, 1, 0, 4, 7, 6, 9, 8};

    println("Mergesort: ");

    print_array(a, n);
    mergesort(a, n);
    print_array(a, n);

    println();
}

int main() {
    test_permutation_sort();
    test_quicksort();
    test_selection_sort();
    test_mergesort();

    return 0;
}