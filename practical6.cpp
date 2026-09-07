#include<iostream>
using namespace std;
class complex {
float real, img; //member
public:
//member function
void accept(float r, float i) {
real = r;
img = i;
}
void display() {
if (img >= 0) {
cout << real << " + " << img << "i";
} else {
cout << real << " - " << -img << "i";
}
}
void add(complex c1, complex c2) {
real = c1.real + c2.real;
img = c1.img + c2.img;
}

complex operator+( complex c2){
complex sum ;
sum.real = real +c2.real;
sum.img = img +c2.img;
cout<<"\n";
return sum;
}
complex operator-( complex c2 ){
complex sub;
sub.real = real - c2.real;
sub.img = img - c2.img;
cout<<"\n";
return sub;}
complex operator*(complex c2){
complex mul;
mul.real = (real*c2.real) - (img * c2.img);
img = (real * c2.img) + (img * c2.real);
cout<<"\n";
return mul;
}
complex operator/( complex c2 ){
complex div;
float d = (real * c2.real) + (img * c2.img);
real = (real * c2.real + img * c2.img) / d;
img = (img * c2.real - real * c2.img) / d;
cout<<"\n";
return div;
}
};
int main() {
complex c1, c2, c3 , c4 ,c5 , c6;
c1.accept(10, -5);
c2.accept(20, 20);
cout << "c1 = ";
c1.display();
cout << "\nc2 = ";
c2.display();
c3 = c1+c2;

cout<<"The addition of two complex numbers is : ";
c3.display();
c4 = c1-c2;
cout<<"The subtraction of two complex number is : ";
c4.display();
c5 = c1*c2;
cout<<"the multiplication of two complexes is :";
c5.display();
c6 = c1/c2;
cout<<"The division of two complexes is :";
c6.display();
cout << endl;
return 0;
}
