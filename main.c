/* This program will help the user obtain the trigonometric functions
 *  with an angle in degrees given by the user.
 *  This program must also convert the angle from degree to radians, so that it can resolve the functions.
 *
 *  Autor: Alejandro Ramírez Michel
 *  Fecha: 5 - Oct - 2018
 *  E-mail: alex.ramirez.99@hotmail.com

 * */
#include <stdio.h>
#include <math.h>

    // aqui establezco las operaciones de las funciones trigonometricas
    void sen (double degreesen){
        double s = 0;
        s = sin(degreesen);
        printf("Sin: %lf\n", s);
    }

    void cosi (double degreecos){
        double c = 0;
        c = cos(degreecos);
        printf("Cosine: %lf\n", c);
    }

    void tang (double degreetan) {
        double t = 0;
        t = tan(degreetan);
        printf("Tangent: %lf\n", t);
    }

    void sec (double degreesec) {
        double sc = 0;
        sc = (1/cos(degreesec));
        printf ("Secant: %lf\n", sc);
    }

    void csc (double degreecsc) {
        double csc = 0;
        csc = (1/sin(degreecsc));
        printf ("Cosecant: %lf\n", csc);
    }

    void cot (double degreecot) {
        double cot = 0;
        cot = (1/tan(degreecot));
        printf ("Cotangent: %lf\n", cot);
    }

int main() {
    double degree;
    double radian;
    printf("Hello user!\n");
    printf("I will help you obtain trigonometric functions with an angle you desire.\n");
    printf("Please, give me an angle in degrees: ");
    scanf("%lf", &degree);

    //aqui convierto de angulos a radianes multiplicando éstos por π/180
    radian = degree*(0.01745329251);

    //mando el angulo a las distintas funciones
    sen(radian);
    cosi(radian);
    tang(radian);
    sec(radian);
    csc(radian);
    cot(radian);


    return 0;
}