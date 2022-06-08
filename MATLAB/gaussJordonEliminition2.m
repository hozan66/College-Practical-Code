clear all
clc
a=input('a=');
b=input('b=');
[m n]=size(a);
if(n==m)
a
b
for i=1:m-1
    for z=2:m
        if(a(i,i)==0)
            t=a(i,:);
            a(i,:)=a(z,:);
            a(z,:)=t;
            
            t=b(i,:);
            b(i,:)=b(z,:);
            b(z,:)=t;
        end
    end
end
a
b
for j=1:m-1
    for i=j+1:m
        c=a(i,j)/a(j,j);
        a(i,:)=a(i,:)-a(j,:)*c;
        b(i,:)=b(i,:)-b(j,:)*c;
    end
end
a
b
for j=m:-1:2
    for i=j-1:-1:1
        c=a(i,j)/a(j,j);
        a(i,:)=a(i,:)-a(j,:)*c;
        b(i,:)=b(i,:)-b(j,:)*c;
    end
end
a
b
for s=1:m
    c=a(s,s);
    a(s,:)=a(s,:)/c;
    b(s,:)=b(s,:)/c;
end
disp('Gauss-Jordan method');
a
disp(b);
else
    disp('Not square');
end