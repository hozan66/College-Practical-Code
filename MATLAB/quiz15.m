clear all
clc
x=input('vector of x=');
y=input('vector of y=');
t=input('t=');
n=length(x);
m=length(y);
if(m==n)
sum=0;
for i=1:n
w=1;
for j=1:n
if (i~=j)
    w=w*(t-x(j))/(x(i)-x(j));

end
end
sum=sum+w*y(i);

end
disp('the sum is=');
disp(sum);

else
  disp('the size of m & n are not equal');  
end