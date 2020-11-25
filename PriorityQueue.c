#include "PriorityQueue.h"
#include <stdlib.h>

PriorityQueuef priorityQueuef_New(void) { // min heap structure
  PriorityQueuef queue = gal_allocz(sizeof(struct PriorityQueuef_t));
  queue->heap = vct_New(sizeof(float));
  queue->IDs = vct_New(sizeof(int32_t));
  return queue;
}

void priorityQueuef_SiftUp(PriorityQueuef queue, int32_t index) {
  if (!index) {
    return;
  }
  int32_t parent = (index - 1) >> 1;
  if (queue->heap[index] < queue->heap[parent]) {
    SWAP_F(queue->heap[index], queue->heap[parent]);
    SWAP_I32(queue->IDs[index], queue->IDs[parent]);
    priorityQueuef_SiftUp(queue, parent);
  }
}