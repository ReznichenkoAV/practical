#include "functional.h"

int cross(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4) {
    double Ua, Ub, numerator_a, numerator_b, denominator;

    denominator = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);

    if (denominator == 0) {
        if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0)
            return 1;
        else
            return 0;
    }
    else {
        numerator_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
        numerator_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
        Ua = numerator_a / denominator;
        Ub = numerator_b / denominator;

        if (Ua >= 0 && Ua <= 1 && Ub >= 0 && Ub <= 1) {
            return 1;
        }
        else {
            return 0;
        }
    }
}