#### 面向对象设计

##### class的两种经典分类

1. class without pointer
2. class with pointer

##### complex class 设计

~~~c++
#include<iostream>

class Complex {
public:
    Complex(double r, double i):re(r),im(i) /* _1_ */{}
    double real() const /* _2_ */{ return re; }
    double imag() const { return im; }
    
private:
    double re, im;
}



~~~

***总结*** :好的类的几点看点

1. 是否使用 列表初始化[^ cpp一个对象可以分为两个阶段，第一个是创建时的初始化，另外一个就是赋值（assignment）这两个不同。] __注释1__
2. __const function__ 告诉编译器，这个函数不会改变数据成员，如果后续用户需要使用_const class_ 也没有问题。[^如果未声明const function 然而用户却声明了const object，然后调用非const function，非const function说自己可能会改变数据成员。这两个就是自相矛盾，编译器不允许 。] __注释2__
3. __pass by value vs. pass by reference (to const) __ 尽量传递 ref