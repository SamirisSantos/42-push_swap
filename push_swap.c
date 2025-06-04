/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:29:50 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/04 16:28:40 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


l_stack* newl_stack(int value) {
	l_stack* new;

	new = (l_stack*)malloc(sizeof(l_stack));
	new->i = value;
	new->next = NULL;
	return new;
}

void addl_stack(l_stack** start, int value) {
	l_stack*	new;

	new = newl_stack(value);
	if (*start == NULL)
	{
		*start = new;
	} else {
		l_stack*	current;
		
		current = *start;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}

void printList(l_stack* start) {
	l_stack*	current;
	
	current = start;
	while (current != NULL)
	{
		printf("%d ", current->i);
		current = current->next;
	}
	printf("\n");
}

void freeList(l_stack* start) {
	l_stack* current;

	current = start;
	while (current != NULL) {
		l_stack* temp = current;
 		current = current->next;
		free(temp);
	}
}

int main(int argc, char* argv[]) {
	l_stack*	a;
	l_stack*	b;
	int			i;
	int			nb;

	i = 1;
	a = NULL;
	if (argc < 2) {
		printf("Error", argv[0]);
		return 1;
	}
	while (i < argc)
	{
		nb = atoi(argv[i]);
		addl_stack(&a, nb);
		i++;
	}
	printf("List:\n");
	printList(a);
	freeList(a);
	return 0;
}