#include "TrapezoidalMap.h"

TrapezoidalMap::TrapezoidalMap(vector<Segment> &p) {
    this.polygon = vector<Segment>(p);
    initStructs();
}

TrapezoidalMap::~TrapezoidalMap() {}

void TrapezoidalMap::BuildMap() {
    shuffleVector(this.polygon);
    for(int i = 0; i < polygon.size(); ++i)
        addSegment(i);
}



void TrapezoidalMap::addSegment(int i) {
    Segment s = polygon[i];
    addEndpoint(s.endleft);
    addEndpoint(s.endright);
   
}

void TrapezoidalMap::addEndpoint(Point &p) {
    Trapezoid tp = locateTrapezoid(p);
    T.erase(tp);
    S.remove(tp);
    Trapezoid tau, tab; // trapezoids resultin of dividing ta by the horizontal extension of p
    tpu = upperTrap(tp, p);
    tpb = lowerTrap(tp, p);

    T.insert(tpu);
    T.insert(tbp);
    S.update();
}

void TrapezoidalMap::initStructs() {
    
    
}
