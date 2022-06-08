/*
document.body
document.anchors  //a
document.links    //href
*/

var myDiv1=document.getElementById('show');
    myDiv1.innerText=document.body.innerText;


if(document.body.innerText.indexOf('xzerox') > -1)
     console.log('Yes this string is Exist');

var myDiv2=document.getElementById('show2');
    myDiv2.innerText='Number of links: ' + document.links.length;

var myDiv3=document.getElementById('show3');
    myDiv3.innerText='Number of anchors: ' + document.anchors.length;
