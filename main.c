#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"



int* create_array()
{

    int* bst_array[31];
    srand(time(NULL));
    for(int i = 0; i < sizeof(bst_array)/8; i++)
    {
        bst_array[i] = rand() % sizeof(bst_array);
        printf("%d, ", bst_array[i]);
    }

    return bst_array;
}

void print_array(int arr[6])
{
    int arr_len = sizeof(arr)/8;
    printf("%d", arr_len);
    printf("[");
    for(int i = 0; i < arr_len - 1; i++)
    {
        printf("test");
        printf("%d,", arr[i]);
    }
    printf("]\n");
}

void sort_array(int* bst_array)
{
    int temp = 0;
    int value = 0;
    int arr_len = sizeof(bst_array)/8;
    int min_index = 0;
    print_array(bst_array);
    for(int i = 0; i < arr_len - 1; i++) //iterate through array
    {
        min_index = i;
        for(int x = 0; x < arr_len - 1; x++)
        {
            if(bst_array[x] < bst_array[min_index])
            {
                printf("%d is less than %d", bst_array[x], bst_array[min_index]);
                min_index = x;
            }
        }
        temp = bst_array[i];
        bst_array[i] = bst_array[min_index];
        bst_array[min_index] = temp;
    }

    print_array(bst_array);


}


void build_tree()
{
    //re-oder starting list based on how far it is from the median value then build tree

}
/*
char* search_tree(char* target)
{
    int depth = depthCheck();//Height of the tree
    node_type* on = &root; //This is for reference as to what node is being looked at

    for(int i = 0; i < depth; i++)//loop through each layer of the tree
    {
        if(strcmp(target, on->word) == 0) //compares target(the word being searched for) and the the current word
        {
            return on->definition;
        }

        if(strcmp(target, on->word) < 0) //if alphabetically before it will go to the left of the node
        {
            on = on->left;
        }else if(strcmp(target, on->word) > 0)//if alphabetically before it will go to the right of the node
        {
            on = on->right;
        }

    }

}
*/

/*
void set_parent()
{
    node_type* on = findBase(); //set the on node to the base
    while(1)
    {
        //printf("%s", on.)
        if(on->next == 0L)
        {
            break;
        }
    }
}
*/
/*
node_type find_base() //trying to return the base of the linked list(the left most node)
{
    node_type* on = tree->root;
    while(1)
    {
        if(on->left == 0L)
        {
            return *on;
        }
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
    int depth = 1;//starts with a depth of 1 because it starts from root

    while(on->left != 0L)
    {
        depth++;
        on = on->left;//since its a binary search tree the left most node will always be occupied, so go left
    }

    return depth;
}
*/

int main()
{
    bst tree;
    //int* bst_array[31];
    //bst_array = create_array();
    //printf("%d", bst_array[0]);
    int arr = {9, 3, 6, 1, 7};
    print_array(arr);
    //sort_array(create_array());
    return 0;

}




