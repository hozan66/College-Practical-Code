clear all
clc
c=zeros(3);
for i=1:3
    for j=1:3
        if (i==j)
            c(i,j)=2;
        elseif (i<j)
             c(i,j)=7;
             elseif (i>j)
             c(i,j)=9;
        end
    end
end
disp(c);