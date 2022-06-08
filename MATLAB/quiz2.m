clear all
clc
%write a program to find the maximium number of square matrix
a=input('a=');
[n m]=size(a);
if(n==m)
    c=max(max(a));     %max(a(:))
    disp(c);
else
    disp('not square');
end