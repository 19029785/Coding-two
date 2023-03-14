//
//  peakboid.cpp
//
// 
//

#include "peakboid.hpp"

//This is the constructor function for the PeakBoid class, which initializes the properties of a single PeakBoid instance.

//It sets the separation weight (separationWeight), cohesion weight (cohesionWeight), and alignment weight (alignmentWeight) to specific values, as well as the separation threshold (separationThreshold) and neighbourhood size (neighbourhoodSize).

//It then sets the initial position (position) of the PeakBoid to a random point within a specific range, and the initial velocity (velocity) to a random vector within a specific range.

//The draw() function simply draws the PeakBoid as a circle on the screen, with a specific color and size.

peakboid::peakboid()
{
    separationWeight = 1.1f;
    cohesionWeight = 0.2f;
    alignmentWeight = 0.2f;
    
    separationThreshold = 20;
    neighbourhoodSize = 100;
    
    position = ofVec3f(ofRandom(0, 200), ofRandom(0, 200));
    velocity = ofVec3f(ofRandom(-2, 2), ofRandom(-2, 2));
}

void peakboid::draw(){
    ofSetColor(145, 168, 208);
    ofCircle(position.x, position.y, 15);
}
