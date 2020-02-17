//
// Created by elvis on 2/16/20.
//

#ifndef CIRCULARSINGLELINKEDLIST_CIRCULARSINGLELINKEDLIST_H
#define CIRCULARSINGLELINKEDLIST_CIRCULARSINGLELINKEDLIST_H


#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE,HEAD;



void push();
void display();
void append();
void delete();

#endif //CIRCULARSINGLELINKEDLIST_CIRCULARSINGLELINKEDLIST_H
