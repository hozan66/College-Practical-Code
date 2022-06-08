% clear all
clear
clc
% Zoom-in using zero hold method

origin_image=[3 4; 5 7;10 20];
% origin_image=[3 4; 5 7];
disp(origin_image);
[n, m]=size(origin_image);
n=n*2-1;
m=m*2-1;

new_image=zeros(n,m);
[row, col]=size(new_image);
new_image(1:2:row,1:2:col)=origin_image(:,:);
disp(new_image);

% Working on row
for i=1:2:row
    for j=2:2:col
        num=fix((new_image(i,j-1)+new_image(i,j+1))/2);
        new_image(i,j)=num;
    end
end
disp(new_image);

% Working on column
for i=2:2:row
    for j=1:col
        num=fix((new_image(i-1,j)+new_image(i+1,j))/2);
        new_image(i,j)=num;
    end
end
disp(new_image);

