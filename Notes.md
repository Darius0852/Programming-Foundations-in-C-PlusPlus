# C++ and Programming Foundations

## Websites:

[Polymorphism In C++ and Types of Polymorphism](https://www.mygreatlearning.com/blog/polymorphism-in-cpp/)

## Tutorials:

[](https://d1m75rqqgidzqn.cloudfront.net/wp-data/2021/11/03114205/C-Tutorial.pdf)

## Books:

[](http://chenweixiang.github.io/docs/The_C++_Programming_Language_4th_Edition_Bjarne_Stroustrup.pdf)

## Project Repo:

[https://github.com/Darius0852/Progtramming-Foundations-in-C-PlusPlus](https://github.com/Darius0852/Progtramming-Foundations-in-C-PlusPlus)

# **Polymorphism**

## What is it?

Polymorphism is when a function behaves differently under different scenarios. e.g. when as function has a+b, when a and b are numbers it performs an ADD but when they are strings, a and b will be concatenated.

## Types of Polymorphism

- Compile time polymorphism
- Runtime polymorphism

### **Compile Time Polymorphism**

- **Function Overloading**

Early (Static) Binding - when a function is called directly during compile time. When the compiler encounters a function call in the program, it replaces it with machine language instructions to go to that function.

Function Overloading - one function can perform many different tasks with different types of arguments. ****************************************See Polymorphism.cpp for example.****************************************

[Progtramming-Foundations-in-C-PlusPlus/polymorphism.cpp at main · Darius0852/Progtramming-Foundations-in-C-PlusPlus](https://github.com/Darius0852/Progtramming-Foundations-in-C-PlusPlus/blob/main/polymorphism.cpp)

ADD() function is used to perform many tasks - polymorphism.

- **Operator Overloading**

Defining additional tasks to operators without changing actual meaning by using the operator function.

### Runt**ime Polymorphism**

- Functions are called at program execution, hence known as late binding or dynamic binding.
- Function overriding is part of runtime polymorphism, more than one function has the same name with different types of the parameter list.
- Achieved using virtual functions and pointers. Slower execution as not known until run time but more flexible.

- **Function Overriding**

New definition given to the base class function in the derived class. At that time we can say the base function has been overridden. It can be only possible in the derived class.

2 definitions of the same function, one in the superclass and one in the derived class. The decision about which function definition called happens at runtime i.e. “Runtime” Polymorphism.

- **Virtual Function**

A virtual function is defined by keyword ‘virtual’, return type may be int, float, void.

A virtual function is a member function in a base class. We can redefine it in a derived class. It is part of run time polymorphism. The declaration of the virtual function must be in a base class by using the keyword virtual. A virtual function is not static.

Virtual function helps tell compiler to perform dynamic/late binding.

# **Compilation in C++**
