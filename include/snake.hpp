#ifndef __SNAKE__
#define __SNAKE__
#include <cmath>
#include "cvector.hpp"
#include "image.hpp"


double avg_distance(int* x_points, int* y_points, int points_n);
cvector<cvector<int>> window_neighbours(int size);

#endif