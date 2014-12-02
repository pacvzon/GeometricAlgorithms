#ifndef __GeometricAlgorithms__Structs__
#define __GeometricAlgorithms__Structs__

#include <vector>

struct Point{
    float x;
    float y;

    Point(float x, float y){
        this->x = x;
        this->y = y;
    }
};

class Segment{
    Point endleft;
    Point endright;
    
    
};

class Polygon{
    std::vector<Point> P;
};

#endif
