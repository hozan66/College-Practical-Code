var node=document.getElementById('kk');
var node1=document.getElementById('bb');

//child node
var node2=node.childNodes; //returns array of child node
alert(node2[0]);//returns the type of the first child [object HTMLElement]

//return the tag name
var node3=node2[0].nodeName;
//var node3=node2[0].tagName;//tagName is the same as nodeName
alert(node3);//b

//parent node
var node4=node1.parentNode;
alert(node4);//[object HTMLParagraphElement]

//return content
alert(node1.textContent);
//alert(node1.innerText); //those three are the same
//alert(node1.innerHTML);


//set the text content
node1.textContent='im super boooooldddd';
alert(node1.textContent);

//get the button value by nodeValue
var node5=document.getElementById('btn');
alert(node5.childNodes[0].nodeValue);

//set node value
node5.childNodes[0].nodeValue='try me';
alert(node5.childNodes[0].nodeValue);




