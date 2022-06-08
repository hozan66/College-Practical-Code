var boddy=document.body;
//var n1=document.getElementById('pp');
var n2=document.getElementById('bb');

//create new Element i
var newnode=document.createElement('i');
    newnode.innerText='new added node';

var n3=boddy.insertBefore(newnode,boddy.firstChild);
    alert(n3.innerText); //new added node  //returns the new value

var n4=n2.nextSibling.nextSibling;
    alert(n4.innerText); //italic is the third child

var n5=n4.previousSibling.previousSibling;
    alert(n5.innerText);//bold is the first child  //n2=n5

var n6=n4.parentNode;
    alert(n6.nodeName); //p