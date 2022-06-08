clear all
clc
%Write a program for evaluate the variance.

x=input('x=');
n=length(x);
xx=sum(x)/n;

var=0;
for i=1:n
    var=var+(x(i)-xx).^2;
end
var=var/(n-1);
disp('variance=');
disp(var);