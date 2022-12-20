#ifndef SORT_H
#define SORT_H

/*std libraries*/
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/*struct*/
/**
 * @brief 
 * 
 */
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/*prototypes for print_array & print_list*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*prototypes*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);


#endif