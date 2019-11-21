//
// Created by jfs on 20.11.19.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "node.h"


struct node* make_node() {

    struct node* tmp_node= malloc(sizeof(struct node));
    return tmp_node;
}