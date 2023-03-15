/*
** EPITECH PROJECT, 2022
** heheheh
** File description:
** hehehe
*/

#include "my.h"

// efface prem element liste
int eff_prem(al_list **first)
{
    al_list* temp = NULL;
    temp = (*first)->sv;
    free(*first);
    *first = temp;
    return (0);
}

// efface der element liste
int eff_der(al_list **first)
{
    al_list* temp = *first;
    while (temp->sv->sv != NULL)
        temp = temp->sv;
    free(temp->sv);
    temp->sv = NULL;
    return (0);
}

// remplir la liste
int remp_list(al_list **l_a, int argc, char **argv)
{
    int count = 1;
    if (*l_a == NULL) {
        (*l_a) = malloc(sizeof(al_list));
        (*l_a)->nbre = my_sortnbre(argv[count]);
        (*l_a)->sv = NULL;
        count++;
    }
    if (argc > 2) {
        while (count < argc) {
            remp_fn_list(l_a, my_sortnbre(argv[count]));
            count++;
        }
    }
    return (0);
}

// ecrire un caractere
void my_putchar(char c)
{
    write(1, &c, 1);
}

//ecrire une string
int my_putstr(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a = a + 1;
    }
    return (0);
}
