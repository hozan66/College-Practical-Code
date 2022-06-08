clear all
clc
a=input('a');
[n m]=size(a);
if (n==m)
k=input('k');
switch(k)
    case 1
        disp(diag(a));
         case 2
        disp(det(a));
         case 3
        disp(rot90(a));
    otherwise
        disp('other value');
    
end
else
    disp('size is not square');
end