#define CHUNK 1024 /* read 1024 bytes at a time */

#include "list.h"
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <libnet.h>
#include "matrix.h"
#include <math.h>
#include <float.h>
#include "node.h"

struct list* freq;
struct list* posX;
struct list* posY;
double radius;


int read_file()
{
    int case_id=0;
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("/home/jfs/CLionProjects/Csem/sw2019-02-data/vysilace-25.txt", "r");
    if (fp == NULL)
        return 1;

    while ((read = getline(&line, &len, fp)) != -1) {

            if(strcmp( line,"Available frequencies:\r\n")==0)
            {
                case_id=1;
                continue;
            }
            else
            if(strcmp( line,"Transmission radius:\r\n")==0)
            {
                case_id=2;
                continue;
            }
            else
            if(strcmp( line,"Transmitters:\r\n")==0)
            {
                case_id=3;
                continue;
            }

        switch(case_id) {
            case 1 :
                {
                    double index;
                    double* value=malloc(sizeof(double));
                    sscanf(line, "%lf %lf", &index, value);
                    list_add_item(freq,value);

                }
                break;
            case 2 :
                {



                   radius=atof(line);


                }
                break;
            case 3 :
                {
                double index;
                double* valueX=malloc(sizeof(double));
                double* valueY=malloc(sizeof(double));
                sscanf(line, "%lf %lf %lf", &index, valueX,valueY);

                list_add_item(posX,valueX);
                list_add_item(posY,valueY);
                }
                break;

            default :
                printf("Invalid case_id\n" );
        }

    }

    fclose(fp);
    if (line)
        free(line);

}

double distance(double x1, double y1,double x2, double y2)
{

    double tmp=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    tmp=sqrt(tmp);

    return tmp/2;
}

int main(int argc, char *argv[]) {

     freq=make_list(1);

     posX=make_list(1);

     posY=make_list(1);

     read_file();

     struct node* nodes[posX->iterator-1];

    for (int i = 0; i <posX->iterator ; ++i)
    {
        struct node* node =make_node();
        node->pos_x=posX->data[i];
        node->pos_y=posY->data[i];
        node->adj=make_list(1);
        node->color_index=0;
        nodes[i]=node;

    }


    for(int x=0;x<posY->iterator;x++)
    {
        for(int y=0;y<posY->iterator;y++)
        {
                double dis=distance(posX->data[x],posY->data[x],posX->data[y],posY->data[y]);
                if(dis<radius)
                {
                    if(x!=y)
                    {
                        double* tmp=malloc(sizeof(double));
                        *tmp=y;
                        list_add_item(nodes[x]->adj,tmp);
                    }
                }
        }
    }


    for (int i = 0; i <posX->iterator ; ++i)
    {
        printf("i: %d\n",i);
       // printf("x: %f\n",nodes[i]->pos_x);
       // printf("Y: %f\n",nodes[i]->pos_y);
       // printf("c: %d\n",nodes[i]->color_index);
        list_print_as_int(nodes[i]->adj);
        printf("--------\n");

    }

    struct list* stack=make_list(1);

    for (int i = 0; i <posX->iterator; ++i)
    {
         if(nodes[i]->visited!=1)
         {
           double* u=malloc(sizeof(double));
           *u=i;

           nodes[i]->visited=1;

           for(int j=0;j<nodes[i]->adj->iterator;j++)
             {
                 if(nodes[0]->visited==1)
                     if(nodes[i]->color_index==nodes[list_get_item_as_int(nodes[i]->adj,j)]->color_index)
                         nodes[i]->color_index==nodes[list_get_item_as_int(nodes[i]->adj,j)]->color_index++;
             }

             list_add_item(stack,u);

         }

        while(!isEmpty(stack))
        {
           // list_print_as_int(stack);
            int o=pop_as_int(stack);
            for(int j=0;j<nodes[o]->adj->iterator;j++)
            {
                if(nodes[0]->visited==1)
                if(nodes[o]->color_index==nodes[list_get_item_as_int(nodes[o]->adj,j)]->color_index)
                    nodes[o]->color_index==nodes[list_get_item_as_int(nodes[o]->adj,j)]->color_index++;

                if(nodes[list_get_item_as_int(nodes[o]->adj,j)]->visited!=1)
                {

                   // list_print_as_int(stack);
                    list_get_item_as_int(nodes[o]->adj,j);
                    double* p=malloc(sizeof(double));
                    *p=list_get_item_as_int(nodes[o]->adj,j);
                    list_add_item(stack,p);
                    nodes[list_get_item_as_int(nodes[o]->adj,j)]->visited=1;

                }
            }

        }




}


    for (int i = 0; i <posX->iterator ; ++i)
    {
        printf("%d %f \n",i,list_get_item(freq,nodes[i]->color_index));

    }


    return 0;

}


