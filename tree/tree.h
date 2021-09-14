#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

//définition de la structure Arbre
typedef struct Tree
{
    int initNodeValue;//valeur du noeud
    struct Tree *left;
    struct Tree *right;
}Tree;


Tree *create_node(Tree *root, int value);

void input_numbers();

void print_tree(Tree *root);



#endif // TREE_H_INCLUDED
