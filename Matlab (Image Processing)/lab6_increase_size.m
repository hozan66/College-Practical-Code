% clear all
clear
clc

% x=[11 22;33 44];
x=[1 2 3;4 5 6; 7 8 9];

[row, col]=size(x);
arr=zeros(row*2,col*2);

for i=1:row*2
    for j=1:col*2
        n=i-fix(i/2);
        m=j-fix(j/2);
        arr(i,j)=x(n,m);
    end
end
disp(x);
disp(arr);