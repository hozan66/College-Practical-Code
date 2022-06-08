/*Node Type
1 ==> Element
2 ==> Attribute
3 ==> Text
8 ==> Comment
*/

var myMainDiv=document.getElementById('main');
    console.log(myMainDiv.childNodes[0]);
    console.log(myMainDiv.childNodes[0].nodeName);
    console.log(myMainDiv.childNodes[0].tagName);
    console.log(myMainDiv.childNodes[0].nodeValue);
    console.log(myMainDiv.childNodes[0].nodeType);

    console.log(myMainDiv.childNodes[1]);
    console.log(myMainDiv.childNodes[1].nodeName);
    console.log(myMainDiv.childNodes[1].tagName);
    console.log(myMainDiv.childNodes[1].nodeValue);
    console.log(myMainDiv.childNodes[1].childNodes[0].nodeValue);
    console.log(myMainDiv.childNodes[1].nodeType);

    console.log(myMainDiv.childNodes[3]);
    console.log(myMainDiv.childNodes[3].nodeName);
    console.log(myMainDiv.childNodes[3].tagName);
    console.log(myMainDiv.childNodes[3].nodeValue);
    console.log(myMainDiv.childNodes[3].firstChild.nodeValue);
    console.log(myMainDiv.childNodes[3].childNodes[1].nodeType);