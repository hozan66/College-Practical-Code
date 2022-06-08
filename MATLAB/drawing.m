clear all
clc
x=linspace(0,2*pi,90);
y=sin(x);
z=cos(x);
plot(x,y,'r--d');
hold on % for merge more than one graph
plot(x,z,'g:s');
%or plot(x,y,'r--d',x,z,'g:s');
title('Two figures');
xlabel('axes x');
ylabel('axes y');
legend('sin','cos');
text(1,0.8,'pop');
gtext('koko');
axis([0 6 -0.8 0.8]);