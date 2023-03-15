/*
** EPITECH PROJECT, 2022
** hehe
** File description:
** hehe
*/
#pragma once
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//pointeur sv permet accès à l'élement de liste
//al_list = alias de la liste (raccourcir)
typedef struct cha_list {
    int nbre;
    struct cha_list *sv;  // change the type of 'sv' to 'struct cha_list *'
}al_list;

int error_nbre(char *str);
int my_sortnbre(char *str);
int error(char *argv);
int remp_fn_list(al_list **l_a, int nbre_a);
int remp_deb_list(al_list **l_a, int nbre_a);
int eff_prem(al_list **first);
int eff_der(al_list **first);
int remp_list(al_list **l_a, int argc, char **argv);
void my_putchar(char c);
int my_putstr(char *str);
int main(int argc, char **argv);
int myspace(al_list **l_b);
int push_pa(al_list **l_a, al_list **l_b);
int push_b(al_list **l_a, al_list **l_b);
int rotate_ra(al_list **l_a);
int rotate_rb(al_list **l_b);
int rotate_r(al_list **l_a, al_list **l_b);
int rotate_rra(al_list **l_a);
int rotate_rrb(al_list **l_b);
int rra_n_rrb(al_list **l_a, al_list **l_b);
int sort4(al_list **l_a, al_list **l_b);
int sort3(al_list **l_a, al_list **l_b);
int sort2(al_list **l_a, al_list **l_b);
int sort1(al_list **l_a, al_list **l_b);
int sort_nbre(al_list **l_a, al_list **l_b, int b);
int swap_a(al_list **l_a);
int swap_b(al_list **l_a);
int swap_c(al_list **l_a, al_list **l_b);
