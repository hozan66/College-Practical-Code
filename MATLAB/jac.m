clear all
clc
%(x^0=0,y^0=0,z^0=0)
a = input('Enter square matrix=');
[n m] = size(a);
if(n==m)
    if( all( diag(a) )~= 0 )
b = input('b=');

x0 = zeros(n, 1);

x1 = zeros(n, 1);
for j = 1 : 20   %iteration
    for i = 1 : n

        x1(i) = ( b(i) - a(i,1:i-1) * x0(1:i-1)- a(i, i+1:n) * x0(i+1:n)) / (a(i, i));

    end
    disp(x1);
    x0=x1;
end
    else 
        disp('error: diag is 0');
    end
else
    disp('not square');
end
   

