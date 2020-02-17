//
// Created by elvis on 2/16/20.
//

#include "CircularSingleLinkedList.h"


HEAD *head = NULL;



void push(){
    NODE *new_node = (NODE*)malloc(sizeof(NODE));
    NODE *temp;
    printf("Enter data to push\n");
    scanf("%d", &new_node->data);
    if(head == NULL){
        head = new_node;
        new_node->next = head;
    }else{
        temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        new_node->next = head;
        temp->next = new_node;
        head = new_node;
    }
}

void display(){
    NODE *temp = head;
    do{
        printf("%d\t", temp->data);
        temp = temp->next;
    }while (temp->next != NULL && temp != head);
}

void append(){
    NODE *new_node = (NODE*)malloc(sizeof(NODE));
    NODE *temp;
    printf("Enter data to append\n");
    scanf("%d", &new_node->data);
    if(head == NULL){
        head = new_node;
        new_node->next = head;
    }else{
        temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
    }
}

void delete(){
    NODE *current = head, *prev;
    int dataTobeDeleted;
    printf("Enter data to be deleted\n");
    scanf("%d", &dataTobeDeleted);
    if(head == NULL){
        return;
    }
    while(current->data != dataTobeDeleted){
        if(current->next == head){
            printf("\nSpecfied Node was not found in the list");
            break;
        }
        prev = current;
        current = current->next;
    }
    if(current->next == head){
        head == NULL;
        free(current);
        return;
    }
    if(current == head){
        prev =  head;
        while(prev->next != head){
            prev = prev->next;
        }
        head = current->next;
        prev->next = head;
        free(current);
    } else if(current->next == head){
        prev->next = head;
        free(current);
    } else{
        prev->next = current->next;
        free(current);
    }

}