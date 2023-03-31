#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"
#include <time.h>
#include <string.h>
#include <math.h>

void create_array()
{
    int x = 0;
    int arr_len = sizeof(bst_array)/sizeof(bst_array[0]);
    srand(time(NULL));
    for(int i = 0; i < arr_len; i++)
    {
        get_rand(i, bst_array, arr_len);
    }
}
int count = 0;  
int get_rand(int i, int* arr, int arr_len)
{
    count++;
    int x = 0;
    arr[i] = rand() % (int)sizeof(bst_array);

        while(x < i)
        {
            if(arr[i] == arr[x])
            {
                get_rand(i, arr, arr_len);
            }else
            {
                x++;
            }
        }
    return arr[i];
}

void print_array(int* arr, int arr_len)
{
    printf("\n[");
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

void sort_array(int* arr, int arr_len)
{
    int temp = 0;
    int value = 0;
    int min_index = 0;
    print_array(arr, arr_len);
    for(int i = 0; i < arr_len - 1; i++) //iterate through array
    {
        for(int x = 0; x < arr_len - 1; x++)
        {
            if(arr[x] > arr[i])
            {
                
                temp = arr[i];
                arr[i] = arr[x];
                arr[x] = temp;
            }
        }
        
    }
    print_array(arr, arr_len);


}

void build_root(int value, tree_type* bst)
{
    node_type* temp_node = malloc(sizeof(node_type));
    temp_node->data = value;
    bst->root = temp_node;
    bst->root->left = 0L;
    bst->root->right = 0L;
    printf("%p", bst->root->left);
}

void build_node(int value, tree_type* bst)
{
    node_type* on = bst->root;
    int x = search_tree(value, bst, on);
    if(x == 1)
    {
        printf("Number already exists");
    }else if(x == 0)
    {
        node_type* new_node = malloc(sizeof(node_type));
        new_node->data = value;
        if(on->data > value)
        {
            on->right = new_node;
        }else if(on->data < value)
        {
            on->left = new_node;
        }
        new_node->left = 0L;
        new_node->right = 0L;
        
    }
}

//re-oder starting list based on how far it is from the median value then build tree
void build_tree(int* arr, int arr_len, tree_type* bst)
{
    int denom = 0;
    for(int i = 0; i < sqrt(arr_len); i++)
    {
        denom = pow(2, i) - 1;
        for(int x = 1; x < denom; x = x + 2)
        {
            if(i == 0)
            {
                printf("building root");
                build_root(arr[x/denom], bst);   
            }else
            {
                //build_node(arr[x/denom], bst);
                //build node
                //search for node in tree
                //when find null assign left or right to node
                //ASSIGN LEFT AND RIGHT AS NULL YOU NUMB SKULL
            }
        }
    }

}

int search_tree(int target_value, tree_type* bst, node_type *on )
{
    on = bst->root;
    for(int i =0; i < depth_check(bst); i++)
    {
        if(target_value == on->data)
        {
            return 1;
        }else if(target_value < on->data)
        {
            if(on->left == 0l)
            {
                return 0;
            }else
            {
                on = on->left;
            }
        }else if(target_value > on->data)
        {
            if(on->right == 0l)
            {
                return 0;
            }else
            {
                on = on->right;
            }
        }
    }
}


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
node_type find_base(tree_type* bst) //trying to return the base of the linked list(the left most node)
{
    node_type* on = bst->root;
    while(1)
    {
        if(on->left == 0L)
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

int depth_check(tree_type* bst)
{
    int depth = 0;
    node_type* on = bst->root;
    printf("%p", &on->left);
    while(on->left != 0L)
    {
        on = on->left;
        depth++;
    }
    return depth;
}




int main()
{

    tree_type *bst = malloc(sizeof(tree_type));
    bst->root = 0L;
    printf("\n\n\n\n");
    create_array();
    int arr_len = sizeof(bst_array)/sizeof(bst_array[0]);
    sort_array(bst_array, arr_len);
    build_tree(bst_array, arr_len, bst);

    return 0;
}
