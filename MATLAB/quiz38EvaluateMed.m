clear all
clc
%Write a program for evaluate the median.

x=input('x=');
x=sort(x);
n=length(x);

if(rem(n,2)~=0)
    disp('length is odd');
    med=x((n+1)/2);
else
    disp('length is even');
    med=x(n/2) + x((n/2)+1);
    med=med/2;
end

disp('median=');
disp(med);