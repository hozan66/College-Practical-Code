clear all
clc
p=input('p=');
q=input('q=');
disp('press 1 for addition');
disp('press 2 for find the root');
disp('press 3 for mult');
disp('press 4 for div');
disp('press 5 for derivative');

n= input('n=');
switch n;
    case 1
        n=length(p);
        m=length(q);
        if (n>m)
            %length(q)=n;
            for j=1:n-m
            for i=m:-1:1
                q(i+1)=q(i);
            end
            q(1)=0;
            m=m+1;
            end
            h=p+q;
            disp(h);
        elseif (n<m)
             %length(p)=m;
            for j=1:m-n
            for i=n:-1:1
                p(i+1)=p(i);
            end
            p(1)=0;
            n=n+1;
            end
            h=p+q;
            disp(h);
        else
           h=p+q;
            disp(h);
        end
      case 2
          disp('roots of p');
          a=roots(p);
          disp(a);
           disp('roots of q');
          b=roots(q);
          disp(b);
            case 3
                c=conv(p,q);
                disp(c);
                case 4
              [f r]=deconv(p,q);
                disp('Result');
                disp(f);
                disp('Remainder');
                 disp(r);
                 case 5
                     disp('derivative of p');
                     k=polyder(p);
                     disp(k);
                     disp('derivative of q');
                     k1=polyder(q);
                     disp(k1);
                
    otherwise
        disp('wrong choice');
end
        

        