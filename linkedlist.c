#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedlist.h"

LkList lklist() {
    LkList new_ll;
    new_ll.head = NULL;
    return new_ll;
}

bool empty_ll(LkList* ll) {
    return (ll->head == NULL);
}

void add_head_ll(LkList* ll, int new_data) {
    llnode *new_node = (llnode*)malloc(sizeof(llnode));
    new_node->data = new_data;
    new_node->next = ll->head;
    ll->head = new_node;
}

void add_tail_ll(LkList* ll, int new_data) {
    llnode *new_node = (llnode*)malloc(sizeof(llnode));
    new_node->data = new_data;
    new_node->next = NULL;
    if (empty_ll(ll)) {
        ll->head = new_node;
    } else {
        llnode *prev = NULL;
        llnode *crawler = ll->head;
        while(crawler != NULL) {
            prev = crawler;
            crawler = crawler->next;
        }
        prev->next = new_node;
    }
}

void add_mid_ll(LkList* ll, int new_data, short index) {
    llnode *prev = NULL;
    llnode *crawler = ll->head;
    short count = (crawler != NULL);
    while(crawler != NULL && count < index) {
        prev = crawler;
        crawler = crawler->next;
        count += 1;
    }
    if (count < index) {
        printf("(%%) Tried to put data %d at index %d, however the list was %d nodes long. Put the data at the tail of list instead.\n", new_data, index, count);
        add_tail_ll(ll, new_data);
    } else {
        llnode *new_node = (llnode *)malloc(sizeof(llnode));
        new_node->data = new_data;
        new_node->next = crawler;
        prev->next = new_node;
    }
    
}

int return_loc_ll(LkList *ll, short index) {
    llnode *prev = NULL;
    llnode *crawler = ll->head;
    short count = (crawler != NULL);
    while(crawler != NULL && count < index) {
        prev = crawler;
        crawler = crawler->next;
        count += 1;
    }
    if (count < index) {
        printf("(%%) Tried to find the data at index %d, however the list was %d nodes long. Returned -999 instead.\n", index, count);
        return -999;
    } else {
        return crawler->data;
    }
}

void print_ll(LkList *ll) {
    llnode *crawler = ll->head;
    printf("List: ");
    while(crawler != NULL) {
        printf("%d ", crawler->data);
        crawler = crawler->next;
    }
    printf("\n");
}

void del_head_ll(LkList* ll) {
    if (empty_ll(ll)) {
        printf("(%%) Tried to delete the head of list, however list was empty.\n");
    } else {
        llnode *old_head = ll->head;
        ll->head = old_head->next;
        free(old_head);
    }
}

void del_tail_ll(LkList* ll) {
    if (empty_ll(ll)) {
        printf("(%%) Tried to delete the head of list, however list was empty.\n");
    } else {
        llnode *prev = NULL;
        llnode *crawler = ll->head;
        llnode *next = ll->head->next;
        while(next != NULL) {
            prev = crawler;
            crawler = crawler->next;
            next = crawler->next;
        }
        if (prev != NULL) {prev->next = NULL;}
        free(crawler);
    }
}