//
// Created by jfs on 20.11.19.
//

#ifndef CSEM_NODE_H
#define CSEM_NODE_H

#endif //CSEM_NODE_H

struct node
        {
            double pos_x;
            double pos_y;
            int visited;
            int  color_index;
            struct list* adj;
        };

struct node* make_node();