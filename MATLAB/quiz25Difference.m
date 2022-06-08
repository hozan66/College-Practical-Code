clear all
clc
%checking if it's lagrange or  finite difference
x=input('x=');
n=length(x);
k=x(2)-x(1);
flag=1;
for i=2:n-1
    q=x(i+1)-x(i);
    if(q~=k)
        flag=0;
        break;
    end
end

if(flag==1)
    disp('Use finite difference');
else
    disp('Use Lagrange');
end