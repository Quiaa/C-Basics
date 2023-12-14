#include <stdio.h>
#include <math.h>

struct Point
{
    double x;
    double y;
};
int isInsideTheCircle(struct Point a, struct Point b, double r)
{
    float length = sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));

    if(length < r) return 1;
    
    return 0;
    
}
int main()
{
    struct Point center = {5.7, 1.3};
    double radius = 1.2;
    struct Point a = {4.7, 1.0};

    printf("Point a %s the inside the cirle!", isInsideTheCircle(a, center, radius)?"is":"is not", "in the cirlce");
    return 0;
}