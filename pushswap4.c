/*
** EPITECH PROJECT, 2022
** hehehe
** File description:
** hehehe
*/

#include "my.h"

//permet de faire avancer l_b vers le debut
//premier element devient le dernier
int rotate_rb(al_list **l_b)
{
    remp_fn_list(l_b, (*l_b)->nbre);
    eff_prem(l_b);
    my_putstr("rb ");
    return (0);
}

//ra et rb en mm temps
int rotate_r(al_list **l_a, al_list **l_b)
{
    rotate_ra(l_a);
    rotate_rb(l_b);
    my_putstr("rr ");
    return (0);
}

//permet de faire avancer l_a vers la fin
//dern element devient premier
int rotate_rra(al_list **l_a)
{
    al_list *last_A = *l_a;

    while (last_A->sv != NULL)
        last_A = last_A->sv;
    remp_deb_list(l_a, last_A->nbre);
    eff_der(l_a);
    my_putstr("rra ");
    return (0);
}

//permet de faire avancer l_b vers la fin
//dern element devient premier
int rotate_rrb(al_list **l_b)
{
    al_list *der_b = *l_b;

    while (der_b->sv != NULL)
        der_b = der_b->sv;
    remp_deb_list(l_b, der_b->nbre);
    eff_der(l_b);
    my_putstr("rrb ");
    return (0);
}

//rra et rrb en mm temps
int rra_n_rrb(al_list **l_a, al_list **l_b)
{
    rotate_rra(l_a);
    rotate_rrb(l_b);
    my_putstr("rrr ");
    return (0);
}
