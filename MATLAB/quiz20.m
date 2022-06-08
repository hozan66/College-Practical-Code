clear all
clc
%check if is the square matrix
%is symmetric or not
a=input('a=');
[n m]=size(a);
d=0;
if(n==m)
    for i=1:n
        for j=1:m
            if(a(i,j)==a(j,i))
                d=d+1;
            end
        end
    end
    if(d==n*m)
        disp('The Matrix is Symmetric');
    else
         disp('The Matrix is Not Symmetric');
    end
    
else
    disp('Not square');
end
    