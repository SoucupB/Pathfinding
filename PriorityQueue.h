#pragma once
#include <stdint.h>

struct PriorityQueuef_t {
  float *heap;
  int32_t *IDs;
};

typedef struct PriorityQueuef_t *PriorityQueuef;