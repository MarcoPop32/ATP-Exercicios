#include <stdio.h>
#include <math.h>

double distancia3D(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2));
}

double areaTriangulo(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double areaFace(double v[][3], int i, int j, int k) {
    double a = distancia3D(v[i][0], v[i][1], v[i][2], v[j][0], v[j][1], v[j][2]);
    double b = distancia3D(v[i][0], v[i][1], v[i][2], v[k][0], v[k][1], v[k][2]);
    double c = distancia3D(v[j][0], v[j][1], v[j][2], v[k][0], v[k][1], v[k][2]);
    return areaTriangulo(a, b, c);
}

int main(void) {
    double v[4][3], area;
    int t, i;
    for (t = 0; t < 10; t++) {
        printf("Tetraedro %d - 4 vertices (x y z cada):\n", t + 1);
        for (i = 0; i < 4; i++) {
            printf("  vertice %d: ", i + 1);
            scanf("%lf %lf %lf", &v[i][0], &v[i][1], &v[i][2]);
        }
        area = areaFace(v, 0, 1, 2) + areaFace(v, 0, 1, 3) + areaFace(v, 0, 2, 3) + areaFace(v, 1, 2, 3);
        printf("  Area total = %.4f\n", area);
    }
    return 0;
}
