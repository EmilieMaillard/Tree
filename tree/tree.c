#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


//Création d'un noeud
Tree *create_node(Tree *root, int value){
    if(root != NULL)
    {
        if(root->initNodeValue>value)
        {
            root->left=create_node(root->left, value);
        }
        else
        {
            root->right=create_node(root->right, value);
        }
    }
    else
    {
        root = (Tree *)malloc(sizeof(Tree));//on alloue de la mémoire
        root->initNodeValue = value;
        root->left = NULL;
        root->right = NULL;
    }
    return root;
}

//Demander des valeurs
void input_numbers()
{
    int value;
    Tree *root;
    root = NULL;
    int i;

    printf("Insertion des valeurs : ");
    srand(time(NULL));//initialisation de rand
    for(i = 0; i < 10; i++)//pour i de 0 à 10
    {
        value = rand()%100 + 1;//on insère 10 valeurs de 1 à 100
        root = create_node(root,value);
        printf("%d ", value);//affichage des valeurs
    }
    return 0;
}


//Affichage de l'arbre
void print_tree(Tree *root)
{
    if(root != NULL)
    {
        printf("-%d\n", root->initNodeValue); //on affiche la racine
        if(root->left != NULL || root->right != NULL)//si les branches gauche et droite du noeud sont différent de NULL
        {
            print_tree(root->left);//alors on affiche la branche gauche en-dessous de la racine
            print_tree(root->right);//idem pour la droite
        }
    }
}

