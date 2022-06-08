%check if the square matrix is identity matrix or not??
clear all
clc
a=input('a=');
[n m]=size(a);
if(n==m)
d=0;
p=0;
for i=1:n
    for j=1:m
        if(i==j&&a(i,j)==1)
            d=d+1;
        elseif(i~=j&&a(i,j)==0)
             p=p+1;
        end
    end
end
if(d==n&&p==n*n-n)
    disp('the matrix is identity');
else
    disp('the matrix is not identity');
end

else
    disp('the matrix is not square');
end