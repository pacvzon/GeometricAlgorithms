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

    bool incident(Segment& s);
    bool incident(Polygon &p);
};

struct Segment{
    Point endleft;
    Point endright;

    bool incident(Point &p);
    bool adjacent(Segment &s);
    
    
};
struct Triangle{
    Point v1, v2, v3;
};

struct Polygon{
    std::vector<Segment> P;
};

#endif
