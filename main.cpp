#include <iostream>
using namespace std;


    float a=0, b=0, c=0;
    cout<<"Inserire il valore di a=";
    cin>>a;

    cout<<"Inserire il valore di b=";
    cin>>b;

    cout<<"Inserire il valore di c=";
    cin>>c;

    float area_triangolo;
    area_triangolo=(a*b)/2;
    float area_quadrato;
    area_quadrato=a*a;
    float area_rettangolo;
    area_rettangolo=a*b;
    float area_trapezio;
    area_trapezio=((a+b)*c)/2;

    cout<<"area triangolo="<<area_triangolo<<endl;
    cout<<"area quadrato="<<area_quadrato<<endl;
    cout<<"area rettangolo="<<area_rettangolo<<endl;
    cout<<"area trapezio="<<area_trapezio<<endl;
    return 0;
}
