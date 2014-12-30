#ifndef __GeometricAlgorithms__TrapezoidalMap__
#define __GeometricAlgorithms__TrapezoidalMap__

#include <stdio.h>
#include "Structs.h"



struct *tree_node{
    Point p;
    tree_node *lchild, *rchild;  
};

/**
 * Search Structure of a trapezoidal map
 * Binary tree
 */
class SearchStructure{
    tree_node *root;
};


/**
 * @brief Trapezoid defined by two segments and the horizontal extensions of two points.
 */
struct Trapezoid{
    Point top;
    Point bottom;
    Segment leftp;
    Segment rightp;
    
};


class TrapezoidalMap{
    /**
     * @brief Class for computing trapezoidation of a simple polygon
     */

public:
    TrapezoidalMap(vector<Segment> &p);
    void BuildMap();
    void DisplayMap();
    
private:
    /**
     * @brief Initilize the trapezoid structure with the bounding box
     */
    void initStructs();


    /**
     * Trapezoid structure
     */
    std::set<Trapezoid> T;

    /**
     * vertices of the polyogon
     */
    std::vector<Segment> polygon;
    SearchStructure S;

    /**
     * @brief Add a random segment of the polygon to the trapezoidal map
     * @pre ith segment has not been added to the trapezoidal map yet.
     */
    void addSegment(int i); 

    /**
     * @brief Add a endpoint os a segment in the polygon to the trapezoidal structure
     */
    void addEndpoit(Point &p);
    
};

#endif /* defined(__GeometricAlgorithms__TrapezoidalMap__) */
