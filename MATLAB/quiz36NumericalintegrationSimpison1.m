clear all
clc
%numerical integration (Simpison)
%1: if we have the table

x=input('x=');
y=input('y=');
h=x(2)-x(1);

s=y(1)+y(end);
s1=4*sum( y(2:2:end-1) );
s2=2*sum( y(3:2:end-2) );

sum=(h/3)*(s+s1+s2);
disp(sum);