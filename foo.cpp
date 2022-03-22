#include "foo.hpp"
#include <utility> //std::move

//-----------------------------------------------------------------
//default constructor 
Foo::Foo() {

}

//-----------------------------------------------------------------
//constructor 
Foo::Foo(int n) : n(n) {

}

//-----------------------------------------------------------------
//destructor
Foo::~Foo() {

}

//-----------------------------------------------------------------
//copy constructor
Foo::Foo(const Foo& other) {
    *this = other;
}

//-----------------------------------------------------------------
//move constructor
Foo::Foo(Foo&& other){
    *this = std::move(other);
}

//-----------------------------------------------------------------
//copy assignement operator
Foo& Foo::operator=(const Foo& other) {
    this->x = other.x;
    return *this;
}

//-----------------------------------------------------------------
//move assignement operator
Foo& Foo::operator=(Foo&& other) {
    this->x = std::move(other.x);
    return *this;
}

//-----------------------------------------------------------------
//some other operator
int Foo::operator()() const {
    return this->x;
}

//-----------------------------------------------------------------
//setter
void Foo::set_n(int n) {
    this->n = n;
}

//-----------------------------------------------------------------
//getter
int Foo::get_n() const {
    return this->n;
}

//-----------------------------------------------------------------    
//'<<' overload for std::cout
std::ostream& operator<<(std::ostream& os, const Foo& f) {
    return os << f.n;
}

//-----------------------------------------------------------------
//static variable
int Foo::x = 5;

//-----------------------------------------------------------------
//static function
void Foo::print_x() {
    std::cout << "Foo::x = " << Foo::x << '\n';
}