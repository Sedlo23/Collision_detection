//
// Created by jfs on 07.11.19.
//

#ifndef CSEM_LIST_H
#define CSEM_LIST_H

struct list {
    int size; // number of items
    int iterator;
    double* data; // dim Array
};

void list_enlarge(struct list* list);

struct list* make_list(int size);

void list_print(struct list* list);

void list_print_as_int(struct list* list);

void list_add_item(struct list* list, double* a);

double list_get_item(struct list* list,int index);

int list_get_item_as_int(struct list* list,int index);

double pop(struct list* list);

int pop_as_int(struct list* list);

int isEmpty(struct list* list);

#endif //CSEM_LIST_H
