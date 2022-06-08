clear all
clc
%Numerical differentiation
%forward difference for the second derivative

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
for i=3:n
    if (i==5)
        a(row,i)=(11/12)*a(row,i); 
    elseif (i==6)
        a(row,i)=(5/6)*a(row,i);
    elseif (i==7)
        a(row,i)=(137/180)*a(row,i);
    end
    sum=sum+k*a(row,i);
    k=-k;
end
disp(sum/h^2);