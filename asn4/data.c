#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>
#include "data.h"

// Input: ’in_name’: a string ends with ’\0’
// ’in_id’: an integer
// Output: a pointer of type pointer to Key,
// pointing to an allocated memory containing a Key
// Effect: dynamically allocate memory to hold a Key
// set Key’s id to be in_id
// dynamically allocate memory for the Key’s name
// so that name will contain what is in ’in_name’.
Key *key_construct(char *in_name, int in_id) {
    Key *new = (Key *) malloc(sizeof(Key));
    new->name = strdup(in_name);
    new->id= in_id;
    return  new;
}

// Input: ’key1’ and ’key2’ are two Keys
// Output: if return value < 0, then key1 < key2,
// if return value = 0, then key1 = key2,
// if return value > 0, then key1 > key2,
int key_comp(Key key1, Key key2) {
    int num;
    num = strcmp(key1.name, key2.name);
    if (num<0){
        return -1;
    }
    else if(num>0){
        return 1;
    }
    else{
        if (key1.id>key2.id){
            return 1;
        }
        else{
            return -1;
        }
    }
}

// Input: ’key’: a pointer to Key
// // Effect: ( key->name key->id ) is printed
 void print_key(Key *key) {
     printf("%s, %d\n", key->name, key->id);
     }

// Input: ’node’: a node
// Effect: node.key is printed and then the node.data is print
void print_node(Node node) {
	printf("%s\n",node.key->name);
	}

