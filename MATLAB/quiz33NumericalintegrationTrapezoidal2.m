clear all
clc
%numerical integration (Trapezoidal)
%2: if we don't have the table
f=inline('exp(x)');

a=input('a=');
b=input('b=');
n=input('n=');
h=(b-a)/n;

fa=f(a);
fb=f(b);
trap=0;
for i=1:n-1
    trap=trap+2*f( a+(h*i) );
end
result=(h/2)*(fa+fb+trap);
disp(result);