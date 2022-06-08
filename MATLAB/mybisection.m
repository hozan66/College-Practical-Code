function mybisection(a,b)
f1=inline('x.^2-5');

if(f1(a)*f1(b)<0)
    disp('       i        a        b        c');
for i=1:100
     if(abs(b-a)<=0.001)
       break;
     end 
   c=(a+b)/2; 
   disp([i a b c])
   
   if(c==0)
       disp('c is the root');
       disp(c);
       break;
   elseif(f1(c)*f1(a)<0)
       b=c;
   else
       a=c;
   end
   
end

else
    disp('error');
end

end