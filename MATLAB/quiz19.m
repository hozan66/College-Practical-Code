%find summation of odd and even numbers in matrix??
clear all
clc
a=input('a=');
[n m]=size(a);
sumeven=0;
sumodd=0;
for i=1:n
    for j=1:m
        if(rem(a(i,j),2)==0)
            sumeven=sumeven+a(i,j);
        else
             sumodd=sumodd+a(i,j);
        end
    end
end
disp('sumeven');
disp(sumeven);
disp('sumodd');
disp(sumodd);