clear all
clc
%write a program to find the minium number of square matrix
a=input('a');
[n m]=size(a);
if(n==m)
  
   mn=min(min(a)); % min(a(:))
   
    disp(mn);
else
    disp('not square');
end