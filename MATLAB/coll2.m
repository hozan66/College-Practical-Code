n=input('n=');
if (n<=100&&n>=80)
    disp('A');
elseif (n<=79&&n>=65)
    disp('B');
elseif (n<=64&&n>=50)
    disp('C');
elseif (n<50&&n>=0)
    disp('Fail');
else
    disp('The mark is invalid');
end