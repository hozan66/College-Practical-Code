clear
close
clc

% Morphology (working on white and black image)
% original_image=imread('circbw.tif');
original_image=imread('text.png');
[row, col] = size(original_image);
% Convert it to black and white image
% original_image=gray2bw(original_image);

% structure element
structure_element=[0 1 0 ;1 1 1;0 1 0]; % Diamond
[row_SE, col_SE] = size(structure_element);
r = fix(row_SE / 2) + 1;
c = fix(col_SE / 2) + 1;

% Adding Zeros Padding
original_zero_border = zeros(row+(row_SE-1), col+(col_SE-1));
original_zero_border(r:end-(r-1),c:end-(c-1))=original_image(:,:);

% Dilation Image
[row_dilation, col_dilation] = size(original_zero_border);
dilation_image_zero_border=zeros(row_dilation, col_dilation);
% Erosion Image
[row_erosion, col_erosion] = size(original_zero_border);
erosion_image_zero_border=zeros(row_erosion, col_erosion);

for i = r : row_dilation - (r-1)
    for j = c : col_dilation - (c-1)
        result=[];
        index=1;
        for p = 1 : row_SE
            for q = 1 : col_SE
                if(structure_element(p, q)==0)
                    continue;
                else
                    result(index) =  structure_element(p, q) * original_zero_border(p + i-r, q + j-c);
                    index=index+1;
                end
            end
        end
        dilation_image_zero_border(i,j)=max(result); %%Dilation
        erosion_image_zero_border(i,j)=min(result);  %%Erostion
    end
end

% Removing Zeros Padding
dilation_image=dilation_image_zero_border(r:end-(r-1), c:end-(c-1));
erosion_image=erosion_image_zero_border(r:end-(r-1), c:end-(c-1));

% Show Images
subplot(1,3,1);
imshow(original_image); title('Origin Image');
subplot(1,3,2);
imshow(dilation_image); title('Dilation Image');
subplot(1,3,3);
imshow(erosion_image); title('Erosion Image');

% =================================================================
% Using built-in functions
DI=imdilate(original_image,structure_element);
EI=imerode(original_image,structure_element);
figure,
% Show built-in functions Images
subplot(1,3,1);
imshow(original_image); title('Origin Image');
subplot(1,3,2);
imshow(DI); title('built-in Dilation Image');
subplot(1,3,3);
imshow(EI); title('built-in Erosion Image');