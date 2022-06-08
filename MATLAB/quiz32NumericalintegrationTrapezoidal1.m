clear all
clc
%numerical integration (Trapezoidal)
%1: if we have the table

x=input('x=');
y=input('y=');
h=x(2)-x(1);

s1=y(1)+y(end);
s2=2*sum(y(2:end-1));

s3=(h/2)*(s1+s2);
disp(s3);