var node=document.getElementById('pp');

//create text node
var newtxt1=document.createTextNode('hello ');
var newtxt2=document.createTextNode('world!');

//append the text nodes to the paragraph element
node.appendChild(newtxt1); 
node.appendChild(newtxt2); 
//alert(node.childNodes.length);//2

//normalize or merge the two text nodes
node.normalize();
//alert(node.childNodes.length);//1

//split text node
var newNode=node.firstChild.splitText(5); //split text node(char). with  index 5, & returns the new(remain) text node
//alert(node.childNodes[0].nodeValue); 			//”Hello”
//alert(node.childNodes[1].nodeValue); 			//"world!”
//alert(newNode.nodeValue); 				//” world!”
//alert(node.childNodes.length); 			//2

//append text at end of text node
node.childNodes[0].appendData('hhhhhhh'); 

//delete text from specific position
node.childNodes[0].deleteData(5,7); 

//insert text at specific position
node.childNodes[0].insertData(5,'goodbye'); 

//replace piece of text with another text
node.childNodes[0].replaceData(5,7,' bye bye'); 

//retrieve sub string
var pieceofString=node.childNodes[0].substringData(5,8);
//alert(pieceofString);// bye bye