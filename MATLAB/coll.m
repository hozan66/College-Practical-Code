t=0:0.05:4;
y=((t.^2)/(t+1))+3*exp(-4*t).*cos(5*t)-((2*exp(-3*t))/(sin(2*t)));
plot(t,y,'g:o');
xlabel('axes x');
ylabel('axes y');
title('Our Exam');
