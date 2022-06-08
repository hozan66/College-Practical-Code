clear all
clc
a=input('a');
b=input('b');
[n m]=size(a);
if (n==m)
k=det(a);
n=length(a);
x=zeros(n);

if (k==0)
    disp('error');
        break;
else
for i=1:n
    c=a;
    c(:,i)=b;
    x(i)=det(c)/k;
end

disp(x(:,1));
end
else
    disp('the matrix is not square');
end
