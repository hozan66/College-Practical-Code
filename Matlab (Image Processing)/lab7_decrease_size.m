% clear all
clear
clc

% x=[1 2 3 4; 5 6 7 8;11 12 13 14; 15 16 17 18];
x=[1 2 3;4 5 6; 7 8 9];

[row, col]=size(x);
arr=zeros(fix(row/2),fix(col/2));
n=1;m=1;

for i=1:2:row
    for j=1:2:col
        arr(n,m)=x(i,j);
        m=m+1;
    end
    n=n+1;
    m=1;
end

disp(x);
disp(arr);