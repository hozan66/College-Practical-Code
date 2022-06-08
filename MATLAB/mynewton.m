function mynewton(x0)

y=inline('x.^2-2');
y1=inline('2*x');
disp('       i        x0        xnew');
for i=1:100
   xnew=x0-(y(x0)/y1(x0));
   
   if(abs(x0-xnew)<=0.001)
       break;
   end
    disp([i x0 xnew]);
   x0=xnew;
   
end


end