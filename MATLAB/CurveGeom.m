function CurveGeom(x,y)
n=length(x);
y=log(y);
x=log(x);
sumx=sum(x);
sumy=sum(y);
sumx2=sum(x.^2);
sumxy=sum(x.*y);

a=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx^2));

b=((sumx2*sumy)-(sumxy*sumx))/((n*sumx2)-(sumx^2));
disp('lna=');
disp(a);
disp('lnb=');
disp(b);

disp('a=');
disp(exp(a));
disp('b=');
disp(exp(b));
end