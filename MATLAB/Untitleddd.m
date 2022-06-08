clear all 
clc
disp('press 1 false position');
disp('press 2 for bisection ');
disp('press 3 to newton raphson');
disp('press 4 for computing A');
disp('press 5 to A^1/n');
disp('press 6 to 1/A');
disp('press 7 to secant');

c=input('input your choice');
switch c
    case 1  
        disp(' false position');
            f=inline('x-cos(x)');
             a=input('a');
             b=input('b');
             if f(a)*f(b)>0
                 disp('thereis no root');
                 break;
             end
             disp('i   a   b   c ')
             disp('.... .... .... ....')
             for i=1:100
                 if abs(b-a)<=0.0001
                         break;
                 end
                 c=b-((f(b)*(b-a))/(f(b)-f(a)));
                 disp([i  a  b c]);
                 if f(c)==0
                     disp('c is the root');
                     disp(c);
                    break;
                 elseif f(a)*f(c)<0
                     a=a;
                     b=c;
                 else
                     a=c;
                     b=b;
                 end
             end

    case 2 
        disp(' bisection ');
           f=inline('x-cos(x)');
           a=input('a');
             b=input('b');
             if f(a)*f(b)>0
                 disp('thereis no root');
                 break;
             end
             disp('i   a   b   c ')
             disp('.... .... .... ....')
             for i=1:100
                  if abs(b-a)<=0.001
                         break;
                  end
                 c=(a+b)/2;
                 disp([i  a  b c]);
                 if f(c)==0
                     disp('c is the root');
                     disp(c);
                    break;
                 elseif f(a)*f(c)<0
                     a=a;
                     b=c;
                 else
                     a=c;
                     b=b;
                    
                 end
             end
    case 3
        disp(' newton raphson');
        f=inline('ln(x-1)+cos(x-1)');
        ff=inline('(1/(x-1))-sin(x-1)');
        x1=input('x1=');
        disp('i  x1  xn');
        disp('.... .... .....');
        for i=1:100
            xn=x1-(f(x1)/ff(x1));
            
            if (abs(xn-x1)<=0.001)
                break;
            end
            disp([i  x1  xn]);
            x1=xn;
        end
    case 4
        disp(' computing A^1/2');
        A=input('A');
        x0=input('x0');
        disp('i  x0   x1');
        disp('... ... ...');
        for i=1:100
            xn=((x0^2+A)/(2*x0));
            
            if abs(xn-x0)<=0.001
                break;
            end
            disp([i  x0  xn]);
            x0=xn;
        end
    case 5
        disp(' A^1/n');
        A=input('A');
        x0=input('x0');
        n=input('n');
        disp('i  x0  xn');
        disp('... ... ...');
        for i=1:100
            xn=((n-1)*x0^(n)+A)/(n*x0^(n-1));
            
            if abs(xn-x0)<=0.001
                break
            end
            disp([i x0 xn]);
            x0=xn;
        end
        
    case 6
        disp(' 1/A');
        A=input('A');
        x0=input('x0');
       disp('i  x0  xn');
       disp('... ... ...');
       for i=1:100
           xn=x0*(2-(A*x0));
          
           if (abs(xn-x0)<=0.001)
               break;
           end
            disp([1 x0 xn]);
           x0=xn;
       end
    case 7
        disp(' secant');
        f=inline('x^(2)-2');
        x0=input('x0');
        x1=input('x1');
        disp('i x0  x1  xn');
        disp('... ... ... ...');
        for i=1:100
            xn=x1-(f(x1)*(x1-x0))/(f(x1)-f(x0));
            
            if (abs(xn-x1)<=0.001)
                break;
            end
            disp([i  x0  x1 xn])
            x0=x1;
            x1=xn;
        end 
        
end
        