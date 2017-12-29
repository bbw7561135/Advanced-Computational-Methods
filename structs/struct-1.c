#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};  /* the ; here is important! */

struct rect {
    struct point pt1;
    struct point pt2;
};

int main(void){
    double dist;
    struct point pt = {1, 2};
    struct point maxpt = {320, 200};
    struct rect screen = {{1, 2}, {1, 1}};

    printf("x = %d, y = %d\n", pt.x, pt.y);
    printf("x = %d, y = %d\n", maxpt.x, maxpt.y);

    dist = sqrt((double) pt.x * pt.x + (double) pt.y * pt.y);
    printf("Distance between points = %f\n", dist);

    printf("Point 1:\n\tx = %d, y = %d\n", screen.pt1.x, screen.pt1.y);
    printf("Point 2:\n\tx = %d, y = %d\n", screen.pt2.x, screen.pt2.y);

    screen.pt1.x = 4;
    screen.pt1.y = 1;
    screen.pt2.x = 5;
    screen.pt2.y = 34;

    printf("Point 1:\n\tx = %d, y = %d\n", screen.pt1.x, screen.pt1.y);
    printf("Point 2:\n\tx = %d, y = %d\n", screen.pt2.x, screen.pt2.y);

    return 0;
}