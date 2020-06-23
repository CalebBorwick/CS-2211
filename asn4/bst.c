#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bst.h"
#include <memory.h>



// Input: index: index of the node
// // Output: index of the node left of the index
int leftNode(int index){
    return(index*2);
}

// Input: index: index of the node
// // Output: index of the node right of the index
int rightNode(int index){
    return ((index*2)+1);
}


// Input: bst, index
// // Effect: print_node for each node in order traversal
void traversal_rec(BStree bst, int index){
    if (bst->is_free[index]=='0'){
        traversal_rec(bst, leftNode(index));
        print_node(bst->tree_nodes[index]);
        traversal_rec(bst, rightNode(index));
    }
}



// Input: 'bst', 'key', 'data', 'value': the value from strcmp,
// // determines if , 'index': the current index of is_free & tree_nodes
// // Effect: recursively search for an array for the first appropriate
// // branch for the given key, using the strcmp value from bstree_insert
void insert_rec(BStree bst, Key *key, int data, int index){
    if (bst->is_free[index]=='1'){
        bst->tree_nodes[index].key = key;
        bst->tree_nodes[index].data = data;
        bst->is_free[index]='0';
    }
    else{
        int cmp = strcmp(key->name, bst->tree_nodes[index].key->name);
        if (cmp==0) {
            print_key(key);
            return;
        }
        if(cmp>0) {
            insert_rec(bst,key,data,rightNode(index));
        }
        else{
            insert_rec(bst,key,data,leftNode(index));
        }

    }
}

// Input: ’size’: size of an array
// // Output: a pointer of type BStree,
// // i.e. a pointer to an allocated memory of BStree_struct type
// // Effect: dynamically allocate memory of type BStree_struct
// // allocate memory for a Node array of size+1 for member tree_nodes
// // allocate memory for an unsigned char array of size+1 for member is_free
// // set all entries of is_free to 1
// // set member size to ’size’;
BStree bstree_ini(int size) {
    int i;
    BStree bst;
    bst = (BStree_struct*)(malloc(sizeof(BStree_struct)));
    bst->tree_nodes=(Node*)malloc((size+1) * sizeof(Node));
    bst -> is_free = (unsigned char*)malloc((size+1) * sizeof(unsigned char));
    for (i =0; i<size; i++){
        bst->is_free[i]='1';
    }
    bst->size = size;
    return bst;
}

// Input: ’bst’: a binary search tree
// // ’key’: a pointer to Key
// // ’data’: an integer
// // Effect: ’data’ with ’key’ is inserted into ’bst’
// // if ’key’ is already in ’bst’, do nothing
void bstree_insert(BStree bst, Key *key, int data) {
    insert_rec(bst, key, data, 1);
}


// Input: ’bst’: a binary search tree
// // Effect: print all the nodes in bst using in order traversal
void bstree_traversal(BStree bst) {
    traversal_rec(bst,1);
}

// Input: ’bst’: a binary search tree
// // Effect: all memory used by bst are freed
void bstree_free(BStree bst) {
    free(bst->tree_nodes);
    free(bst->is_free);
    free(bst);
}

