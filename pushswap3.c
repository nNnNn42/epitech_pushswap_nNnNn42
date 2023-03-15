/*
** EPITECH PROJECT, 2022
** hehehe
** File description:
** hehehe
*/

#include "my.h"

// utilisation de l'alias de la struct
// puis initialisation à NULL du pointeur vers les deux listes
// count = position dans la string (compteur)
// remp_list = remplit la liste A
// sort_nbre = tri de la liste A vers liste B
//"&" = adresse, permet à remp et sort de modif les 2 listes
int main(int argc, char **argv)
{
    al_list* l_a = NULL;
    al_list* l_b = NULL;
    int count = 1;

    while (count != argc) {
        if (error(argv[count]) == 84 || error_nbre(argv[count]) == 84)
            return (84);
        count++;
    }
    remp_list(&l_a, argc, argv);
    sort_nbre(&l_a, &l_b, 0);
    my_putchar('\n');
}

// espace les elem de la liste
int myspace(al_list **l_b)
{
    if (*l_b != NULL) {
        my_putchar(' ');
        return (0);
    }
    return (0);
}

// permet de prendre le premier élément de lb
// et le mettre en première position de la
int push_pa(al_list **l_a, al_list **l_b)
{
    if (*l_a == NULL)
        return (0);
    if (*l_a == NULL) {
        (*l_a) = malloc(sizeof(al_list));
        (*l_a)->nbre = (*l_b)->nbre;
        (*l_a)->sv = NULL;
        eff_prem(l_b);
    } else {
        remp_deb_list(l_a, (*l_b)->nbre);
        eff_prem(l_b);
    }
    my_putstr("pa");
    myspace(l_b);
    return (0);
}

//permet de prendre le premier élément de la
//et le mettre en première position de lb
int push_b(al_list **l_a, al_list **l_b)
{
    if (*l_a == NULL)
        return (0);
    if (*l_b == NULL) {
        (*l_b) = malloc(sizeof(al_list));
        (*l_b)->nbre = (*l_a)->nbre;
        (*l_b)->sv = NULL;
        eff_prem(l_a);
    } else {
        remp_deb_list(l_b, (*l_a)->nbre);
        eff_prem(l_a);
    }
    my_putstr("pb ");
    return (0);
}

//permet de faire avancer l_a vers le debut
//premier element devient le dernier
int rotate_ra(al_list **l_a)
{
    remp_fn_list(l_a, (*l_a)->nbre);
    eff_prem(l_a);
    my_putstr("ra ");
    return (0);
}
