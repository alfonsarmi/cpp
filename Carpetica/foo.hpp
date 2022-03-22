#pragma once
#include <iostream> //std::ostream

class Foo {
public:
    //default constructor 
    Foo();

    //constructor 
    Foo(int n);

    //destructor
    ~Foo();

    //copy constructor
    Foo(const Foo& other);

    //move constructor
    Foo(Foo&& other);

    //copy assignement operator
    Foo& operator=(const Foo& other);

    //move assignement operator
    Foo& operator=(Foo&& other);

    //some other operator
    int operator()() const;

    //setter
    void set_n(int n);

    //getter
    int get_n() const;
    //'<<' overload for std::cout
    friend std::ostream& operator<<(std::ostream& os, const Foo& f);

    //static variable
    static int x;

    //static function
    static void print_x();
private:
    int n;
};