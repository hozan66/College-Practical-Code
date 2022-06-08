%sum=1 -2/2! +3/3! -4/4! +5/5!
clear all
clc
k=1;
sum=0;
for i=1:5
    fac=1;
    for j=1:i
        fac=fac*j;
    end
    sum=sum+k*(i/fac);
     k=-k;
end
disp('sum=');
disp(sum);
    
    