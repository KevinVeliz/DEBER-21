#include <iostream>
#include <fstream>
using namespace std;

int menu(int );
//funciones del ejercicio2
int tamanioArray(int x);
void llenarOrdenarArray(float x[], int y);
void ejer2();
//funciones ejercicio 1
int ingresar_elementos(int arreglo[]);
int cambiar_posiciones(int arreglo[]);
int imprimir_nuevo_vector(int arreglo[]);
//funciones ejercicio 3
void Dinero();
//ARCHIVOS
void escribir1();
void escribir2();
void escribir3();


int main() 
{
   int n1,n2,op,x;
do{
    switch (menu(op))
  {
    case 1:
      int arr[6];
    ingresar_elementos(arr);
    cambiar_posiciones(arr);
    imprimir_nuevo_vector(arr);
    system("read -p 'Presiona Enter para continuar...' var"); 
    break;
    case 2: 
    ejer2();
    system("read -p 'Presiona Enter para continuar...' var");
    break;
    case 3:
    Dinero();
    system("read -p 'Presiona Enter para continuar...' var");
    break;
    case 4:
    cout<<"------GRACIAS-----\n";
    x=4;
    system("read -p 'Presiona Enter para continuar...' var"); 
    break;
  }
  system("clear");
}while(x!=4);
}



//FUNCIÓN MENU
int menu(int op)
{
  op= -1;
  while((op< 0) || (op>4)) 
  {
    cout<< "      TRABAJO EN GRUPO    "<<endl;
    cout<<endl;
    cout<< "   ALGORTIMOS Y ESTRUCTURA DE DATOS    "<<endl;
    cout<<endl;
    cout<<"  SELECIONE UNA OPCIÓN DEL MENU     "<<endl;
    cout << "  1- INTERCAMBIAR POSICIONES DE UN VECTOR " << endl;
    cout << "  2- ORDENAMIENTO DE UN VECTOR " << endl;
    cout << "  3- CUENTA DE AHORRO VIRTUAL DEL BANCO PICHINCHA" << endl;
    cout << "  4- SALIR" << endl;
    cout<<  "  OPCION: ";
  cin>>op;
    if((op< 0) || (op> 4)) 
    {
      cout << "Opción no válida" << endl;
    }
  }
  return op;
}


//funciones ejercicio 1
int ingresar_elementos(int arreglo[])
{

    int i;
    cout << "Ingrese los elementos del vector" << endl;
    for (i = 0 ; i < 6 ; i++)
    {
        cin >> arreglo[i];

    }
  return arreglo[i];

}

int cambiar_posiciones(int arreglo[]){

    int i , j, aux ;

    for ( i = 0; i < 3 ; i++ )
    {

        j = 5 - i;
        aux = arreglo[i];
        arreglo[i] = arreglo[j];
        arreglo[j] = aux;

    }
    return aux;
}

int imprimir_nuevo_vector(int arreglo[])
{
    int i;
    char r;
    ofstream archivo1;
  string nombreArchivo;
    cout<<"INGRESA EL NOMBRE DEL ARCHIVO: ";
    cin.ignore();
    getline(cin,nombreArchivo);
    archivo1.open(nombreArchivo.c_str(),ios::app);

      do
{     
    cout << "El nuevo vector es: " << endl;

    for ( i = 0 ; i < 6 ; i++)
    {
      
       cout << arreglo[i] << endl;
       archivo1<<arreglo[i]<<endl;
      
    }

    }while(r=='s');
  archivo1.close();
  return arreglo[i];
}

//FUNCION EJERCICIO 2
void ejer2()
{
    int num;
    num=tamanioArray(num);
    float numeros[num];
    llenarOrdenarArray(numeros, num);
    cout << endl;

}

int tamanioArray(int x)
{
  
    do{
        cout << "Digite el tamaño para el vector: ";
        cin >> x;
        if(x < 0){
            cout << "Valor inválido" << endl;
        }
    
    }while(x < 0);
    return x;
}

void llenarOrdenarArray(float x[], int y)
{
  char r;
  int min, aux,num;
  ofstream archivo2;
  string nombreArchivo;
    cout<<"INGRESA EL NOMBRE DEL ARCHIVO: ";
    cin.ignore();
    getline(cin,nombreArchivo);
    archivo2.open(nombreArchivo.c_str(),ios::app);

      do
{     
    for(int i = 0; i <y; i++)
    {
        cout << "Número " << "[" << i+1 << "]: ";
        cin >> x[i];
    }
    
    for(int i = 0; i <= y ; i++)
    {
        min = i;
        for(int j = i+1; j < y; j++)
        {
            if(x[j] < x[min])
            {
                min = j;
            }
        }
        aux = x[i];
        x[i] = x[min];
        x[min] = aux;
    }
    cout << "El array ordenado es: " << endl;
    archivo2<<"El array ordenado es: "<<endl;
    for(int i = 0; i <y; i++ )
    {
        cout << x[i] << "\t";
        archivo2<<x[i]<< "\t";
    }


cout<<"\nDESEA AGREGAR OTRO DATO s/n: ";
  cin>>r;
  cin.ignore();
}while(r=='s');
  archivo2.close();
}


//FUNCION EJERCICIO 3
void Dinero()
{
  int opciones=0 ;
  float x [12];
  float num, band ; 
  int i;
  char r;
  float e;
   ofstream archivo3;
  string nombreArchivo;
    cout<<"INGRESA EL NOMBRE DEL ARCHIVO: ";
    cin.ignore();
    getline(cin,nombreArchivo);
    archivo3.open(nombreArchivo.c_str(),ios::app);
      do
{     
  do { 
  cout <<"\n\t\t\t\t\tBANCO PICHINCHA";
  cout << "\n\t\tCUENTA DE AHORROS\n";
  cout << "\n1.-DEPOSITAR DINERO \n";
  cout << "2.-CONSULTAR\n";
  cout << "3.- Salir\n";
  cin >> opciones;
  switch (opciones)
  {
    case 1 :
    for ( i = 0 ; i <12;i++)
    {
      cout << "INGRESAR CANTIDAD DE DINERO DEL MES: "<<i+1<<endl;
      cin >> x [i];
      e=e+x[i];
    }
    break;


    case 2 :
    cout<<"INGRESE LA CANTIDAD A BUSCAR : ";
    cin>>num;
    archivo3<<"Cantidad a buscar: "<<num<<endl;
    band=0;
    for(i=0;i<12;i++)
    if(x[i]==num)
    {
      cout<<"LA CANTIDAD FUE DEPOSITADA EN EL MES:"<<i+1<<endl;
      archivo3<<"LA CANTIDAD FUE DEPOSITADA EN EL MES:"<<i+1<<endl;
      band=1;
    }
    if(band==0)
    {  
    cout<<"Elemento no encontrado";
    }
    break ;
  }
}while (opciones !=3);

 cout<<"DESEA AGREGAR OTRO DATO s/n: ";
  cin>>r;
  cin.ignore();
  }while(r=='s');
  archivo3.close();
}
