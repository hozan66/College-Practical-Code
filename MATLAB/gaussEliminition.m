clear all
clc
a=input('a=');
b=input('b=');
[n m]=size(a);
[n1 m1]=size(b);

if(n==m)
for i=1:n-1
    if(a(i,i)==0)
        c=a(i,:);
        a(i,:)=a(i+1,:);
        a(i+1,:)=c;
        
        c=b(i,:);
        b(i,:)=b(i+1,:);
        b(i+1,:)=c;
    end
  m=-a(i+1:n,i)/a(i,i);
  a(i+1:n,:)=a(i+1:n,:)+m*a(i,:);
  b(i+1:n,:)=b(i+1:n,:)+m*b(i,:);
end

x(n,:)=b(n,:)/a(n,n);
for i=n-1:-1:1
   x(i,:)=(b(i,:)-a(i,i+1:n)*x(i+1:n,:))/a(i,i);
 end
disp(x);
else
    disp('THe Matrix is not square');
end