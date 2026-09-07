#include <iostream>
using namespace std;

int add(int a,int b){
return (a+b);
}
float add(float p , float q ){
return (p+q);
}
float sub(float m , float n , float r){
return (m-n-r);
}
int main(){
int a,b;
float p,q,m,n,r;
cout<<"Enter the numbers :";
cin>>a>>b>>p>>q>>m>>n>>r;
cout<<"\nAdd of two numbers is :"<<endl<<add(a,b);
cout<<"\nAdd of two numbers is :"<<endl<<add(p,q);
cout<<"\nsubtraction of three numbers is :"<<endl<<sub(m,n,r);
return 0;
}
