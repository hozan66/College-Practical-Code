var myDiv=document.getElementById('main'),
    myButton=document.getElementsByTagName('button');

    myDiv.className+=' test';
    myDiv.className+=' osama';

    myButton[0].onclick=function()
    {
    	'use strict';
    	myDiv.classList.add('js','html','css');
    };

    myButton[1].onclick=function()
    {
    	'use strict';
    	myDiv.classList.remove('show','cool');
    };

    myButton[2].onclick=function()
    {
    	'use strict';
    	myDiv.classList.toggle('zero');
    };

var myDiv2=document.getElementById('ourtext');
    myButton[3].onclick=function()
    {
    	'use strict';
    	myDiv2.classList.toggle('hidden');
    };
 
 


  