//
// Created by jfs on 07.11.19.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list.h"

struct list* make_list(int size) {
    struct list* tmp_list = malloc(sizeof(struct list));
    tmp_list->size=size;
    tmp_list->iterator=0;
    tmp_list->data = malloc(sizeof(double)*size);
    return tmp_list;
}

void list_enlarge(struct list* list)
        {
    size_t newSize = list->size +1;
    double* newArr = malloc(sizeof(double)*newSize);

    memcpy( newArr, list->data, list->size * sizeof(double) );

    list->size = newSize;

    list->data = newArr;
}

void list_add_item(struct list* list, double* a)
{
    list->data[list->iterator]=*a;

    list->iterator++;

    if(list->iterator>=list->size)
    {
        list_enlarge(list);
    }
}

void list_print(struct list* list)
{
    for (int i = 0; i < list->iterator; ++i)
    {
        printf("%.2f; ",list_get_item(list,i));
    }
    printf("\n");

}

void list_print_as_int(struct list* list)
{
    for (int i = 0; i < list->iterator; ++i)
    {
        printf("%d; ",list_get_item_as_int(list,i));
    }
    printf("\n");

}

double list_get_item(struct list* list,int index)
{

    return list->data[index];

}

int list_get_item_as_int(struct list* list,int index)
{

    return (int)list->data[index];

}

double pop(struct list* list)
        {
            list->iterator-=1;
    return list->data[list->iterator-1];

}

int pop_as_int(struct list* list)  {
    list->iterator--;

    return (int)list->data[list->iterator];
}

int isEmpty(struct list* list)
{
    if(list->iterator==0)
    { return 1;}
    else
        return 0;

}