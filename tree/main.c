#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main()
{
    Tree *root;
    root = NULL;

    input_numbers();//on appel la fonction pour entrer des nombres random
    if(root != NULL)
    {
        print_tree(root);//on affiche l'arbre si la racine est différent de null
    }
    else
    {
        printf("\n\nL'affichage ne fonctionne pas\n\n");
    }


    return 0;
}
