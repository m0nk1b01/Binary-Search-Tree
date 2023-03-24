#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

#define ERROR -1;


//Declaration of nodes containing the 15 most common words
/*
node_type level4_0 = {"a", 0L, 0L};
node_type level4_1 = {"are", 0L, 0L};
node_type level4_2 = {"he", 0L, 0L};
node_type level4_3 = {"is", 0L, 0L};
node_type level4_4 = {"of", 0L, 0L};
node_type level4_5 = {"that", 0L, 0L};
node_type level4_6 = {"to", 0L, 0L};
node_type level4_7 = {"you", 0L, 0L};



node_type level3_0 = {"and", &level4_0, &level4_1};
node_type level3_1 = {"in", &level4_2, &level4_3};
node_type level3_2 = {"on", &level4_4, &level4_5};
node_type level3_3 = {"was", &level4_6, &level4_7};



node_type level2_0 = {"for", &level3_0, &level3_1};
node_type level2_1 = {"the", &level3_2, &level3_3};



node_type root = {"it", &level2_0, &level2_1};
*/

int* create_array()
{
    int* bst_array[20];
    for(int i = 0; i < sizeof(bst_array); i++)
    {
        bst_array[i] = rand() % sizeof(bst_array)*4;
    }
    return bst_array;
}


char* search_tree(char* target)
{
    int depth = depth_check();//Height of the tree
    node_type* on = bst->root; //This is for reference as to what node is being looked at

    for(int i = 0; i < depth; i++)//loop through each layer of the tree
    {
        if(strcmp(target, on->word) == 0) //compares target(the word being searched for) and the the current word
        {
            return on->word;
        }

        if(strcmp(target, on->word) < 0) //if alphabetically before it will go to the left of the node
        {
            on = on->left;
        }else if(strcmp(target, on->word) > 0)//if alphabetically before it will go to the right of the node
        {
            on = on->right;
        }

    }
    return "error";
}

node_type* onn = &root;


void traverse_tree()
{

    if(onn->left != 0L)
    {
        printf("%s\n",onn->word);
        onn = onn->left;
        traverse_tree();

    }else if(onn->left == 0L)
    {
        printf("found the end");
    }
}

void sort_tree()
{
    //
}

void add_node()
{
    //node_type temp;
    //temp = malloc(sizeof(node_type));
    //findNewNode()
}

void remove_node()
{
    //remove a node then call sortTree()
}

node_type find_base() //trying to return the base of the linked list(the left most node)
{
    node_type* on = &root;
    while(1)
    {
        if(on->left == 0L)
        {
            return *on;
        }
        on = on->left;
    }
}


int depth_check()
{
    node_type* on = &root;
    int depth = 1;//starts with a depth of 1 because it starts from root

    while(on->left != 0L)
    {
        depth++;
        on = on->left;//since its a binary search tree the left most node will always be occupied, so go left
    }

    return depth;
}
int main()
{
    char word[32];//input the word being searched for
    printf("Select one of these words: \n and \n are \n for \n he \n in \n is \n it \n of \n on \n that \n the \n to \n was \n you\n--------------------------------------------\n");
    scanf("%s", word);
    if(search_tree(word) != "error")
    {
        printf("I found the word: %s\n", search_tree(word));
    }else
    {
        return ERROR;
    }

    return 0;

}



