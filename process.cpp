// C program to illustrate file inclusion
// <> used to import system header file
#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include "string"
#include <math.h>
#include <conio.h>
/*
holi
soy un comentario
*/
// " " used to import user-defined file
#include "process.h"
using namespace std;

//Inline if 
string result = (time < 18) ? "Good day." : "Good evening.";


//toda esta parte no la entiende el parser
//porque es C++/CX una extension
//https://docs.microsoft.com/es-es/cpp/cppcx/interfaces-c-cx?view=msvc-170
public enum class PlayState { Playing, Paused, Stopped, Forward, Reverse };
public ref struct MediaPlayerEventArgs sealed
{
property PlayState oldState;
property PlayState newState;
};
public delegate void OnStateChanged(Platform::Object^ sender, MediaPlayerEventArgs^ a);
public interface class IMediaPlayer // or public interface struct IMediaPlayer
{
event OnStateChanged^ StateChanged;
property Platform::String^ CurrentTitle;
property PlayState CurrentState;
void Play();
void Pause();
void Stop();
void Back(float speed);
void Forward(float speed);
};
public interface class IArtist
{
Platform::String^ Draw();
};
public interface class ICowboy
{
Platform::String^ Draw();
};
public ref class MyClass sealed : public IArtist, ICowboy
{
public:
MyClass() {}
virtual  Platform::String^ ArtistDraw() = IArtist::Draw{ return L"Artist"; }
virtual  Platform::String^ CowboyDraw() = ICowboy::Draw{ return L"Cowboy"; }
};
//-------------------------------------------------
//No hay mucha diferencia entre clase e interface en c++
//si que podemos poner como interfaces los struct
class Poligono
{
int num_lados;
public:
void setNumLados(int n) { num_lados = n; } /* Método concreto */
virtual double calcularArea() = 0; /* Método virtual puro o abstracto */
virtual double calcularPerimetro() = 0; /* Método virtual puro o abstracto */
};
class Triangulo : public Poligono
{
public:
double calcularArea()
{
/* Implementacion específica de la clase Triangulo */
}
double calcularPerimetro()
{
/* Implementacion específica de la clase Triangulo */
}
};
class Hexagono : public Poligono
{
public:
double calcularArea()
{
/* Implementacion específica de la clase Hexagono */
}
double calcularPerimetro()
{
/* Implementacion específica de la clase Hexagono */
}
};
/* Interfaz o clase abstracta pura */
class ElementoGraficoGenerico
{
public:
virtual void setColor(const double r, const double g, const double b) = 0;
virtual void setPos(double xpos, double ypos) = 0;
virtual void setLabel(const string lb) = 0;
virtual void onClickPressed() = 0;
};
class LineaTexto : public ElementoGraficoGenerico
{
/* Implementación específica de los métodos virtuales puros heredados */
};
class BotonOKCancel : public ElementoGraficoGenerico
{
/* Implementación específica de los métodos virtuales puros heredados */
};
class CheckBox : public ElementoGraficoGenerico
{
/* Implementación específica de los métodos virtuales puros heredados */
};
class Interfaz1
{
public:
virtual void metodoVirtualPuro() const = 0;
};
class Interfaz2
{
public:
virtual void metodoVirtualPuro() const = 0;
};
class Concreta : public Interfaz1, public Interfaz2
{
public:
void metodoVirtualPuro() const { cout << "Metodo Virtual Puro Redefinido" << endl; }
};
int maininterfaces()
{
Concreta miObj;
miObj.metodoVirtualPuro();
return 0;
}
int usingnew() {
// Allocate memory for the array
char* pCharArray = new char[CName::sizeOfBuffer];
strcpy_s(pCharArray, CName::sizeOfBuffer, "Array of characters");
// Deallocate memory for the array
delete[] pCharArray;
pCharArray = NULL;
// Allocate memory for the object
CName* pName = new CName;
pName->SetName("Firstname", "Lastname");
// Deallocate memory for the object
delete pName;
pName = NULL;
}
class ClassA
{
public:
int a;
};
class ClassB : virtual public ClassA
{
public:
int b;
};
class ClassC : virtual public ClassA
{
public:
int c;
};
class ClassD : public ClassB, public ClassC
{
public:
int d;
};
int hybridClassInheritanceExample()
{
ClassD obj;
obj.a = 10;       // Statement 3
obj.a = 100;      // Statement 4
obj.b = 20;
obj.c = 30;
obj.d = 40;
cout << "\n a : " << obj.a;
cout << "\n b : " << obj.b;
cout << "\n c : " << obj.c;
cout << "\n d : " << obj.d << '\n';
}
// base class
class Vehicle
{
public:
Vehicle()
{
cout << "This is a Vehicle\n";
}
};
// first sub_class derived from class vehicle
class fourWheeler : public Vehicle
{
public:
fourWheeler()
{
cout << "Objects with 4 wheels are vehicles\n";
}
};
// sub class derived from the derived base class fourWheeler
class Car : public fourWheeler {
public:
Car()
{
cout << "Car has 4 Wheels\n";
}
};
//base class
class Fare
{
public:
Fare()
{
cout << "Fare of Vehicle\n";
}
};
// second sub class
class Bus : public Vehicle, public Fare
{
};
// main function
int useClassCar()
{
// Creating object of sub class will
// invoke the constructor of base classes.
Car obj;
return 0;
}
// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.
class A
{
public:
int x;
protected:
int y;
private:
int z;
};
class B : public A
{
// x is public
// y is protected
// z is not accessible from B
};
class C : protected A
{
// x is protected
// y is protected
// z is not accessible from C
};
class D : private A    // 'private' is default for classes
{
// x is private
// y is private
// z is not accessible from D
};
class Parent
{
public:
int id_p;
};
// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
public:
int id_c;
};
// main function
int classes1()
{
Child obj1;
// An object of class child has all data members
// and member functions of class parent
obj1.id_c = 7;
obj1.id_p = 91;
cout << "Child id is: " << obj1.id_c << '\n';
cout << "Parent id is: " << obj1.id_p << '\n';
return 0;
}
int pointers1()
{
int firstvalue, secondvalue;
int* mypointer;
mypointer = &firstvalue;
*mypointer = 10;
mypointer = &secondvalue;
*mypointer = 20;
cout << "firstvalue is " << firstvalue << '\n';
cout << "secondvalue is " << secondvalue << '\n';
return 0;
}
int pointers2()
{
int firstvalue = 5, secondvalue = 15;
int* p1, * p2;
p1 = &firstvalue;  // p1 = address of firstvalue
p2 = &secondvalue; // p2 = address of secondvalue
*p1 = 10;          // value pointed to by p1 = 10
*p2 = *p1;         // value pointed to by p2 = value pointed to by p1
p1 = p2;           // p1 = p2 (value of pointer is copied)
*p1 = 20;          // value pointed to by p1 = 20
cout << "firstvalue is " << firstvalue << '\n';
cout << "secondvalue is " << secondvalue << '\n';
return 0;
}
int pointers3()
{
int numbers[5];
int* p;
p = numbers;  *p = 10;
p++;  *p = 20;
p = &numbers[2];  *p = 30;
p = numbers + 3;  *p = 40;
p = numbers;  *(p + 4) = 50;
for (int n = 0; n < 5; n++)
cout << numbers[n] << ", ";
return 0;
}
void increment_all(int* start, int* stop)
{
int* current = start;
while (current != stop) {
++(*current);  // increment value pointed
++current;     // increment pointer
}
}
void print_all(const int* start, const int* stop)
{
const int* current = start;
while (current != stop) {
cout << *current << '\n';
++current;     // increment pointer
}
}
int pointers4()
{
int numbers[] = { 10,20,30 };
increment_all(numbers, numbers + 3);
print_all(numbers, numbers + 3);
return 0;
}
void increase2(void* data, int psize)
{
if (psize == sizeof(char))
{
char* pchar; pchar = (char*)data; ++(*pchar);
}
else if (psize == sizeof(int))
{
int* pint; pint = (int*)data; ++(*pint);
}
}
int pointers5()
{
char a = 'x';
int b = 1602;
increase2(&a, sizeof(a));
increase2(&b, sizeof(b));
cout << a << ", " << b << '\n';
return 0;
}
int addition(int a, int b)
{
return (a + b);
}
int subtraction(int a, int b)
{
return (a - b);
}
int operation(int x, int y, int (*functocall)(int, int))
{
int g;
g = (*functocall)(x, y);
return (g);
}
int pointers6()
{
int m, n;
int (*minus)(int, int) = subtraction;
m = operation(7, 5, addition);
n = operation(20, m, minus);
cout << n;
return 0;
}
int main0()
{
int arr[] = { 10, 20, 30, 40 };
// Printing elements of an array using
// foreach loop
for (int x : arr)
cout << x << endl;
}
int exceptionsexample() {
int x = 50;
int y = 0;
double z = 0;
try {
z = division(x, y);
cout << z << endl;
}
catch (const char* msg) {
cerr << msg << endl;
}
return 0;
}
struct MyException : public exception {
const char* what() const throw () {
return "C++ Exception";
}
};
int exceptionsexample2() {
try {
throw MyException();
}
catch (MyException& e) {
std::cout << "MyException caught" << std::endl;
std::cout << e.what() << std::endl;
}
catch (std::exception& e) {
//Other errors
}
}
// main function
int main()
{
// add function defined in process.h
add(10, 20);
// mult function defined in process.h
multiply(10, 20);
// printf defined in stdio.h
printf("Process completed");
int a = 1;
if (a == 1)
{
printf("Holi");
if (a == 1)
{
printf("Holi2");
//This is a comment
int a = 2 + 2;
}
else if (c == 2)
{
printf("Adios");
}
}
return 0;
}
int main2(int a, String b)
{
char x = 'a'; // Declaramos y asignamos en la misma línea
int num; //Declaramos el entero en una línea
num = 5; //Le asignamos un valor en otra línea
int num2 = 8; //Asignacion y declaracion al tiempo
float numero; //Un numero decimal
numero = 3.5; //Le asignamos un valor al decimal
float res = numero + num2; //Sumamos dos variables y las asignamos a res
//3.5 + 8 = 11.5
res = res + num; //Al valor actual de res le sumamos el valor de num
//11.5 + 5 = 16.5
bool valor = false; //Variable booleana
valor = true; // Pueden ser true o false
res = res * 2; //Duplicamos el valor de res 16.5*2 = 33
cout << res << endl; //Mostramos el valor de res por pantalla
return 0;
}
int main3()
{
cout << "Ingrese la Opción a ejecutar: ";
int opcion = 0;
cin >> opcion;
switch (opcion)
{
case 1: cout << "Usted ha seleccionado la opción 1";
break;
case 2: cout << "Usted ha seleccionado la opción 2";
break;
case 3: cout << "Usted ha seleccionado la opción 3";
break;
default: cout << "Usted ha ingresado una opción incorrecta";
}
// system("PAUSE"); //Solo ponla si no te da error
return 0;
}
int main4()
{
for (int i = 50; i <= 100; i += 2)
{//Notemos que escribir i+=2 es similar a escribir i = i + 2
cout << i << endl;
}
system("PAUSE");
return 0;
}
int main5()
{
int numero;
cout << "Ingrese un numero ";
cin >> numero;
while (numero <= 100)
{
cout << "Ingrese un numero ";
cin >> numero;
}
system("PAUSE");
return 0;
}
int main6()
{
int numero;
do
{
cout << "Ingrese un numero ";
cin >> numero;
} while (numero <= 100);
system("PAUSE");
return 0;
}
int main8()
{
int matriz[10][10];
for (int i = 0; i < 10; i++)//Ciclo externo
{
//Notemos que en ciclo interno no usamos la variable 'i' sino 'j'
//Si usaramos i, el comportamiento sería inesperado
for (int j = 0; j < 10; j++)//Ciclo interno
{
//Llenamos la matríz con los números del 1 al 100
matriz[i][j] = (i + 1) * (j + 1);
//(i+1)*(j+1) va desde 1x1 hasta 10x10 (aunque en desorden)
}
}
system("pause");
return 0;
}
int main9()
{
int edades[] = { 1,2,9,8,16,32,9,50,36,20,1,87 };
int limite = (sizeof(edades) / sizeof(edades[0]));
for (int i = 0; i < limite; i++)
{
cout << edades[i] << endl;
}
}
int main10()
{
string libros[5][2];
cout << "Por favor ingrese la siguiente información de los Libros: \n";
string titulo, autor;
for (int i = 0; i < 5; i++)
{
cout << "\n******* Libro " << i + 1 << "********:\n";
cout << "Titulo: ";
getline(cin, titulo);
cout << "Autor: ";
getline(cin, autor);
libros[i][0] = titulo;
libros[i][1] = autor;
}
system("pause");
return 0;
}
int main11()
{
string* titulos = NULL; //Se inicializa el puntero (inicia en null)
string* autores = NULL; //Se inicializa el puntero (inicia en null)
int tamanio; //Se inicializa la variable
cout << "Cuantos libros desea ingresar?";
string entrada;
getline(cin, entrada); //Se asigna el valor ingresado
tamanio = stoi(entrada); //Se transforma la entrada en número
//Declaramos un arreglo del tamaño ingresado para los titulos
titulos = new string[tamanio];
//Declaramos un arreglo del tamaño ingresado para los autores
autores = new string[tamanio];
cout << "Por favor ingrese la siguiente información de los Libros: \n";
for (int i = 0; i < tamanio; i++)
{
cout << "\n******* Libro " << i + 1 << "********:\n";
cout << "Titulo: ";
//cin >> titulos[i]; //No funciona con espacios
getline(cin, titulos[i]);
cout << "Autor: ";
//cin >> autores[i]; //No funciona con espacios
getline(cin, autores[i]);
}
//Liberamos la memoria de ambos punteros
delete[] titulos;
delete[] autores;
titulos = NULL;
autores = NULL;
system("pause");
return 0;
}
int main12()
{
int cols = 2; //El número de columnas es fijo (sólo título y autor)
string** libros; //Si inicializa la matriz (punteros de punteros)
int tamanio; //Se inicializa la variable
cout << "Cuantos libros desea ingresar?";
string entrada;
getline(cin, entrada); //Se asigna el valor ingresado
tamanio = stoi(entrada); //Se transforma la entrada en número
libros = new string * [tamanio];//Se asigna el número de filas según el usuario
cout << "Por favor ingrese la siguiente información de los Libros: \n";
string titulo, autor;
for (int i = 0; i < tamanio; i++)
{
libros[i] = new string[cols]; //Cada fila contendrá dos columnas
//Notar que cols pudo haber sido ingresada por el usuario también
cout << "\n******* Libro " << i + 1 << "********:\n";
cout << "Titulo: ";
getline(cin, titulo);
cout << "Autor: ";
getline(cin, autor);
libros[i][0] = titulo;
libros[i][1] = autor;
}
//Para liberar la memoria debemos recorrer fila por fila primero.
for (int i = 0; i < tamanio; ++i)
{
delete[] libros[i]; //Cada fila de libros es otro array de punteros
//Por eso son punteros a punteros
}
//Luego de limpiar las columnas, quitamos la fila única que quedó
delete[] libros;
system("pause");
return 0;
}
int funcionEntera()//Función sin parámetros
{
int suma = 5 + 5;
return suma; //Acá termina la ejecución de la función
return 5 + 5;//Este return nunca se ejecutará
//Intenta intercambiar la línea 3 con la 5
int x = 10; //Esta línea nunca se ejecutará
}
char funcionChar(int n)//Función con un parámetro
{
if (n == 0)//Usamos el parámetro en la función
{
return 'a'; //Si n es cero retorna a
//Notar que de aquí para abajo no se ejecuta nada más
}
return 'x';//Este return sólo se ejecuta cuando n NO es cero
}
bool funcionBool(int n, string mensaje)//Función con dos parámetros
{
if (n == 0)//Usamos el parámetro en la función
{
cout << mensaje;//Mostramos el mensaje
return 1; //Si n es cero retorna 1
return true;//Equivalente
}
return 0;//Este return sólo se ejecuta cuando n NO es cero
return false;//Equivalente
}
void procedimiento(int n, string nombre)
{
if (n == 0)
{
cout << "hola" << nombre;
return;
}
cout << "adios" << nombre;
}
int main13()
{
funcionEntera(); //Llamando a una función sin argumentos
bool respuesta = funcionBool(1, "hola"); //Asignando el valor retornado a una variable
procedimiento(0, "Juan");//Invocando el procedimiento
//Usando una función como parámetro
procedimiento(funcionBool(1, "hola"), "Juan");
return 0;
}
int main14()
{
list<int> miLista; //Creamos
list<int>::iterator it;
for (int i = 10; i <= 50; i = i + 10)
{
miLista.push_back(i);
}
//Se agrega un 10 20 30 40 50 a la lista
it = miLista.begin(); //Se estabelce el iterador al comienzo de la lista
it++; //Movemos el iterador una posición (ahora estamos en 20)
//Se inserta un 11 en la posición del 10 11 20 30 40 50
miLista.insert(it, 11);
miLista.insert(it, 3, 18);
//En la actual posición del 20 insertamos un 18 tres veces
//10 11 18 18 18 20 30 40 50
//Creamos un vector que poseerá dos elementos con valor de 19
vector<int> myvector(2, 19);
//Insertamos ese vector en la lista, enviando los iteradores del propio vector
miLista.insert(it, myvector.begin(), myvector.end());
//10 11 18 18 18 19 19 20 30 40 50
cout << "Mi lista contiene lo siguiente:";
for (it = miLista.begin(); it != miLista.end(); it++)
{
cout << ' ' << *it; //Se muestra el valor al cual está aùntando el iterador
}
return 0;
}
