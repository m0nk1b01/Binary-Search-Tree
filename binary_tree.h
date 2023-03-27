#ifndef BINARYTREE_H_INCLUDED
#define BINARYTREE_H_INCLUDED

#ifndef ERROR
#define ERROR -1
#endif // ERROR

typedef struct node
    {
        int data;
        struct node* left;
        struct node* right;
    }node_type;

typedef struct binary_search_tree
    {
        struct node* root;
    }bst;

char* search_tree(char*);
void traverse_tree();
void sort_tree();
void add_node();
void remove_node();
node_type find_base();
int depth_check();
int* create_array();
void print_array(int arr[]);



#endif // BINARYTREE_H_INCLUDED
