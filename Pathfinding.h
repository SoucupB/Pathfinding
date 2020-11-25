#pragma once
#include <stdint.h>
#define SEED_0 8558867
#define SEED_1 3093585

struct f32Point2D_t {
  float x;
  float y;
};
typedef struct f32Point2D_t *f32Point2D;

struct PointWithID_t {
  struct f32Point2D_t location;
  uint32_t ID;
};
typedef struct PointWithID_t *PointWithID;

struct PointsHashes_t {
  PointWithID *pages;
  int32_t *polygonsSizes;
  int32_t polygonsArraySize;
  size_t pagesSize;
};
typedef struct PointsHashes_t *PointsHashes;

struct Pathfinding_t {
  PointsHashes graphPolygons;
  struct hashmap *map;
  float *navMesh; // triangles, [x11, y11, x12, y12, x13, y13, x21, y21, x22,
                  // y22, x23, y23, .....]
  int32_t **edgesBetweenTriangleCenters;
  struct f32Point2D_t *triangleCenters;
  QuadTree quadTree;
};