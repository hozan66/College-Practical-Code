clear all
clc
%Numerical differentiation
%forward difference for the first derivative

x=input('x=');
y=input('y=');
n=length(x);
h=x(2)-x(1);
a=zeros(n);
a(:,1)=y;
for j=1:n-1
    for i=1:n-j
        a(i,j+1)=a(i+1,j)-a(i,j);
    end
end
disp(a);
k=1;
sum=0;
row=1;
for i=2:n
    sum=sum+(k/(i-1))*a(row,i);
    k=-k;
end
disp(sum/h);