var myCanvas=document.getElementById('c'),
    myContext=myCanvas.getContext('2d'),
    myCanvasWidth=myCanvas.width,
    myCanvasHeight=myCanvas.height;

    myContext.fillStyle='#EEE';           // fill color
    myContext.fillRect(0,0,myCanvasWidth,myCanvasHeight); // rectangle filled inside canvas

    myContext.strokeStyle="#F00";
    myContext.lineWidth=5;

    //Top Left Line
    myContext.moveTo(10,10);
    myContext.lineTo(130,130);

    //Top Right Line
    myContext.moveTo(290,10);
    myContext.lineTo(170,130);

    //Bottom Left Line
    myContext.moveTo(10,290);
    myContext.lineTo(130,170);

    //Bottom Right Line
    myContext.moveTo(290,290);
    myContext.lineTo(170,170);

    myContext.stroke();


