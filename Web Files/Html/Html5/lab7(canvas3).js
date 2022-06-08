var myCanvas=document.getElementById('c'),
    myContext=myCanvas.getContext('2d');
  
  myContext.font='60px Arial';

  myContext.fillStyle='#F00';
  //myContext.fillText('HOZAN',20,50);
  myContext.fillText('H',20,50);

  myContext.fillStyle='#0F0';
  myContext.fillText('O',40,70);

  myContext.fillStyle='#00F';
  myContext.fillText('Z',60,90);

  myContext.fillStyle='#FF0';
  myContext.fillText('A',80,110);

  myContext.fillStyle='#0FF';
  myContext.fillText('N',100,130);

  myContext.strokeStyle='brown';
  myContext.strokeText('School',50,200);