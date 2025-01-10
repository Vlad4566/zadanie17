
#include <stdio.h>

float volume_cuboid(float x , float y , float h) {
  return(x*y*h);
}

int main () {
    float x, y, h;

    printf("Podaj dlugosc podstawy prostopadloscianu: ");
    scanf("%f",&x);

    printf("Podaj szerokosc podstawy prostopadloscianu: ");
    scanf("%f",&y);

    printf("Podaj wysokosc podstawy prostopadloscianu: ");
    scanf("%f",&h);

    printf("Objectnosc prostopadloscianu: %f\n", volume_cuboid(x, y, h));

    return(0);
    }
