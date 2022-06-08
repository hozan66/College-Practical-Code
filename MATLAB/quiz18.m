clear all
clc
%k>=a(i,j) ,a(i,j)=1
%k<a(i,j) ,a(i,j)=0

a=input('a=');       %program convert matrix to binary
[n m]=size(a);
b=zeros(n,m);
d=0;
k=max(a(:))/2;
for i=1:n
    for j=1:m
        if(a(i,j)==0||a(i,j)==1)
            d=d+1;
        end
    end
end
if(d==n*m)
    disp('Binary Matrix');
else
   for i=1:n
    for j=1:m
        if(a(i,j)>=k)
            a(i,j)=1;
        else
          a(i,j)=0;  
        end
    end
   end 
disp(a);
end
