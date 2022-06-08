//create the main element
var myElement=document.createElement('div');

//Append to body
document.body.appendChild(myElement);

//create text node
var myText=document.createTextNode('This Div Created By Javascript');

//create comment
var myComment=document.createComment('This Comment Created By Javascript');

//Add the Comment to my created element
myElement.appendChild(myComment);

//Add the text to my created element
myElement.appendChild(myText);




