/*
** EPITECH PROJECT, 2022
** hehehe
** File description:
** heheh
*/

#include "my.h"

int sort4(al_list **l_a, al_list **l_b)
{
    al_list *der_b = *l_b;

    if ((*l_b)->sv == NULL) {
        push_pa(l_a, l_b);
        return (0);
    }
    while (der_b->sv != NULL)
        der_b = der_b->sv;
    while (*l_b != NULL) {
        if ((*l_b)->nbre < der_b->nbre) {
            rotate_rrb(l_b);
            push_pa(l_a, l_b);
        } else
            push_pa(l_a, l_b);
    }
    return (0);
}

int sort3(al_list **l_a, al_list **l_b)
{
    push_b(l_a, l_b);
    if ((*l_b)->sv == NULL)
        return (0);
    if ((*l_b)->nbre < (*l_b)->sv->nbre)
        rotate_rb(l_b);
    return (0);
}

int sort2(al_list **l_a, al_list **l_b)
{
    swap_a(l_a);
    push_b(l_a, l_b);
    if ((*l_b)->sv == NULL)
        return (0);
    if ((*l_b)->nbre < (*l_b)->sv->nbre) {
        rotate_rb(l_b);
    }
    return (0);
}

//fonction de sorting s'appuyant sur les 3 autres
//echange des noeuds entre les deux listes
//puis operation echange et rotation pour réarranger
int sort1(al_list **l_a, al_list **l_b)
{
    while ((*l_a)->sv != NULL) {
        if ((*l_a)->nbre > (*l_a)->sv->nbre)
            sort2(l_a, l_b);
        else
            sort3(l_a, l_b);
    }
    if (*l_b != NULL)
        sort4(l_a, l_b);
    return (0);
}
