%  clear all
clear
clc
% Bit Plane use build-in function
% A=imread('cameraman.tif');
A=imread('coins.png');

B=bitget(A,1); figure, imshow(logical(B));title('Bit plane 1');
B=bitget(A,2); figure, imshow(logical(B));title('Bit plane 2');
B=bitget(A,3); figure, imshow(logical(B));title('Bit plane 3');
B=bitget(A,4); figure, imshow(logical(B));title('Bit plane 4');
B=bitget(A,5); figure, imshow(logical(B));title('Bit plane 5');
B=bitget(A,6); figure, imshow(logical(B));title('Bit plane 6');
B=bitget(A,7); figure, imshow(logical(B));title('Bit plane 7');
B=bitget(A,8); figure, imshow(logical(B));title('Bit plane 8');figure,


% quiz
% 3 5 6
% 1 2 4 7 8
% Bit Plane use any using gray-level

% original=imread('cameraman.tif');
original=imread('coins.png');
% original=[167 133 111;144 140 135;159 154 148];
[row, col]=size(original);
index=1;

original=255-original;
% for i=1:row
%     for j=1:col
%         original(i,j)=255-original(i,j);
%     end
% end

for k=1:8
    new_mat=zeros(row, col);
    for i=1:row
        for j=1:col
            new_mat(i,j)=mod(original(i,j),2);
            original(i,j)=fix(original(i,j)/2);
        end
    end
    
    if (k~=3 && k~=5 && k~=6)
        new_mat=uint8(new_mat);
        subplot(2,3,index);
        imshow(mat2gray(new_mat));title(['Bit Plane ', num2str(k)]);
        index=index+1;
    end
end

