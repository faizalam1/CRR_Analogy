//
// Created by Fauzan Azhar on 11/27/2022.
//

#ifndef CRR_RR_H
#define CRR_RR_H
typedef struct Process{
    int ProcessID;
    int ArrivalTime;
    int BurstTime;
    int RemainingBurstTime;
    int CompletionTime;
} Process;

typedef struct Node{
    Process *data;
    struct Node *next;
} Node;

typedef struct LinkedList{
    Node *head;
    Node *tail;
    int size;
} LinkedList;

void print_process(Process *process);

void enqueue(LinkedList *queue, void *data);

Node *dequeue(LinkedList *queue);

void merge(Process *arr[], int start, int mid, int end);

void sort_by_AT(Process *arr[], int start, int end);

void take_input(Process *arr[], int size);

#endif //CRR_RR_H
