var myDiv1=document.getElementById('main1');
    myDiv1.removeChild(myDiv1.firstChild);

var myDiv2=document.getElementById('main2');
    myDiv2.removeChild(myDiv2.firstElementChild);

var myDiv3=document.getElementById('main3');
    myDiv3.removeChild(myDiv3.childNodes[3]);

    console.log(myDiv3.childNodes);
    /*
   [text, p, text, text, p, text, p, text]
   */
var myDiv4=document.getElementById('main4');
    myDiv4.removeChild(myDiv4.lastChild);       

var myDiv5=document.getElementById('main5');
    myDiv5.removeChild(myDiv5.lastElementChild);    