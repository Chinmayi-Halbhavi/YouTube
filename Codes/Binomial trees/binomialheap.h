#ifndef DATALGORITHM_BINOMIALHEAP_H
#define DATALGORITHM_BINOMIALHEAP_H

#include "list.h"

typedef struct area{
    int width;
    int height;
} Area;

typedef struct anode{
    int key;
    Area value;
    int degree;
    struct anode *parent, *sibling, *child;
} ANode;

typedef struct binomialheap{
    list *list;
    int size;
} BinomialHeap;

extern BinomialHeap *bheap_init();
extern int bheap_is_full(BinomialHeap *bheap);
extern int bheap_is_empty(BinomialHeap *bheap);
extern int bheap_push(BinomialHeap *bheap, int key, Area *value);
extern ANode *bheap_top(BinomialHeap *bheap);
extern void bheap_pop(BinomialHeap *bheap);
extern void bheap_traverse(BinomialHeap *bheap);
extern int bheap_clear(BinomialHeap *bheap);

#endif //DATALGORITHM_BINOMIALHEAP_H
