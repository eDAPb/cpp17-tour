#include "complex.hpp"

// 4.2.1 An Arithmetic Type
void test(DDB::Complex z)
{
    DDB::Complex a {2.3};
    DDB::Complex b {1 / a};
    DDB::Complex c {a + z * DDB::Complex{1, 2.3}};

    if (c != b)
        c = -(b / a) + 2 * b;
}
// 4.2.1 An Arithmetic Type

int main()
{
    // When we refer to the representation, we're talking about the data
    // members of a class.

    // 4.2 Concrete Types
    // Concrete types behave just like built-in types but have their own
    // semantics and sets of operations.
    // For example, vectors and strings are much like built-in arrays, except
    // they are better behaved.
    // The defining characteristic of a concrete type is that its
    // representation is part of its definition. In other words, the way the
    // object is represented in memory is fixed.
    // Therefore, if the representation changes, a user must recompile.
    // To increase flexibility, a concrete type can keep major parts of its
    // representation on free store (dynamic memory, heap) and access them
    // through the part stored in the class object itself.
    // Unlike abstract types concrete types can be instantiated.
    // 4.2 Concrete Types

    // 4.2.1 An Arithmetic Type
    // An arithmetic-type defines a conventional set of operators and remains
    // efficient for inline use for those particular operator overloaded
    // functions.
    //
    // Simple operations in the complex class remain efficient so they can be
    // inline. That means the generated machine code will be implemented
    // without function calls.
    const DDB::Complex cz {1, 2};
    DDB::Complex complex {};
    double x = cz.real();
    test(cz);
    // Functions defined in a class are inline by default. It is possible to
    // explicitly request an inline by preceding a function declaration
    // with the `inline` keyword. Here DDB::Complex is carefully implemented
    // to do appropriate inlining.
    // 
    // A constructor invoked without an argument is called a *default
    // constructor*. It eliminates the possibility of uninitialized variables
    // of the user-defined type.
    //
    // Syntax for overloaded operators is fixed by the language, so you can't
    // define a unary / operator. Also, you can redefine the meaning of
    // existing operators for built-in types.
    // 4.2.1 An Arithmetic Type

    // 4.2.3 Initializing Containers
    // Containers exist to hold elements, so there needs to be convenient ways
    // of getting elements into a container.
    // 4.2.3 Initializing Containers
}