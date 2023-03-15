/*
** EPITECH PROJECT, 2022
** hehehe
** File description:
** heheheheheeh
*/

#include "my.h"

// check la présence d'un integer valide dans l'input
// SSI presence de chiffres et eventuellement signe
// utilisation macros min/max pour check valeur stockage min/max
// utilisé pour check si l'entier parsé est un signed integer

int error_nbre(char *str)
{
    int signe = 1;
    int count = 0;
    long res = 0;
    while (str[count] == '+' || str[count] == '-') {
        if (str[count] == '-') {
        signe = signe * -1;
        count++;
    }
    }
    while (str[count] != '\0') {
        if (str[count] < 48 || str[count] > 57) {
        return (84);
        }
        res = res * 10 + (str[count] - 48);
        count++;
        if (res * signe < INT_MIN || res * signe > INT_MAX) {
        return (84);
        }
    }
    return (0);
}

// prend une string en input et check si integer valide
// si invalide renvoyer 0, sinon parser la string
// et renvoyer sa valeur
// INT_MIN/MAX = macro valeur min/max pour un int
int my_sortnbre(char *str)
{
    int signe = 1;
    int count = 0;
    long res = 0;
    while (str[count] == '+' || str[count] == '-') {
        if (str[count] == '-') {
            signe = signe * -1;
        count++;
        }
    }
    while (str[count] != '\0') {
        if (str[count] < 48 || str[count] > 57) {
        return (0);
        }
        res = res * 10 + (str[count] - 48);
        count++;
        if (res * signe < INT_MIN || res * signe > INT_MAX) {
        return (0);
        }
    }
    return (res * signe);
}

// utilisation de l'ascii, check si fonction contient uniquement
// nombres, moins et espaces
int error(char *argv)
{
    int count = 0;
    while (argv[count] != '\0') {
        if (argv[count] < 43 || (argv[count] > 43 && argv[count] < 45)
        || (argv[count] > 45 && argv[count] < 48) || argv[count] > 57){
            return (84);
        }
        count++;
    }
    return (0);
}

// remplir fn de liste
int remp_fn_list(al_list **l_a, int nbre_a)
{
    al_list* count = *l_a;
    while (count->sv != NULL){
        count = count->sv;
    }
    count->sv = malloc(sizeof(al_list));
    count->sv->nbre = nbre_a;
    count->sv->sv = NULL;
    return (0);
}

// remplir debut liste
int remp_deb_list(al_list **l_a, int nbre_a)
{
    al_list* new_ele = malloc(sizeof(al_list));

    new_ele->nbre = nbre_a;
    new_ele->sv = *l_a;
    (*l_a) = new_ele;
    return (0);
}
