/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:29:50 by sade-ara          #+#    #+#             */
/*   Updated: 2025/06/04 16:04:34 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


l_stack* newl_stack(int value) {
    l_stack* new = (l_stack*)malloc(sizeof(l_stack));
    new->i = value;
    new->next = NULL;
    return new;
}

void addl_stack(l_stack** inicio, int value) {
    l_stack* new = newl_stack(value);
    if (*inicio == NULL) {
        *inicio = new;
    } else {
        l_stack* atual = *inicio;
        while (atual->next != NULL) {
            atual = atual->next;
        }
        atual->next = new;
    }
}

void printList(l_stack* inicio) {
    l_stack* atual = inicio;
    while (atual != NULL) {
        printf("%d ", atual->i);
        atual = atual->next;
    }
    printf("\n");
}

void freeList(l_stack* inicio) {
    l_stack* atual = inicio;
    while (atual != NULL) {
        l_stack* temp = atual;
        atual = atual->next;
        free(temp);
    }
}
int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Error", argv[0]);
        return 1;
    }
    l_stack* listA = NULL;
    for (int i = 1; i < argc; i++) {
        int value = atoi(argv[i]);
        addl_stack(&listA, value);
    }

    printf("Lista:\n");
    printList(listA);
    freeList(listA);
    return 0;
}