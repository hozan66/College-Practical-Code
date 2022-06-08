clear all
clc
p=inline('1.538*x-0.36');

x=[1 2 3 4 5 6 7 8 9 10];
 y=[1.3 3.5 4.2 5.0 7.0 8.8 10.1 12.5 13.0 15.6];
 sy=sum(y);
 sp=sum(p(x));
 
 e=sum((y-p(x)).^2);
disp(e);