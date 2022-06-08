%sort a matrix
clear all
clc
a=input('a');
[n m]=size(a);
for i=1:n*n-1
    for j=1+i:n*n
        if(a(i)>a(j))
            c=a(i);
            a(i)=a(j);
            a(j)=c;
        end
    end
end

disp(a(:));