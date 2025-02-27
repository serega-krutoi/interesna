#include <cmath>
#include <stdio.h>

using namespace std;

int trapezoidPerim(int a, int b, int c, int d) {
    return a+b+c+d;
}

int trapezoidArea(int a, int b, int c, int d) {
    int part1 = (a+b) / 2;
    int part2 = sqrt((c*c) - pow(((pow((a-b), 2) + c*c - d*d)) / 2*(a-b), 2));
    return part1 * part2;
}

int trapezoidMidL(int a, int b) {
    return fabs(a - b);
}

int main(void) {
    
    int a,b,c,d;
    printf("Основание Основание Сторона Сторона\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int perim = trapezoidPerim(a, b, c, d);
    int area = trapezoidArea(a, b, c, d);
    int midLine = trapezoidMidL(a, b);
    if (area <= 0) {
       printf("Это не трапеция"); 
    }
    else {
    printf("perim = %d\n area = %d\n midLine = %d\n", perim, area, midLine);
    }
}