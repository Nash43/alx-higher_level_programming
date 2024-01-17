#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct listint_s - singly linked lists
 * @n: integer
 * @next: points to the next node
 * description: singly linked last node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
}listint_t;

size_t print_listint(const listint_t *h);

listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_ *head);
int check_cycle(listint *list);

#endif /* LISTS_H */ 
