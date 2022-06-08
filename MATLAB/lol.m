clear all
clc
x=input('x');
y=input('y');
n=length(x);
m=length(y);
if(n==m)
sum=0;
for i=1:n
    sum=sum+(x(i)-y(i)).^2;
end
disp(sqrt(sum));

else
    disp('error in size');
end
