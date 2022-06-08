%in Matlab
%ln(5)==>log(5)
%log(5)==>log10(5)
clear all
clc
y=inline('log(x)+1');

x=input('x=');
c=y(x);
disp(c);