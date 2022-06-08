clear all
clc            %Backward difference
x=input('x=');
y=input('y=');
x_i=input('x_i=');
h=x(2)-x(1);    %difference
p=(x_i-x(length(x)))/h;

a=zeros(length(x));
    a(:,1)=y;
    
for j=1:(length(x)-1)
    for i=length(x):-1:j+1
        a(i,j+1)=a(i,j)-a(i-1,j);
    end
end
a
% p, p(p+1), p(p+1)(p+2)....
for n=1:length(a)-2
    s=p(n)*(p(1)+n);
    p(n+1)=s;
end
d=ones(1,length(p)+1);
for n=1:length(p)
    d(n+1)=p(n)/factorial(n);
end
row=length(a);
A=0;
for i=1:length(a)
    A=A+a(row,i)*d(i);
end
disp('The Answer is:');
disp(A);