#include <time.h>
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
    clock_t permutation;
    clock_t quick;
    clock_t selection;
    clock_t merge;

    permutation = clock();
    test_permutation_sort();
    permutation = clock() - permutation;
    printf("Tempo de execucao: %lf", ((float)permutation)/((CLOCKS_PER_SEC/1000)));
    println();

    quick = clock();
    test_quicksort();
    quick = clock() - quick;
    printf("Tempo de execucao: %lf", ((float)quick)/((CLOCKS_PER_SEC/1000)));
    println();

    selection = clock();
    test_selection_sort();
    selection = clock() - selection;
    printf("Tempo de execucao: %lf", ((float)selection)/((CLOCKS_PER_SEC/1000)));
    println();

    merge = clock();
    test_mergesort();
    merge = clock() - merge;
    printf("Tempo de execucao: %lf", ((float)merge)/((CLOCKS_PER_SEC/1000)));

    return 0;
}