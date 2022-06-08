%multiply two matrix
clear all
clc
a=input('a (first matriz):');
b=input('b (second matriz):');
[n m]=size(a);
[n1 m1]=size(b);
if(m==n1)
    c=a*b;
    disp(c);
else
    disp('imposible');
end