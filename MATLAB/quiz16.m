%find the transpose of matrix

clear all
clc
a=input('a=');
[n m]=size(a);
b=zeros(n,m);
for i=1:n
    for j=1:m
        b(i,j)=a(j,i);
    end
end
disp(b);