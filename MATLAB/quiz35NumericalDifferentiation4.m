clear all
clc
%Numerical differentiation
%backward difference for the second derivative

x=input('x=');
y=input('y=');
n=length(x);
h=x(2)-x(1);

a=zeros(n);
a(:,1)=y;
for j=1:n-1
    for i=n:-1:j+1
        a(i,j+1)=a(i,j)-a(i-1,j);
    end
end
disp(a);

sum=0;
row=n;
for i=3:n
    if (i==5)
        a(row,i)=(11/12)*a(row,i); 
    elseif (i==6)
        a(row,i)=(5/6)*a(row,i);
    elseif (i==7)
        a(row,i)=(137/180)*a(row,i);
    end
    sum=sum+a(row,i);
end
disp(sum/h^2);