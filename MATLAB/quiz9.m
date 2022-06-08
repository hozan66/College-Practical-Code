%sort the last column of matrix
clear all
clc
a=input('a');
[n m]=size(a);
for i=1:n-1
    for j=1+i:m
        if(a(i,m)>a(j,m))
            c=a(i,m);
            a(i,m)=a(j,m);
            a(j,m)=c;
        end
    end
end

disp(a(:,m));