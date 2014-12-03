#ifndef __GeometricAlgorithms__TrapezoidalMap__
#define __GeometricAlgorithms__TrapezoidalMap__

#include <stdio.h>
#include "Structs.h"

/**
 * Search Structure of a trapezoidal map
 * Binary tree
 */
class SearchStructure{
    
};

/**
 * Class represting a Trapezoid in division of a polygon
 * Defined by two setments and the vertical extension of two points
 */
class Trapezoid{
    Segment top;
    Segment bottom;
    Point leftp;
    Point rightp;
    
};


class TrapezoidalMap{

public:
    TrapezoidalMap(vector<Point> &p);
    void BuildMap();
    void DisplayMap();
    
private:
   
    std::vector<Point> vertices; /* vertices of the polyogon*/
    std::vector<Trapezoid> traps;
    SearchStructure S;

    
    
};

#endif /* defined(__GeometricAlgorithms__TrapezoidalMap__) */
