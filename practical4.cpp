#include<iostream>
using namespace std;
class complex{
int real , img;
public:
void accept(int r , int i)
{
real=r ; img=i;
}
void display()
{
cout<<"\nThe complex number is:";
cout<<real<<"+i"<<img;
}
};
int main(){
complex c1,c2;
c1.accept(3,5);
c2.accept(9,20);
c1.display();
c2.display();
return 0;
}
