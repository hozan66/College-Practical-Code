clear all
clc
%checking if it's lagrange or  finite difference
x=input('x=');
n=length(x);
k=x(2)-x(1);
d=0;
for i=1:n-1
    q=x(i+1)-x(i);
    if(q==k)
        d=d+1;
    end
end

if(d==n-1)
    disp('Use finite difference');
else
    disp('Use Lagrange');
end