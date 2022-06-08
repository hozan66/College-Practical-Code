var pnode=document.getElementById('pp');
var bnode=document.getElementById('bb');

//Remove the last child (fourth child) of p "i"
var rmvnode=pnode.removeChild(pnode.lastChild);//returns the removed child
    alert(rmvnode.innerHTML);

//append existing child (moving the child)
var bdy=document.body;
var bdych=bdy.childNodes;
var bdych1=bdych[1];
    alert(bdych1.innerHTML);

var n4=pnode.appendChild(bdych[1]);
//because h1 is already in the tree, 
//only its location will be changed to be the last node child of (p)
    alert(n4==bdych1);//true
