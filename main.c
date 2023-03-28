#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"
#include <time.h>
#include <string.h>

void create_array()
{
    int arr_len = sizeof(bst_array)/sizeof(bst_array[0]);
    srand(time(NULL));
    int temp = 0;
    for(int i = 0; i < arr_len; i++)
    {
        bst_array[i] = rand() % (int)sizeof(bst_array);
    }
}

void print_array(int arr[])
{
    int arr_len = (int)sizeof(bst_array)/(int)sizeof(bst_array[0]);
    printf("[");
    for(int i = 0; i < arr_len - 1; i++)
    {
        if(i >= arr_len -2)
        {
            printf("%d", arr[i]);
        }else
        {
        printf("%d, ", arr[i]);
        }
    }
    printf("]\n");
}

void sort_array()
{
    int temp = 0;
    int value = 0;
    int arr_len = sizeof(bst_array)/sizeof(bst_array[0]);
    int min_index = 0;
    print_array(bst_array);
    for(int i = 0; i < arr_len - 1; i++) //iterate through array
    {
        for(int x = 0; x < arr_len - 1; x++)
        {
            if(bst_array[x] > bst_array[i])
            {
                
                temp = bst_array[i];
                bst_array[i] = bst_array[x];
                bst_array[x] = temp;
            }
        }
        
    }
    print_array(bst_array);


}

void elimitate_duplicates(int* arr)
{

}



//re-oder starting list based on how far it is from the median value then build tree
void build_tree()
{


}
/*
char* search_tree(char* target)
{
    int depth = depth_check();//Height of the tree
    node_type* on = bst->root; //This is for reference as to what node is being looked at
    int depth = depthCheck();//Height of the tree
    node_type* on = &root; //This is for reference as to what node is being looked at
    for(int i = 0; i < depth; i++)//loop through each layer of the tree
    {
        if(strcmp(target, on->word) == 0) //compares target(the word being searched for) and the the current word
        {
            return on->word;
            return on->definition;
        }
        if(strcmp(target, on->word) < 0) //if alphabetically before it will go to the left of the node
@@ -65,47 +87,28 @@ char* search_tree(char* target)
        }
    }
    return "error";
}

node_type* onn = &root;
}
*/

void traverse_tree()
{

}
/*
void set_parent()
{

    if(onn->left != 0L)
    {
        printf("%s\n",onn->word);
        onn = onn->left;
        traverse_tree();

    }else if(onn->left == 0L)
    node_type* on = findBase(); //set the on node to the base
    while(1)
    {
        printf("found the end");
        //printf("%s", on.)
        if(on->next == 0L)
        {
            break;
        }
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

*/
/*
node_type find_base() //trying to return the base of the linked list(the left most node)
{
    node_type* on = &root;
    node_type* on = tree->root;
    while(1)
    {
        if(on->left == 0L)
@@ -115,8 +118,17 @@ node_type find_base() //trying to return the base of the linked list(the left mo
        on = on->left;
    }
}
*/
void add_node()
{
    //add a node then call sortTree()
}


void remove_node()
{
    //remove a node then call sortTree()
}
/*
int depth_check()
{
    node_type* on = &root;
@@ -130,22 +142,21 @@ int depth_check()
    return depth;
}
*/

int main()
{
    printf("\n\n\n\n");
    create_array();
    sort_array();
    return 0;
}
