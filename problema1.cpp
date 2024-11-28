#include <iostream>
#include <math.h>
#define Pi  3.14


using namespace std;


int main()
{
    // 1) DECLARACION
    //int F1,F2,AF1,AF2,r,angulofr,anguloRad,AngPapalelogramo,Fr;
    double F1, F2,AF1,AF2,angulofr,anguloRad,AngPapalelogramo,Fr,angulofx;
    // 2) ASIGNACIoN
    cout<<"Ingrese el valor de la Fuerza F1 : "; cin>>F1;
    cout<<"Ingrese el valor de la Fuerza F2: ";cin>>F2;
    cout<<"Ingrese el valor del angulo F1: ";cin>>AF1;
    cout<<"Ingrese el valor del angulo F2: ";cin>>AF2;
   
    // 3) PROCESO
        // funcion de angulo
        angulofr= AF2-AF2;
        anguloRad= (360-2*(angulofx))/2;


        //
    AngPapalelogramo= (anguloRad * 360)/ (2 *Pi);
    //RAD2 = (angulo * 360)/ (2 *pi);


    Fr= sqrt(pow(F1,2)+pow(F2,2)-2*(F1)*(F2)*cos(AngPapalelogramo));
   
    // 4) RESULTADO
    cout<<"LA FUERZA RESULTANTE ES F "<<Fr<<endl;
   
system ("pause");


}

