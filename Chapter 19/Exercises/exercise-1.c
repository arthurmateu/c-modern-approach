#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h> /* C99 only */

typedef int Item;
typedef struct queue *Queue;

void append_queue(Queue, Item i);
void remove_head_queue(Queue);
Item head_queue(Queue);
Item push(Queue);
bool pop(Queue);

#endif