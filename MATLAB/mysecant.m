function mysecant(x0,x1)
f=inline('x.^2-2');
 disp('       i        x0        x1        x2');
for i=1:100
   x2=x1-(f(x1)*(x1-x0)/(f(x1)-f(x0)));
     
   if(abs(x0-x1)<=0.001)
       break;
   end
   disp([i x0 x1 x2]);
   x0=x1;
   x1=x2;
end

end