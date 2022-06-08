/*
    document.title   //brings the title
    document.images.src  //brings source of photo
    document.forms   //can bring attributes of form
*/

var myDiv1=document.getElementById('show1');
    myDiv1.innerHTML='Our Title: ' + document.title;

var myDiv2=document.getElementById('show2');
    myDiv2.innerHTML='Number of image: ' + document.images.length;

var myDiv3=document.getElementById('show3');

     for (var i = 0; i < document.images.length; i++) {
    	document.write('<br>' + document.images[i].src + '<br>');
    }

var myDiv4=document.getElementById('show4');
    myDiv4.innerText='Number of form: ' + document.forms.length;

var myDiv5=document.getElementById('show5');
    myDiv5.innerText=document.forms[0].x2.value;

var myDiv6=document.getElementById('show6');
    myDiv6.innerText=document.forms[1].z1.type;


