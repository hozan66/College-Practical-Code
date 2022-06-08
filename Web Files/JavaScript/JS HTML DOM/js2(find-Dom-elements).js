/*
[1] - document.getElementById()
[2] - document.getElementsByTagName()
[3] - document.getElementByClassName() // Not Compatible With IE 8
[4] - document.querySelectorAll()      // Not Compatible With IE 8
*/

var myDiv=document.getElementById('test');
    myDiv.innerHTML='Changed By Javascript';

var myElement=document.getElementsByTagName('p');
    myElement[3].innerHTML='Changed By Javascript';
    console.log(myElement.length);   /*brings number of p*/

var myElement2=document.getElementsByClassName('test');
    myElement2[1].innerHTML='Changed By Javascript';

var myElement3=document.querySelectorAll('div.test');
    myElement3[4].innerHTML='Changed';