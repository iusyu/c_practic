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
    
    Complex& /*_3_*/operator+=(const Complex&); /* 就是 传递reference */
    
    double real() const /* _2_ */{ return re; }
    double imag() const { return im; }
    
    friend Complex& _doaplus(Complex* , const Complex&); 
    
    int func( const Complex &);
    
private:
    double re, im;
}

int Complex::func(const Complex &ob) {
    re += ob.re;
    im += ob.im;
}


int main() {
    
}


~~~

***总结*** :好的类的几点看点

1. 是否使用 列表初始化[^ cpp一个对象可以分为两个阶段，第一个是创建时的初始化，另外一个就是赋值（assignment）这两个不同。] __注释1__
2. __const function__ 告诉编译器，这个函数不会改变数据成员，如果后续用户需要使用_const class_ 也没有问题。[^如果未声明const function 然而用户却声明了const object，然后调用非const function，非const function说自己可能会改变数据成员。这两个就是自相矛盾，编译器不允许 。] __注释2__
3. __pass by value vs. pass by reference (to const) __ 尽量传递 ref const __注释3__
4.  __friend__可以自由提取我的__private__ [^相同class的各个object互为friend ]
5. 数据尽量private
6. 所有成员函数都隐含 ___this___指针 [^this指向调用者]
7.  ___cout<<object___ 操作符只会作用在左边的函数上。

___CONCLUDE___ 

以上都是针对普通class的设计要点。比如初始化列表，const, reference, member function， friend, 成员函数this指针，还有什么pass by ref or pass by value



##### String class 设计

```c++
#include<iostream>


Complex* pc = new Complex(1,2);
void* mem = operator new (sizeof(Complex));
pc = static_cast<Complex*>(mem);
pc->Complex::Complex(1,2); /* 隐含 */
Complex::Complex(pc,1,2); /* 谁调用，谁就是this所指 */

```

___BIG THREE___ 函数

_拷贝构造函数  拷贝赋值操作  析构函数_ 

1. __class with pointer members__ 必须有 copy ctor 和 copy op=
2.  ___operator=___ 左右赋值就很迷惑。-> _成员操作符重载带有this pointer
3. 

