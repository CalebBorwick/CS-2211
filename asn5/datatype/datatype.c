#include "../include/datatype.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *  * Duplicate string pointed to by str with dynamic memory allocation.
 *   *
 *    * @param str
 *     * @return
 *      */
char * string_dup(char *str){
    size_t size;
    size =strlen(str);
    char *charPoint;
    charPoint = (char *) malloc(sizeof(size+1));
    strcpy(charPoint,str);
    return charPoint;
}

/**
 *  *Generate a key with dynamic memory allocation.
 *   *
 *    * @param skey1
 *     * @param skey2
 *      * @return
 *       */
Key key_gen(char *skey1, char *skey2){
    Key keyP;
    keyP= (Key)malloc(sizeof(Key));
    keyP->skey1=strdup(skey1);
    keyP->skey2=strdup(skey2);
    return keyP;
}

/**
 *  *
 *   * Use strcmp( ) to do comparison. If key1->skey1 and key2->skey1 are different, then
 *       they determine the comparison result. If key1->skey1 and key2->skey1 are the same,
 *           then key1->skey2 and key2->skey2 determine the comparison result.
 *            * @param key1
 *             * @param key2
 *              * @return
 *               */
int key_comp(Key key1, Key key2){
    char *string11, *string12, *string21, *string22;

    string11 = key1->skey1;
    string12 = key1->skey2;
    string21 = key2->skey1;
    string22 = key2->skey2;

    int comp = strcmp(string11, string21);

    if (comp==0){
        comp= strcmp(string12,string22);
        return comp;
    }
    else{
        return comp;
    }

}

/**
 *  * Print a key.
 *   *
 *    * @param key
 *     */
void key_print(Key key){
    printf("%-11s", key->skey1);
    printf("%-11s", key->skey2);
}

/**
 *  *Free memory allocated for key.
 *   *
 *    * @param key
 *     */
void key_free(Key key){
    free(key->skey1);
    free(key->skey2);
    free(key);
}
/**
 *  * Generate a data with dynamic memory allocation.
 *   *
 *    * @param idata
 *     * @return
 *      */
Data data_gen(int idata){
    Data dataPoint;
    dataPoint=(Data)malloc(sizeof(Data));
    *dataPoint = idata;
    return dataPoint;
}

/**
 *  *Assign data with idata.
 *   *
 *    * @param data
 *     * @param idata
 *      */
void data_set(Data data, int idata){
    *data = idata;
}

/**
 *  *Print a data.
 *   *
 *    * @param data
 *     */
void data_print(Data data){
    printf("%d\n", *data);

}

/**
 *  * Free memory allocated for data.
 *   *
 *    * @param data
 *     */
void data_free(Data data){
    free(data);
}

