function myfalseposition(a,b)
g=inline('x.^2-2');

if(g(a)*g(b)<0)
    disp('     i             a           b          c');
for i=1:100
     if(abs(b-a)<=0.001)
       break;
     end
   c=b-((g(b)*(b-a))/(g(b)-g(a))); 
   disp([i a b c]);
   
   if(c==0)
       disp('c is the root');
       disp(c);
       break;
   elseif(g(c)*g(a)<0)
       b=c;
   else
       a=c;
   end
   
end

else
    disp('error');
end

end