clear all
clc
disp('Enter a number');
n=input('n=');
sum=0;
for i=1:n
    for j=2:i
        if (rem(i,j)==0)
            break;
        end
    end
    if(j==i)
        sum=sum+i;
    end
end
disp('sumprime=');
disp(sum);
%find summation of prime numbers from 1 to n
%assuming that 1 is not prime
            