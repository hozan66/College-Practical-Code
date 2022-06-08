//create the canvas on page
var myPageCanvas=document.createElement('canvas');

//assign Id to this canvas
myPageCanvas.id='c';

//customize the canvas
myPageCanvas.width=600;
myPageCanvas.height=100;
myPageCanvas.style.display='block';
myPageCanvas.style.margin='50px auto';

//add the canvas to the page
document.body.appendChild(myPageCanvas);

//get canvas Information
var myCanvas=document.getElementById('c'),
    myContext=myCanvas.getContext('2d');

//fill and style option
myContext.fillStyle='#F00';
myContext.strokeStyle='#00F';
myContext.lineWidth=4;
myContext.font='60px Arial';

//add the text
myContext.fillText('Elzero Web School',50,80);
myContext.strokeText('Elzero Web School',50,80);

//add the second text
myContext.strokeStyle='#080';
myContext.lineWidth=2;
myContext.strokeText('Elzero Web School',50,80);