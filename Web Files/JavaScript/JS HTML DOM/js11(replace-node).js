function replaceItem()
{
//create new element with its text content
	var newElement=document.createElement('i');

	//newElement.innerHTML='italic paragraph';

	var textnode=document.createTextNode('italic paragraph');
		newElement.appendChild(textnode);
					
	//get the paragraph children
	var node=document.getElementById('pp');
					
	//replace the first child of the paragraph with the newly created element
	var node3=node.replaceChild(newElement,node.firstChild);
					
	//replaceChild returns the removed (old) child
	alert(node3.innerHTML);
}