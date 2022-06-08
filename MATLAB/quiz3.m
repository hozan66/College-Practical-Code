clear all
clc
%write a program to find the maximium number of square matrix
a=input('a');
[n m]=size(a);
if(n==m)
    mx=a(1,1);
    for i=1:n
        for j=1:n
            if(a(i,j)>mx)
                mx=a(i,j);
            end
        end
    end
    disp(mx);
else
    disp('not square');
end