cmake_minimum_required(VERSION 3.0)
project (paa)

set(CMAKE_CXX_STANDARD 17)

add_executable(paa main.cpp permutation_sort.h permutation_sort.cpp util.h util.cpp quicksort.h quicksort.cpp selection_sort.h selection_sort.cpp mergesort.h mergesort.cpp)
