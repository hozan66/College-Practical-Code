clear all
clc
a=input('a=');
[m n]=size(a);
if(n==m)
a
for i=1:m-1
    for z=2:m
        if(a(i,i)==0)
            t=a(i,:);
            a(i,:)=a(z,:);
            a(z,:)=t;
        end
    end
end
a
for j=1:m-1
    for i=j+1:m
        a(i,:)=a(i,:)-a(j,:)*(a(i,j)/a(j,j));
    end
end
a
for j=m:-1:2
    for i=j-1:-1:1
        a(i,:)=a(i,:)-a(j,:)*(a(i,j)/a(j,j));
    end
end
a
for s=1:m
    a(s,:)=a(s,:)/a(s,s);
end
disp('Gauss-Jordan method');
disp(a);
else
    disp('Not square');
end