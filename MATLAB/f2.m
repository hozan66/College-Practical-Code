clear all
clc
a=input('a=');
b=input('b=');
if (f(a)*f(b)>0)
    disp('there is no root');
    break;
else
   disp('there is root'); 
   
    disp('       i         a         b        c');
    disp('       -         -         -        -');
for i=1:100
   if (abs(b-a)<=0.001)
       break;
   end
   c=(a+b)/2;
    disp([i  a  b  c]);
   if (f(c)==0)
       disp('C is root');
       disp(c);
       break;
   elseif (f(a)*f(c)<0)
       b=c;
   else
       a=c;    
   end
   
end

end