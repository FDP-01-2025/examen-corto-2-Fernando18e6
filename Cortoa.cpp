#include <iostream>
#include <cmath>

using namespace std;

int main()
{ // Se declaran las variables
    int zapatos, genero, dinero = 0, edad = 0, compra, zapCM = 0, zapEM = 0, zapPM = 0, zapDH = 64, zapFH = 96, zapPH = 200;

    zapCM = 0.2 * 80;
    cout << zapCM;

    // Se pide una cantidad de dinero.
    cout << "Ingrese su cantidad de dinero";
    cin >> dinero;

    // Se pide al usuario que nos de su edad
    cout << "Ingrese su edad ";
    cin >> edad;
    // Se verifica la edad y se asigan una talla
    if (edad > 0 && edad < 12)
    {
        cout << "Su talla es 34 ";
    }
    else if (edad > 13 && edad < 17)
    {
        cout << "Su talla es 38 ";
    }
    else if (edad > 18 && edad < 68)
    {

        cout << "Su talla es 40 ";
    }
    else if (edad >= 68)
    {
        cout << "Su talla es de 42 ";
    }
    else{
        //Se pide el genero
        cout << "Ahora ayudenos ingresando su genero\n ";
    cout << "1. Mujer\n ";
    cout << "2. Hombre\n";
    cout << "3. Otros\n ";
    cin >> genero;
    }
    //Se analiza cada caso siendo mujer 
    switch (genero)
    {
    case 1:
        cout << "Gracias el sistema te reconoce como mujer, tenemos ofertas solo para ti\n";
        zapCM = 80 / 200;
        cout << "1. Zapato casual en \n"
             << zapCM;
        cout << "2. Zapato elegante \n"
             << zapEM;
        cout << "3. Zapato premium \n"
             << zapPM;
        cout << "Porvaor ingrese cual zapato desea ";
        cin >> zapatos;
        //Se evaluan los zapatos
        switch (zapatos)
        {
            case 1:
            if (dinero < zapCM)
            {
                cout << "Su monto es insuficiente";
            }

            zapCM = 70 * 0.15;
            dinero = zapCM - dinero;
            cout << "Su compra se realizo con exito, su saldo es de " << dinero;
            break;

            case 2:
            if (dinero < zapEM)
            {
                cout << "Su monto es insuficiente ";
            }
            else
                dinero = 100 * 0.15;
            dinero = zapEM - dinero;
            cout << "Su compra se realizo con exito, su saldo es de " << dinero;
            break;

            case 3:
            if (dinero < zapPM)
            {
                cout << "Su monto es insuficiente ";
            }
            else{
                zapPM=200 * 0.15;
                dinero = zapPM - dinero;
            cout << "Su compra se realizo con exito, su saldo es de " << dinero;
            }
            break;

            default:
            cout << "Ingrese un formato valido ";
        }

    case 2:
            cout << "Gracias el sistema te reconoce como mujer, tenemos ofertas solo para ti\n";
            cout << "1. deportivo en \n"
             << zapDH;
            cout << "2. Zapato Formal \n"
             << zapFH;
            cout << "3. Zapato premium \n"
             << zapPH;
            cout << "Porvaor ingrese cual zapato desea ";
            cin >> zapatos;
            //Se evalua cada caso siendo hombre
            switch (zapatos)
            {
            case 1:
            if (dinero < zapDH)
            {
                cout << "Su monto es insuficiente";
            }
            else
            {
                dinero = zapFH - dinero;
                cout << "Su compra se realizo con exito, su saldo es de " << dinero;
            }
            break;

            case 2:
            if (dinero < zapEM)
            {
                cout << "Su monto es insuficiente ";
            }
            else
            {

                dinero = zapEM - dinero;
                cout << "Su compra se realizo con exito, su saldo es de " << dinero;
            }
            break;

            case 3:
            if (dinero < zapPH)
            {
                cout << "Su monto es insuficiente ";
            }
            else
                dinero = zapPH - dinero;
            cout << "Su compra se realizo con exito, su saldo es de " << dinero;
            break;

            default:
            cout << "Ingrese un formato valido ";
        }
    }
}