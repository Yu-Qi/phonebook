#include <stdlib.h>

#include "phonebook_opt.h"

/* FILL YOUR OWN IMPLEMENTATION HERE! */
entry *findName(char lastname[], entry *pHead)
{
    /* TODO: implement */
    while (pHead != NULL) {
        if (strcasecmp(lastname, pHead->lastName) == 0)
            return pHead;
        pHead = pHead->pNext;
    }
    return NULL;
}

entry *append(char lastName[], entry *e)
{
    e->pNext = (entry *) malloc(sizeof(entry));
    e = e->pNext;
    strcpy(e->lastName, lastName);
    e->pNext = NULL;

    return e;
}

int hash_function(char *key, hashTable *ht)
{
    unsigned int hashVal = 0;
    while(*key !='\0'){
        hashVal +=*key++;
    }
    return hashVal % ht->hashSize ;
}

void hash_init(hashTable *ht){
    ht -> hashSize = 11;
    ht -> myhashTable = malloc(sizeof(char)*MAX_LAST_NAME_SIZE*ht->hashSize);
    if(!ht->myhashTable)
        printf("malloc fails\n");
}

void hash_append(char *key, hashTable *ht){
    
}

