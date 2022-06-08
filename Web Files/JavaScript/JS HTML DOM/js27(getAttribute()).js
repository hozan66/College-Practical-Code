var node=document.getElementById('pp');
//get attribute value
//alert(node.getAttribute('name'));//para
//alert(node.id);//pp
//alert(node.attributes['class'].value);//tt
//alert(node.getAttributeNode('align').value);//left

//set attribute
node.setAttribute('title','this is a paragraph');
node.align='right';
//alert(node.getAttribute('align'));//right

//custom attribute
node.mycolor='red';
//alert(node.getAttribute('mycolor'));//null

//alert(node.attributes.length);//6
node.removeAttribute('dir');
//alert(node.attributes.length);//5

//use attributes property to get attribute value
var att=node.attributes;
//alert(att[0].nodeName);//id
//alert(att[0].nodeValue);//pp

//attr node
//create new attr node
var newAttr=document.createAttribute('title'); 		
newAttr.value='new title'; 

//append the new attr to the element
node.setAttributeNode(newAttr);
//alert(node.attributes.length);//5