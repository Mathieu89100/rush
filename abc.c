/*
** ETNA PROJECT, 18/10/2021 by moulin_e
** groupe Diogo Mathieu Rayane
** File description:
**  rush 2
*/

#include <unistd.h>
void my_putchar(char c) {
    write(1, &c, 1);
}
void print_abc_square(int n)
{
    int tab = 0;
    // on déclare la variable tab en entier
    char letref = 'a';
    // on déclare la variable let pour la variable de reférence
    char let = 'a';
    // on déclare la variable let
    while(tab<n){
        // tant que la variable tab inferieur a n
        for(int c =0;c<26;c++)
            // pour l'entier c est égale a 0 ; c est  inferieur a 26 ; c s'incrémente
            {
                if(let > 122)
                    let = 'a';
                my_putchar(let);
                let++;
            }
        my_putchar(10);
        // afficher une nouvelle ligne d'apres le tableau ASCII.
        tab++;
        let = letref + tab%26;
    }
}
int main (void)
{
    print_abc_square(26);
    return (0);
}
