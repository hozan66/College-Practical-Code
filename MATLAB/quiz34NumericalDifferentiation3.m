clear all
clc
%Numerical differentiation
%backward difference for the first derivative

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
for i=2:n
    sum=sum+(1/(i-1))*a(row,i);
end
disp(sum/h);