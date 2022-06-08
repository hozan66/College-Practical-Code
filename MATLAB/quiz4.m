clear all
clc
%write a program to find the minium number of square matrix
a=input('a');
[n m]=size(a);
if(n==m)
    mn=a(1,1);
    for i=1:n
        for j=1:n
            if(a(i,j)<mn)
                mn=a(i,j);
            end
        end
    end
    disp(mn);
else
    disp('not square');
end