/*
** EPITECH PROJECT, 2022
** hehehe
** File description:
** heheh
*/

#include "my.h"

//fonction de sorting principale
//s'appuyant sur la fonction sort1 pour fonctionner
//se basant elles memes sur les fonctions
//swap + rotate
int sort_nbre(al_list **l_a, al_list **l_b, int b)
{
    al_list *count = *l_a;

    while (count != NULL) {
        if (count->sv != NULL && count->nbre > count->sv->nbre && b == 0){
            sort1(l_a, l_b);
            sort_nbre(l_a, l_b, 1);
        }
        if (count->sv != NULL && count->nbre > count->sv->nbre && b == 1) {
            my_putchar(' ');
            sort1(l_a, l_b);
            sort_nbre(l_a, l_b, 1);
        }
        count = count->sv;
    }
    return (0);
}

//echange les deux premiers elements de l_a
int swap_a(al_list **l_a)
{
    al_list *temp = (*l_a)->sv->sv;

    if (((*l_a)->sv) == NULL)
        return (0);
    (*l_a)->sv->sv = *l_a;
    *l_a = (*l_a)->sv;
    (*l_a)->sv->sv = temp;
    my_putstr("sa ");
    return (0);
}

//echange les deux premiers elements de l_b
int swap_b(al_list **l_a)
{
    al_list *temp = (*l_a)->sv->sv;

    if (((*l_a)->sv) == NULL)
        return (0);
    (*l_a)->sv->sv = *l_a;
    *l_a = (*l_a)->sv;
    (*l_a)->sv->sv = temp;
    my_putstr("sb ");
    return (0);
}

//sa et sb en mm temps
int swap_c(al_list **l_a, al_list **l_b)
{
    swap_b(l_a);
    swap_a(l_b);
    my_putstr("sc ");
    return (0);
}
