clear all
clc
a=[2 -1 1; 3 2 -4; 1 2 1];
b=[3; 0; 0];
ax=[3 1 1; 0 -1 -1; 0 2 1];
ay=[2 3 1; 1 0 -1; 1 0 1];
az=[2 1 3; 1 -1 0; 1 2 0];

x=det(ax)/det(a);
y=det(ay)/det(a);
z=det(az)/det(a);
disp([x y z]);