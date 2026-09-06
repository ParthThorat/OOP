#include <iostream> 
using namespace std; 
int factorial(int n) 
{ 
int fact = 1; 
for (int i = 1; i <= n; i++) 
{ 
fact = fact * i; 
} 
return fact; 
} 
int binomial(int n, int r) 
{ int ans; 
int num = factorial(n); 
int deno = factorial(r)*factorial(n-r); 
ans = num/deno; 
return ans; 
} 
void pascalTriangle(int rows) 
{ 
for (int i = 0; i < rows; i++) 
{ 
for (int j = 0; j < rows - i - 1; j++) 
{ 
cout << " "; 
} 
for (int j = 0; j <= i; j++) 
{ 
cout << binomial(i, j) << " "; 
} 
cout << endl; 
} 
} 
int main() 
{ 
int rows;
cout << "Enter number of rows: "; 
cin >> rows; 
pascalTriangle(rows); 
return 0;}
