clear all
clc
x=zeros(3);
for i=1:3
   for j=1:3
       if(i==j)
           x(i,j)=-1;
       elseif (i<j)
           x(i,j)=3;
       else
           x(i,j)=2;
       end
   end
end
disp(x);
