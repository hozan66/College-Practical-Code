function mylagrange(x,y,t)
n=length(x);         %you have to input
m=length(y);         %x=input('vector of x=');
if(m==n)             %y=input('vector of y=');
sum=0;               %t=input('t=');
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
  disp('m & n are not equal');  
end

end