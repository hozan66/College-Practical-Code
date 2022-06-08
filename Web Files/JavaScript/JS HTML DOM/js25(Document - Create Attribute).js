var myElement=document.getElementById('main'),
    //create the Attribute
    myAttr=document.createAttribute('class'),
    //create the Second Attribute
    mySecondAttr=document.createAttribute('title');

     //Change or Set Attribute Value
    myAttr.value='custom';
     //Change or Set the Second Attribute Value
    mySecondAttr.value='Zero';

    //Add this Attribute to the Element
    myElement.setAttributeNode(myAttr);
    //Add the Second Attribute to the Element
    myElement.setAttributeNode(mySecondAttr);


