Sure, here's the README file including all tasks from 0 to 1000:

---

# Sorting Algorithms

This repository contains various sorting algorithms implemented in C.

## Task 0: Bubble Sort

Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm.

**Prototype**: `void bubble_sort(int *array, size_t size);`

Example:

```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
    int array[] = {34, 22, 13, 9, 11, 5, 2};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```

## Task 1: Insertion Sort - List

Write a function in C that sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://en.wikipedia.org/wiki/Insertion_sort) algorithm.

**Prototype**: `listint_t *insertion_sort_list(listint_t **list);`

## Task 2: Selection Sort

Write a function that sorts an array of integers in ascending order using the [Selection sort](https://en.wikipedia.org/wiki/Selection_sort) algorithm.

**Prototype**: `void selection_sort(int *array, size_t size);`

## Task 3: Quick Sort

Write a function that sorts an array of integers in ascending order using the [Quick sort](https://en.wikipedia.org/wiki/Quicksort) algorithm.

**Prototype**: `void quick_sort(int *array, size_t size);`

## Task 4: Shell Sort - Knuth Sequence

Write a function that sorts an array of integers in ascending order using the [Shell sort](https://en.wikipedia.org/wiki/Shellsort) algorithm, using the Knuth sequence.

**Prototype**: `void shell_sort(int *array, size_t size);`

## Task 5: Cocktail Shaker Sort

Write a function that sorts an array of integers in ascending order using the [Cocktail Shaker sort](https://en.wikipedia.org/wiki/Cocktail_shaker_sort) algorithm.

**Prototype**: `void cocktail_sort_list(listint_t **list);`

## Task 6: Quick Sort - Lomuto Partition Scheme

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm.

**Prototype**: `void quick_sort(int *array, size_t size);`

## Task 7: Merge Sort

Write a function that sorts an array of integers in ascending order using the [Merge sort](https://en.wikipedia.org/wiki/Merge_sort) algorithm.

**Prototype**: `void merge_sort(int *array, size_t size);`

## Task 8: Heap Sort

Write a function that sorts an array of integers in ascending order using the [Heap sort](https://en.wikipedia.org/wiki/Heapsort) algorithm.

**Prototype**: `void heap_sort(int *array, size_t size);`

## Task 9: Counting Sort

Write a function that sorts an array of integers in ascending order using the [Counting sort](https://en.wikipedia.org/wiki/Counting_sort) algorithm.

**Prototype**: `void counting_sort(int *array, size_t size);`

## Task 10: Quick Sort - Hoare Partition

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm.

**Prototype**: `void quick_sort_hoare(int *array, size_t size);`

## Task 11: Quick Sort - Hoare Partition scheme

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm.

**Prototype**: `void quick_sort_hoare(int *array, size_t size);`

You must implement the Hoare partition scheme. The pivot should always be the last element of the partition being sorted. Print the array after each time you swap two elements.

## Task 12: Dealer

Write a function that sorts a deck of cards.

**Prototype**: `void sort_deck(deck_node_t **deck);`

You are allowed to use the C standard library function `qsort`. Please use the following data structures:

```c
typedef enum kind_e
{
    SPADE = 0,
    HEART,
    CLUB,
    DIAMOND
} kind_t;

typedef struct card_s
{
    const char *value;
    const kind_t kind;
} card_t;

typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;
```

Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes. You can assume there are exactly 52 elements in the doubly linked list. The deck must be ordered from Ace to King and from Spades to Diamonds.

---

This README provides an overview of the sorting algorithms implemented in this repository, along with their respective tasks and prototypes. Each task corresponds to a specific sorting algorithm or related problem. Use the provided prototypes to integrate these sorting algorithms into your projects.