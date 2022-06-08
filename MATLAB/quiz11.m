%write program that evaluate the sum of diagonal element of matrix and
%multiply the result by 3 when the input matrix is square
%and its size is greater than 3.

clear all
clc
a=input('a=');
[n m]=size(a);
sum=0;
if(n==m)
if(n>3)
    for i=1:n
        sum=sum+a(i,i);
    end
    disp(3*sum);
else
    disp('the size of matrix is not greater than 3');
end
else
    disp('not square');
end