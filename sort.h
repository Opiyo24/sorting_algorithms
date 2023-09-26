#ifndef SORT_H
#define SORT_H


#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doyubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: pointer to the previous element in the list
 * @next: pionter to the next elementy in the list
*/

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap_int(int *a, int *b);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
/**listint_t *swap_node(listint_t *a, listint_t *b);*/
void swap_node(listint_t **a, listint_t **b);
void insertion_sort_list(listint_t **list);
int partition(int *array, int low, int high);
void quick_sort(int *array, int low, int high);
void print(int *array, int size);

#endif
