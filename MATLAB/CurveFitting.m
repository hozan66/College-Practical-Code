function CurveFitting(x,y)

n=length(x);
sumx=sum(x);
sumy=sum(y);
sumx2=sum(x.^2);
sumxy=sum(x.*y);

a=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx^2));

b=((sumx2*sumy)-(sumxy*sumx))/((n*sumx2)-(sumx^2));
disp('a=');
disp(a);
disp('b=');
disp(b);
end