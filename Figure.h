#ifndef FIGURE_H
#define FIGURE_H
#include "Shape.h"
#include "Line.h"

class Figure
{
    private:
    Shape** figure;
    int numShapes;

    public:
    Figure();
    Figure(Shape** shapes, int numShapes);
    void addShape(Shape *s);
    Line getBoundingBox();
    ~Figure();
};


#endif // !FIGURE_H